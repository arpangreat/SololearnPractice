#include<stdio.h>

int main() {
    int x = 6;

    switch(x) {
        case 1:
        case 2:
        case 3:
            printf("1 , 2 and 3 \n");
            
            break;

        case 4:
        case 5:
        case 6:
            printf("4 , 5 and 6 \n");

            break;

        default:
            printf("not in the value");

    }

return 0;
}
