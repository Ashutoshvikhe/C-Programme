// File Name :Programme19.c
// Function :
// Input :76521
// Output : 1 2 5 6 7
// Created by Ashutosh Vikhe on 03/03/21.
// Que : Accept the number from user and Dispaly the digit of that number seperatelly in reverser order

#include <stdio.h>
void DispalyDigits(int iValue)
{
    int iDigit = 0;
    if(iValue < 0)
    {
        iValue = -iValue;
    }
    while(iValue > 0)
    {
        iDigit = iValue % 10;
        printf("%d\n",iDigit);
        iValue = iValue / 10;
    }
}
int main()
{
    int iNo = 0;
    printf("Enter the number..\n");
    scanf("%d",&iNo);
    DispalyDigits(iNo);
    return 0;
}
