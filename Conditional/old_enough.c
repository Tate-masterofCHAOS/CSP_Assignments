#include <stdio.h>
int age = 18;
int main() {
    if (age >= 18){
        printf("wow you can drive go to college and vote now");
    }else if (age >= 16){
        printf("your old enough to go to school and drive alone");
    }else if (age >= 15){
        printf("your old enough to go to school and drive as long as there is a registered adult in the car with you");
    }else if (age >= 5){
        printf("you can go to school");
    }else{
        printf("get off the keyboard you toddler");
    }
    return 0;
}

