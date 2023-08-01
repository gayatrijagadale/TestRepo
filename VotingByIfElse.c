#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);

    if(age>18){
        printf("You are the Adult\n");
        printf("you can vote\n");

    }
else{
    printf("Not Adult\n");
    printf("you not able to voting\n");
}
printf("Thank you!!!!");

}
