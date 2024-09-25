#include <stdio.h>
float income, rent, utilities, groceries, transportation, savings, expenses, spend;

float input(char type[], float var){
    printf("monthly %s:\n", type);
    scanf("%f", &var);
    return var;
}


void percent(char type[], int amount){
    int per = amount/income *100;

    printf("your %s is %d%%" " of your income.\n", type, per);
}


int main(void){
    printf("This is a budget calculator.\n");
    income = input("income", income);
    rent = input("rent", rent);
    utilities = input("utilities", utilities);
    groceries = input("groceries", groceries);
    transportation = input("transportation", transportation);
    expenses = rent + utilities + groceries + transportation;
    savings = income * .2;
    spend = income - expenses - savings;
    printf("You make %.2f\n", income);
    printf("Your expenses are %.2f\n", expenses);
    printf("Your savings are %.2f\n", savings);
    printf("Your spending money is %.2f\n", spend);
    percent("rent", rent);
    percent("utilities", utilities);
    percent("groceries", groceries);
    percent("transportation", transportation);
    percent("expenses", expenses);
    percent("savings", savings);
    percent("spending money", spend);
  
    return 0;
}