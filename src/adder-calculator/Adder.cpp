//
// Created by GooJin on 2024. 9. 2..
//

#include "Adder.h"

Adder::Adder(int a, int b) {
  x = a, y = b;
}

int Adder::process() {
  return x + y;
}
