//
//  Programme79.c
//  
//
//Created by Ashutosh Vikhe on 29/03/21.
///\\ Accept the string from user and copy that string into another string\\

#include <stdio.h>
void strcpyX(char str[],char Crr[])
{
    if(str==NULL || Crr == NULL)
    {
        return;
    }
    while(*str != 0)
    {
        *Crr=*str;
        str++;
        Crr++;
    }
    *Crr='\0';
}
int main()
{
    char Arr[40];
    char Brr[40];
    int iRet = 0;
    
    printf("Enter Your String\n");
    scanf("%[^'\n']s",Arr);
    
    strcpyX(Arr,Brr);
    
    printf("After Copied String is:%s\n",Brr);
    
    return 0;
}






