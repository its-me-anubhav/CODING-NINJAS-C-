#include <stdio.h>
int main () {
    int age;
    printf("Enter a age\n");
    scanf("%d", &age);
    if(age >= 18) {
        printf("You can vote");
    }
    else {
        printf(" You can not vote");
    }
    return 0;
}