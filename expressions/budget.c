#include <stdio.h>

int main(void){
    char income[9];
    char utilities[9]
    char groceries[9]
    char car[9]
    printf("This is a budget calculator. How much do you make a month?");
    scanf("%s", income);
     printf("How much do your utilities cost?");
    scanf("%s", utilities);
    printf("You make %f\n", income);
    float spend[] = (float) income - (float) utilities;
    printf("%f",spend);
    return 0;
}