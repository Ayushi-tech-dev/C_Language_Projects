#include <stdio.h>

int main(void) {
    int i;
    int ans1, ans2, ans3, ans4, ans5;
    int point1, point2, point3, point4, point5;
    int totalPoints = 0;

    printf("WELCOME TO THE GAME \n\n");
    printf("> Press 7 to start the game \n");
    printf("> Press 0 to quit the game \n");

    scanf("%d", &i);

    if (i == 7) {
        printf("The game has started\n\n");

        // Question 1
        printf("1.) Which movie is this from 'Deewano ki baatein sirf deewane samajhte hai'\n\n");
        printf("1) 1920 Evil Returns\n");
        printf("2) 1920\n");
        printf("3) Raaz\n");
        printf("4) Bhoot bangla\n\n");
        printf("Enter your answer: \n\n");
        scanf("%d", &ans1);

        if (ans1 == 1) {
            printf("Congrats, Right answer\n");
            point1 = 5;
        } else {
            printf("Better Luck Next Time\n");
            point1 = 0;
        }
        totalPoints += point1;
        printf("You have scored %d point\n\n", point1);

        // Question 2
        printf("2.) Which Movie is this from: 'We dance to express ... not to impress'\n\n");
        printf("1) Devdas\n");
        printf("2) Dishoom\n");
        printf("3) Anybody Can Dance 2\n");
        printf("4) Dishoom\n\n");
        printf("Enter your answer: \n\n");
        scanf("%d", &ans2);

        if (ans2 == 3) {
            printf("Congrats, Right answer\n");
            point2 = 5;
        } else {
            printf("Better Luck Next Time\n");
            point2 = 0;
        }
        totalPoints += point2;
        printf("You have scored %d point\n\n", point2);

        // Question 3
        printf("3.) Which movie is this from: 'Dare hue log aksar alfazon ke peeche chupte hai'\n\n");
        printf("1) Aye Dil Hai Mushkil\n");
        printf("2) Phir Bhi Dil Hai Hindustani\n");
        printf("3) Dilwale\n");
        printf("4) Muskaan\n\n");
        printf("Enter your answer: \n\n");
        scanf("%d", &ans3);

        if (ans3 == 2) {
            printf("Congrats, Right answer\n");
            point3 = 5;
        } else {
            printf("Better Luck Next Time\n");
            point3 = 0;
        }
        totalPoints += point3;
        printf("You have scored %d point\n\n", point3);

        // Question 4
        printf("4.) Which movie is this quote from 'Poore duniya mein sabse kamzor dil ek Indian baap ka hota hai'\n\n");
        printf("1) Mere Baap Pehle Aap\n");
        printf("2) Sholay\n");
        printf("3) Badrinath Ki Dulhaniya\n");
        printf("4) Dishoom\n\n");
        printf("Enter your answer: \n\n");
        scanf("%d", &ans4);

        if (ans4 == 1) {
            printf("Congrats, Right answer\n");
            point4 = 5;
        } else {
            printf("Better Luck Next Time\n");
            point4 = 0;
        }
        totalPoints += point4;
        printf("You have scored %d point\n\n", point4);

        // Question 5
        printf("5.) Which movie is this quote from 'Kayi baar kismat badalne ke liye khudko badalna padta hai'\n\n");
        printf("1) A Gentlemen\n");
        printf("2) Student of the Year\n");
        printf("3) Hasee Toh Phasee\n");
        printf("4) Dilwale Dulhaniya Le Jaayenge\n\n");
        printf("Enter your answer: \n\n");
        scanf("%d", &ans5);

        if (ans5 == 3) {
            printf("Congrats, Right answer\n");
            point5 = 5;
        } else {
            printf("Better Luck Next Time\n");
            point5 = 0;
        }
        totalPoints += point5;
        printf("You have scored %d point\n\n", point5);

        // Display total points
        printf("Your total score is %d points\n\n", totalPoints);

    } else if (i == 0) {
        printf("THANKS FOR PLAYING\n");
    } else {
        printf("Not Valid\n");
    }

    return 0;
}
