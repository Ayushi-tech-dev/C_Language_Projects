#include<stdio.h>
#include<time.h>
#include<unistd.h>
void printTime24(){
    time_t rawtime;
    struct tm*current_time;
    char buffer[100];
    
    time(&rawtime);
    current_time=localtime(&rawtime);
    strftime(buffer,sizeof(buffer),"%A, %B %d, %Y \n%H:%M:%S",current_time);
    printf("current time in 24-H format: \n%s\n",buffer);

}
void printTime12(){
    time_t raw_time;
    struct tm*current_time;
    char buffer[100];
    time(&raw_time);
    current_time=localtime(&raw_time);
    strftime(buffer,sizeof(buffer),"%A, %B %d, %Y \n%I:%M:%S %p",current_time);
    printf("current time in 12-H format: \n%s\n",buffer);

}
int main() {
    printf("DIGITAL CLOCK\n\n");
    int i;
    printf("Enter 1 for 24Hr format and 2 for 12Hr format: ");
    scanf("%d",&i);
    if(i==1){
        printTime24();
        sleep(1); // Sleep for 1 second
        return 0;
    }else{
        printTime12();
        sleep(1);
    }
}