//
// Created by GooJin on 2024. 8. 26..
//
#include <iostream>

using namespace std;

void printBoard(char board[3][3]) {
  cout << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "| " << board[i][j] << " |";
    }
    cout << endl;
  }
}

bool checkWin(char board[3][3], char cur) {
  cout << endl;

  for (int i = 0; i < 3; i++) {
    if (board[i][0] == cur && board[i][1] == cur && board[i][2] == cur) {
      cout << "winner : " << cur;
      return true;
    }
  }

  for (int i = 0; i < 3; i++) {
    if (board[0][i] == cur && board[1][i] == cur && board[2][i] == cur) {
      cout << "winner : " << cur;
      return true;
    }
  }

  if (board[0][0] == cur && board[1][1] == cur && board[2][2] == cur) {
    cout << "winner : " << cur;
    return true;
  }

  if (board[0][2] == cur && board[1][1] == cur && board[2][0] == cur) {
    cout << "winner : " << cur;
    return true;
  }

  return false;
}

int main() {
  char board[3][3];
  int a, b;
  char cur = 'X';
  bool winner = false;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      board[i][j] = ' ';
    }
  }

  for (int i = 0; i < 9; i++) {
    printBoard(board);
    cout << "위치를 입력해주세요: ";
    cin >> a >> b;

    if (a < 0 || a > 2 || b < 0 || b > 2) {
      cout << "다시 입력해주세요: " << endl;
      i--;
      continue;
    }

    if (board[a][b] == ' ') {
      board[a][b] = cur;

      if (checkWin(board, cur)) {
        printBoard(board);
        winner = true;
        break;
      }

      cur = (cur == 'X') ? 'O' : 'X';

    } else {
      cout << "이미 입력된 위치입니다." << endl;
      i--;
    }
  }

  if (!winner) {
    cout << "무승부입니다." << endl;
  }

  return 0;
}
