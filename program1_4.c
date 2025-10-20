#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////
//
//Function Name:    Check
//Description:      Check whether number is divisble by 5
//Input :           Integer
//Output:           Boolean
//Author:           Aaryaa Nandkumar Patil
//Date:             20/10/2025
//
///////////////////////////////////////////////

bool Check(int iNo)
{
    if((iNo%5)==0)
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
    int iValue=0;
    bool bRet=false;

    printf("Enter number:");
    scanf("%d",&iValue);
    
    bRet=Check(iValue);

    if(bRet==true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not divisble by 5");
    }

    return 0;
}

/*
Output:

case 1:
Enter number:14
Not divisble by 5

Case 2:
Enter number:35
Divisible by 5

*/