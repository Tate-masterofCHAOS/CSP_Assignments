#include <stdio.h>

int main(void){
    float income, rent, utilities, groceries, transportation, savings, expenses, spend;
    float prent, putilities, pgorceries, ptransportation, psavings, pexpenses
    printf("This is a budget calculator. How much do you make a month?\n");
    scanf("%f", &income);
    printf("How much does your rent cost?\n");
    scanf("%f", &rent);
    printf("How much does your utilities cost?\n");
    scanf("%f", &utilities);
    printf("How much do your groceries cost?\n");
    scanf("%f", &groceries);
    printf("How much does your transportation cost?\n");
    scanf("%f", &transportation);
    expenses = rent + utilities + groceries + transportation;
    savings = income * .2;
    spend = income - expenses - savings;
    printf("You make %.2f\n", &income);
    printf("Your expenses are %.2f\n", &expenses);
    printf("Your savings are %.2f\n", &savings);
    printf("Your spending money is %.2f\n", &spend);
    prent = rent/income * 100;
    putilities = utilities/income * 100;
    ptransportation = transportation/income * 100;
    psavings = savings/income * 100;
    pexpenses = expenses/income * 100;
    print("your rent is %d%%" of your income.\n, (int) prent);
    print("your utilities is %d%%" of your income.\n, (int) putilities);
    print("your transportation is %d%%" of your income.\n, (int) ptransportation);
    return 0;
}