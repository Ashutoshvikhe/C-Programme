//
//  Programme97.c
//  
//
//  Created by Ashutosh Vikhe on 31/03/21.
//

#include <stdio.h>
#include <stdbool.h>
bool CheckBit(unsigned int iNo,int iPose1,int iPose2)
{
    unsigned int iMask1 =0x00000001;
    unsigned int iMask2 =0x00000001;
    unsigned int iMask  =0x00000000;
    unsigned int Result = 0;
    
    if((iPose1<1) || (iPose1>32))
    {
        return false;
    }
    if(iPose2<1) || (iPose2>32)
    {
        return false;
    }
    
    iMask= iMask1 << (iPose1-1);
    iMask= iMask2 << (iPose2-1);
    /*
     iMask = iMask1 | iMask 2            //By sir
     Result = iNo & iMask;
     */
    Result = ( (iNo & iMask) && (iNo & iMask) );
    if((Result==iMask1)||(Result==iMask2))         //By me
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    unsigned int iValue = 0;
    bool bRet;
    unsigned int iPose1 = 0;
    unsigned int iPose2 = 0;
    
    printf("Enter your Number\n");
    scanf("%u",&iValue);
    
    printf("Enter  first Position\n");
    scanf("%d",&iPose1);
    
    printf("Enter Second Position\n");
    scanf("%d",&iPose2);
    
    bRet=CheckBit(iValue,iPose1,iPose2);
    if(bRet==true)
    {
        printf(" Bit is On\n");
    }
    else
    {
        printf(" Bits is Off\n");
    }
    return 0;
}



