// File Name :  Programme3.c
// Que :// Accept Number from user and display all the number till that number
// Function : Sequence
// Input : 3
// Output : 1, 2, 3
//Input : -6
// Output : 1, 2, 3, 4, 5, 6.
// Decription :It is used to display the sequence of the positive number
//  Created by Ashutosh Vikhe on 23/02/21.

/*
Algorithm :
     Start:
         Accept one number as no
         If number is negative then convert it into positive
         create one counter as Cnt and set it equal to 1
 
         Iterate till the counter is less than or equal to the number
         print the value of counter on screen
         Incerement the value by 1
         continue
    Stop:
*/

#include <stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    if(iNo == 0)    //Input Filter
    {
        return ;
    }
   
    if(iNo < 0)    // Input updator
    {
        iNo = -iNo;
    }
    
    for(iCnt = 0;iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt);
    }
    
}

int main()              // Entry Point Fuction
{
    int iValue = 0;
    
    printf("Enter the Number..");
    scanf("%d",&iValue);
    
    Display(iValue);
    
    return 0;
}
