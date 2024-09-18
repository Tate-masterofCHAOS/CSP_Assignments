#include <stdio.h>

int main(void){
    char Name[5];
    printf("What is your name: ");
    scanf("%s", &Name);
    printf("?!?%s?!?", Name);
    return 0;
}