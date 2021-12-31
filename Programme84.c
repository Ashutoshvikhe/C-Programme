//
//  Programme84.c
//  
//
//  Created by Ashutosh Vikhe on 29/03/21.
//
#include <stdio.h>
void strcatX(const char str[],char Crr[])
{
    int iCount =0;
    if(str==NULL || Crr == NULL)
    {
        return;
    }
    while(*Crr != '\0')
    {
        Crr++;
    }
    *Crr=' ';
    Crr++;
    while(*str !='\0')
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
    
    printf("Enter Your First String\n");
    scanf("%[^'\n']s",Arr);
    printf("Enter Your Second String\n");
    scanf(" %[^'\n']s",Brr);
    
    strcatX(Arr,Brr);
    
    printf("String after concate is:%s\n",Brr);
    
    return 0;
}



