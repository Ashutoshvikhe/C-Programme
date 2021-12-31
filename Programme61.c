//
//  Programme61.c
//  
//
//  Created by Ashutosh Vikhe on 22/03/21.
//

#include <stdio.h>

int main()
{
    char Arr[40];
    printf("Enter Your Name\n");
    
    scanf("%[^'\n']s",Arr);
    
    //fgets(Arr,40,stdin);  //fgets(KASHAT,KITI,KUTHUN)
    
    //gets(Arr); // Its unsafe warning generate
    
    //scanf("%s",Arr);
    
    printf("Your name is :%s\n",Arr);
    return 0;
}
