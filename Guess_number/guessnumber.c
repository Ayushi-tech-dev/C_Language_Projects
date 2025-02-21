#include<stdio.h>
#include <stdlib.h>
#include<time.h>
int main(void){
    int guess, random;
    srand(time(0));
    random= rand()%100 +1;
    printf("WELCOME TO NUMBER GUESSING GAME\n\n");

    for (int i = 0; i <5; i++)
    {
        printf("ENTER NUMBER (1 to 100): \n");
        scanf("%d",&guess);
        if (guess==random){
            printf("congratulations number is %d\n",random);
            printf("No. of attempts used %d",i+1);
            return 0;
        }else if(guess < random){
            printf("Guess a higher number, TRY AGAIN\n");
        }else{
            printf("Guess a lower number, TRY AGAIN\n");
        }
    }
    printf("Sorry you have used all 5 attempts the number is %d",random);
    return 0;
}