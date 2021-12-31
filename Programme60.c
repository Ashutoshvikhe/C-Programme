//
//  Programme60.c
//  
//
//  Created by Ashutosh Vikhe on 17/03/21.
//
#include <stdio.h>
#include <stdlib.h>
int Maximum(int Arr[],int iSize)
{
    int i = 0;
    int iMax= 0;
    if(Arr==NULL)
    {
        return -1;
    }
    iMax=Arr[0];
    
    for(i=0;i<iSize;i++)
    {
        if(Arr[i] > iMax)
        {
            iMax=Arr[i];
        }
    }
    return iMax;
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
   
    printf("Enter thr Ellements..\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&arr[i]);
    }
    iRet=Maximum(arr,iLength);
    printf("Maximum number is:%d\n",iRet);
    
    free(arr);
    return 0;
}





