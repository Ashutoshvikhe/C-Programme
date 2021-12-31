//
//  Programme54.c
//  
//
//  Created by Ashutosh Vikhe on 16/03/21.
//

#include <stdio.h>
#include <stdlib.h>
int Display(int Arr[],int iSize)  //Step 6
{
    int i = 0;
    int iAdd = 0;
    if((Arr ==NULL)||(iSize<=0))
    {
        return 0;
    }
    for(i=0;i<iSize;i++)
    {
        iAdd=iAdd+Arr[i];
    }
    return iAdd;
}
int main()
{
    int *arr = NULL;    //Step1
    int iLength = 0;
    int i = 0;
    int iRet = 0;
    
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
    iRet=Display(arr,iLength);
    printf("Addition is :%d\n",iRet);
    free(arr); //Step 7
    return 0;
}

