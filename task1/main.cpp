#include <iostream>
#include <cmath>
#include <fstream>
#include "prime_num.hpp"
#include <vector>

int main()
{
  std::vector<int> primeA_B;
  std::vector <int> & referenceprimeA_B = primeA_B;
  int a, b;
  std::ifstream fin;
  fin.open("in.txt");
  fin >> a;
  fin >> b;
  prime_num_betweenA_B(a,b, primeA_B);
  recordInFile(primeA_B);
