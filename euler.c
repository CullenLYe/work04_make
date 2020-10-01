#include <stdio.h>
#include <stdlib.h>
#include "euler.h"

int problem1(int n) {
  int answer1 = 0, i;
  for (i = 3; i < n; i+=3) answer1+=i;
  for (i = 5; i < 1000; i+=5) if (i%3!=0) answer1+=i;
  return answer1;
}

int problem6(int n) {
  int i1 = 0, i2 = 0, i;
  for (i = 1; i <= n; i++) {
    i1+=i*i;
    i2+=i;
  }
  return i2*i2-i1;
}
