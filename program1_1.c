#include<stdio.h>

///////////////////////////////////////////////
//
//Function Name:    Divide
//Description:      It is used to divide
//Input :           Integer
//Output:           Integer
//Author:           Aaryaa Nandkumar Patil
//Date:             20/10/2025
//
///////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
    int iAns=0;
    
    if(iNo2==0)
    {
        return -1;
    }

    iAns=iNo1/iNo2;

    return ;
}

int main()
{
    int iValue1=15 ,iValue2=5;
    int iRet=0;

    iRet=Divide(iValue1,iValue2);

    return 0;
}