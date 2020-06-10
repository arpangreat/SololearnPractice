#include<stdio.h>

int main() {

    int a, count = 0;
    printf("Enter your choice: ");
    scanf("%d", &a);

    while(count < a) {
        printf("Printing %d \n", count+1);
        count++;
    }

return 0;
}
