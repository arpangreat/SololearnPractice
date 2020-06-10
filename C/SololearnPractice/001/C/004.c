#include<stdio.h>

int square(int x);

int main() {
    int val,res;
    printf("Enter your number: ");
    scanf("%d", &val);

    res = square(val);

    printf("%d is squared to %d \n", val, res);

return 0;
}

int square(int x) {
  int y;
  y = x * x;
  return(y);
}
