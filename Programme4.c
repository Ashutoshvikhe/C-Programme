// File Name :  Programme4.c
// Function : Addition
// Input : Integer (3)
// Output : Integer (1+2+3 =6)
// Decription : It is used to add the number upto the given Number
// Created by Ashutosh Vikhe on 24/02/21.

//Que :

#include <stdio.h>
int Sum(int iNo1)
{
    int iCnt = 0;
    int iNo2 =0;
    
    if(iNo1 == 0) //Input filter
    {
        return 0 ;
    }
    if(iNo1 < 0) // Input updator
    {
        iNo1 = -iNo1;
    }
    for(iCnt = 1; iCnt <= iNo1 ;iCnt++)
    {
        iNo2 = iNo2 + iCnt;  //Main function
    }
    return iNo2;
}
int main()
{
    int iNo1 = 0;
    int iRet =0;
    
    printf("Enter the Number...\n");
    scanf("%d",&iNo1);
    
    iRet = Sum(iNo1);
    
    printf("Addition is :%d\n",iRet);
    return 0;
}
