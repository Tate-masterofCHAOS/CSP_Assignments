#include <stdio.h>
#include <string.h>
int i;
int usr;
char one[50];
char two[50];
char three[49];
int main(void){
    printf("Give me a number: ");
    scanf("%d", &usr);
    printf("Give me a short word: \n");
    scanf("%s", &one);
    printf("Give me another short word: \n");
    scanf("%s", &two);
    strcat(three, one);
    strcat(three, two);
    for(i=0;i<=usr;i++){
        if(i%3==0 && i%5==0){
            printf("%s\n", three);
        }else if(i%3==0){
            printf("%s\n", one);
        }else if(i%5==0){
            printf("%s\n", two);
        }else{
        printf("%d\n", i);
        }
    }
    
    return 0;
}