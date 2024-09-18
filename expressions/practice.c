#include <stdio.h>
#include <math.h>

int main() {
    double firstQuestion = 7 - 24.0 / 8 * 4 + 6;
    double secondQuestion = 18.0 / 3 - 7 + 2 * 5;
    double thirdQuestion = 6 * 4.0 / 12 + 72.0 / 8 - 9;
    double fourthQuestion = (17 - 6.0 / 2) + 4 * 3;
    double fifthQuestion = -2 * (1 * 4 - 2.0 / 2) + (6 + 2 - 3);
    double sixthQuestion = -1 * ((3 - 4 * 7.0) / 5) - 2 * 24.0 / 6;
    double seventhQuestion = (3 * pow(5, 2) / 15) - (5 - pow(2, 2));
    double eighthQuestion = (pow(1, 4) * pow(2, 2) + pow(3, 3)) - pow(2, 5) / 4;
    double finalQuestion = pow((22.0 / 2 - 2 * 5), 2) + pow((4 - 6.0 / 6), 2);

    printf("%f\n", firstQuestion);
    printf("%f\n", secondQuestion);
    printf("%f\n", thirdQuestion);
    printf("%f\n", fourthQuestion);
    printf("%f\n", fifthQuestion);
    printf("%f\n", sixthQuestion);
    printf("%f\n", seventhQuestion);
    printf("%f\n", eighthQuestion);
    printf("%f\n", finalQuestion);

    return 0;
}
