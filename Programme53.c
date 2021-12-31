//
//  Programme53.c
//  
//
//  Created by Ashutosh Vikhe on 16/03/21.
// Accept n number from user and display only even number from user


#include <stdio.h>
#include <stdlib.h>
void Display(int Arr[],int iSize)  //Step 6
{
    int i = 0;
    if((Arr ==NULL)||(iSize<=0))
    {
        return;
    }
    printf("Elements from Array are :\n");
    for(i=0;i<iSize;i++)
    {
        if((Arr[i]%2)==0)
        {
            printf("%d\n",Arr[i]);
        }
    }
}
int main()
{
    int *arr = NULL;    //Step1
    int iLength = 0;
    int i = 0;
    
    printf("Enter the number of elements..\n"); //Step2
    scanf("%d",&iLength);
    
    arr=(int*)malloc(iLength * sizeof(int));  //Step 3
    if (arr==NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }
    printf("Enter thr Ellements..\n"); //Step 4
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&arr[i]);
    }
    Display(arr,iLength);   //Step 5
    free(arr); //Step 7
    return 0;
}
