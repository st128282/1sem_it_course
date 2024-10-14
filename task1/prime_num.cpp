#include <cmath>
#include <fstream>
#include <vector>

#include "prime_num.hpp"

bool isPrimeNum(int a);

//TODO Дописать функцию, чтобы ответ был правильным для всех входных чисел
bool isPrimeNum(int a) {
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
