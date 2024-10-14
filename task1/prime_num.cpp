#include <cmath>
#include <fstream>
#include <vector>

#include "prime_num.hpp"

bool isPrimeNum(int a);

bool isPrimeNum(int a) {
  if (a<2){return false;}
  for(int i {2}; i <= sqrt(a); i++) {
    if (a % i == 0) {
      return false;
    }
  }
  return true;
}

void getPrimeNums(int a, int b, std::vector<int> &primeNums) {
  if (!((a > 0) && (b > a) && (b < 250000))) {
    return;
  }
  
  for(int i {a}; i <= b; i++) {
    if (isPrimeNum(i)) {
      primeNums.push_back(i);
    }
  }
}

void recordInFile(const std::vector<int> &primeNums) {
  std::ofstream fout;
  fout.open("out.txt");
  
  for (int x : primeNums) {
    fout << x << std::endl;
  }
  
  fout.close();
}
