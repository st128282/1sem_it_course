#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int a = 13;
  int b = 43;
  if ((a < b ) && (b < 250000)){
    for(int i {a}; i <= b; i++)
    {
      int c = 0;
      for(int j {2}; int(j <= sqrt(i)); j++)
      {
        if (i % j == 0)
        {
          c = c + 1;
          break;
        }
      }
      if (c == 0)
      {
        std::cout << i << std::endl;
      }
    }
  }
}
