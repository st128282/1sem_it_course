# pragma once
#include <fstream>
#include <vector>
bool prime_num(int a);
void prime_num_betweenA_B(int a, int b, std::vector<int> &referenceprimeA_B);
void recordInFile(std::vector<int> &referenceprimeA_B);