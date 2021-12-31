//
//  Programme59.c
//  
//
//  Created by Ashutosh Vikhe on 17/03/21.

#include <stdio.h>
#include <stdlib.h>
int FirstAccurance(int Arr[],int iSize,int ivalue1)
{
    int i = 0;
    
    for(i=ivalue1-1;i>=0;i--)
    {
        if(Arr[i]==ivalue1)
        {
            break;
        }
    }
    return i;
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
    iRet=FirstAccurance(arr,iLength,iNo1);
    if(iRet==-1)
    {
        printf("Number is not available\n");
    }
    else
    {
        printf("First accurance of the number is:%d\n",iRet);
    }
    free(arr);
    return 0;
}




