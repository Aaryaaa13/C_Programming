#include<stdio.h>

//////////////////////////////////////////////
//
//Function Name:    Accept
//Description:      To display static loop
//Input :           Integer
//Author:           Aaryaa Nandkumar Patil
//Date:             20/10/2025
//
///////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
    }
}

int main()
{
    int iValue=0;
    iValue=5;

    Accept(iValue);

    return 0;
}

