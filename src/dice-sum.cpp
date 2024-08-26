//
// Created by GooJin on 2024. 8. 26..
//
#include "iostream"
#include "ctime"
#include "cstdlib"

using namespace std;

int main() {
  srand(time(NULL)); // 난수 seed

  // rand : 0~1 사이의 난수
  int dice1 = (rand() % 6) + 1;
  int dice2 = (rand() % 6) + 1;

  cout << "두 주사위의 합 : " << dice1 + dice2 << endl;
  return 0;
}