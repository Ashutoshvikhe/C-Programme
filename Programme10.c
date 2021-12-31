//File Name : Programme10.c
// Function :DisplayTable
// Input : 2
// Output : 2 4 6 8 10 12 14 16 18 20
// Created by Ashutosh Vikhe on 01/03/21.
// Decription : It is used to display the table
// Que :Accepet number from user and display its table

#include <stdio.h>
void DisplayTable(int iValue)
{
    int iCnt = 0;
    if(iValue < 0)
    {
        iValue = -iValue;
    }
    for(iCnt = 1;iCnt <=10;iCnt++)
    {
        printf("%d\n",iValue * iCnt);
    }
}
int main()
{
    int iNo = 0;
    
    printf("Enter the number..\n");
    scanf("%d",&iNo);
    
    DisplayTable(iNo);
    
    return 0;
}
