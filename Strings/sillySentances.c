#include <stdio.h>
#include <string.h>

int main(void){
    char animal[20];
    char place[20];
    char verb[20];
    char sentence[400] = "The ";
    printf("Name an animal: ");
    scanf(animal);
    printf("Name an place: ");
    scanf(place);
    printf("Name an past tense verb: ");
    scanf(verb);
    strcat(sentence, animal);
    strcat(sentence, " went to the ");
    strcat(sentence, place);
    strcat(sentence, " and ");
    strcat(sentence, verb);
    strcat(sentence," with his friend the angry turtle");
    printf("%s", sentence);
    return 0;
}