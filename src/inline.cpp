//
// Created by GooJin on 2024. 8. 28..
//
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

inline int odd(int i) {
  return (i % 2);
}

int main() {
  int sum = 0;

  auto start = high_resolution_clock::now();
  for (int i = 1; i <= 1000; i++) {
    if (odd(i)) { // 컴파일 시 함수 치환
      sum += i;
    }
  }
  auto end = high_resolution_clock::now();
  auto duration = duration_cast<milliseconds>(end - start);
  cout << "Time taken by inline: " << duration.count() << " ms" << endl;

  return 0;
}
