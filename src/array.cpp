//
// Created by GooJin on 2024. 8. 26..
//
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  int list[10];

  // 참조자(&)는 배열 요소의 값을 변경한다.
  for (int &i : list) {
    i = rand() % 100 + 1;
    cout << i << " ";
  }
  cout << endl;

  int max = list[0];
  for (int i : list) {
    if (i > max) {
      max = i;
    }
  }

  cout << max << endl;
  return 0;
}