//
//  Programme56.c
//  
//
//  Created by Ashutosh Vikhe on 16/03/21.
//
#include <stdio.h>
#include <stdlib.h>
int Display(int Arr[],int iSize)
{
    int i = 0;
    int iCount = 0;
    if((Arr ==NULL)||(iSize<=0))
    {
        return -1;
    }
    for(i=0;i<iSize;i++)
    {
        if((Arr[i]%2)==0)
        {
            iCount++;
        }
       
    }
    return iCount ;
}
int main()
{
    int *arr = NULL;
    int iLength = 0;
    int i = 0;
    int iRet = 0;
    
    printf("Enter the number of elements..\n");
    scanf("%d",&iLength);
    
    arr=(int*)malloc(iLength * sizeof(int));
    if (arr==NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }
    printf("Enter thr Ellements..\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&arr[i]);
    }
    iRet=Display(arr,iLength);
    printf("Even numbers are :%d\n",iRet);
    free(arr);
    return 0;
}



