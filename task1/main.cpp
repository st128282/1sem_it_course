#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>

#include "prime_num.hpp"

int main() {
  std::ifstream fin;
  fin.open("in.txt");
  
  int a = 0;
  int b = 0;
  fin >> a >> b;
  
  std::vector<int> primeNums;
  getPrimeNums(a,b, primeNums);
  
  recordInFile(primeNums);
}
