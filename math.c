#include <stdio.h>
#include <stdlib.h>


int problem_one() {
  int sum = 0;
  for (int i = 1; i < 1000; i ++) {
    if (i%3 == 0 || i%5 == 0) {
      sum += i;
    } 
  }
  return sum; 
}

int problem_two() {
  int i = 1;
  int j = 2;
  int sum = 0; 
  while (i < 4000000) {
    if (i%2 == 0) sum += i;
    if (j%2 == 0) sum += j;
    i = i + j;
    j = i + j;
 
  } 
  return sum;

}
 
 
int main() {
  printf("The sum of all the multiples of 3 or 5 below 1000 is %d\n", problem_one());
  printf("The sum of the even-valued terms of the Fibonacci sequence is %d\n", problem_two());
}
