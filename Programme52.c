 //
//  Programme52.c
//  
//  ARRAY
//  Created by Ashutosh Vikhe on 16/03/21.
//  Accept n number from user and display that n number

#include <stdio.h>
#include <stdlib.h>
void Display(int Arr[],int iSize)  //Step 6
{
    int i = 0;
    printf("Elements from Array are :\n");
    for(i=0;i<iSize;i++)
    {
        printf("%d\n",Arr[i]);
    }
}
int main()
{
    int *arr = NULL;    //Step1
    int iLength = 0;
    int iCnt = 0;
    
    printf("Enter the number of elements..\n"); //Step2
    scanf("%d",&iLength);
    //Dynamic memory allocation()
    arr=(int*)malloc(iLength * sizeof(int));  //Step 3
    
    printf("Enter thr Ellements..\n"); //Step 4
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&arr[iCnt]);
    }
    Display(arr,iLength);   //Step 5
    free(arr); //Step 7
    return 0;
}
