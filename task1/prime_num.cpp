#include <cmath>
#include <iostream>
#include <fstream>
#include <vector>
bool prime_num(int a)
{
  for(int i {2}; i <= sqrt(a); i++)
  {
    if (a % i == 0)
    {
      return false;
    }
  }
  return true;
}
void prime_num_betweenA_B(int a, int b, std::vector<int> &referenceprimeA_B)
{
  if ((a > 0) & (b > a) & (b < 250000))
  {
    for(int i {a}; i <= b; i++)
    {
      if (prime_num(i) & (i != 1))
      {
        referenceprimeA_B.push_back(i);
      }
    }
  }
}
void recordInFile(std::vector<int> &referenceprimeA_B)
{
  std::ofstream fout;
  fout.open("out.txt");
  for (int i {0}; i < referenceprimeA_B.size(); i++)
  {
    fout<< referenceprimeA_B[i] <<std::endl;
  }
  fout.close();
}