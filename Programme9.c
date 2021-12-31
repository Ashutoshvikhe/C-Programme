// File Name : Programme9.c
// Function : CheckResult
// Input :
// Output :
// Created by Ashutosh Vikhe on 01/03/21.
// Decription : It is used to display result with its class
// Que : Aceept a percentage From User and display its result like class as first class with distinction( 70 to 100)first class(60 to 70) second class(50 to  60) ,third class(35 to 50) and fail(below 35)

#include <stdio.h>
#include <stdbool.h>
void CheckResult(int iMarks)
{
    if((iMarks >= 0 )||(iMarks > 100))
    {
        printf("Invalied marks..\n");
        return;
    }
    if((iMarks >=0 )&&(iMarks < 35))
    {
        printf("You are Failed...\n");
    }
    else if((iMarks >=35 )&&(iMarks < 50))
    {
        printf("Pass class..\n");
    }
    else if((iMarks >=50 )&&(iMarks < 60))
    {
        printf("Second Class..\n");
    }
    else if((iMarks >=60 )&&(iMarks < 70))
    {
        printf("First class..\n");
    }
    else
    {
        printf("Distinction with first class...\n");
    }
}
int main()
{
    int iNo1 = 0;
    
    printf("Enter  your Marks..\n");
    scanf("%d",&iNo1);
    
    CheckResult(iNo1);
    
    return 0;
}


