//
// Created by GooJin on 2024. 8. 28..
//
#include <iostream>
#include <string>

using namespace std;

int main() {
  string name, addr;

  cout << "name : ";
  cin >> name;
  cin.ignore(); // enter 키 삭제

  cout << "address : ";
  getline(cin, addr); // enter 키 없이 입력 가능
  cout << addr << "의 " << name << "씨, 안녕하세요!" << endl;

  return 0;
}
