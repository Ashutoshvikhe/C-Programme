//
//  Programme57.c
//  
//
//  Created by Ashutosh Vikhe on 16/03/21.
// Accept the n numbers from user and display its frequency
#include <stdio.h>
#include <stdlib.h>
int Frequency(int Arr[],int iSize,int ivalue1)
{
    int i = 0;
    int iCount = 0;
    if((Arr ==NULL)||(iSize<=0))
    {
        return 0;
    }
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]==ivalue1)
        {
            iCount++;
        }
       
    }
    return iCount ;
}
int main()
{
    int *arr = NULL;
    int iRet = 0;
    int iLength = 0;
    int iNo1 = 0;
    int i = 0;
    
    printf("Enter the number of elements..\n");
    scanf("%d",&iLength);
    
    arr=(int*)malloc(iLength * sizeof(int));
    if (arr==NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }
    printf("Enter the number which we have to find\n");
    scanf("%d",&iNo1);
    
    printf("Enter thr Ellements..\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&arr[i]);
    }
    iRet=Frequency(arr,iLength,iNo1);
    printf("Frequency is:%d\n",iRet);
    free(arr);
    return 0;
}




