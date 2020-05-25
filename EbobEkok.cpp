#include <iostream>

using namespace std;

void EbobAccount(int number1,int number2,int *pEbob);
void EkokAccount(int number1,int number2,int *pEkok);
void calculate(int number1,int number2,int *pEbob,int *Ekok);
int main()
{
    int number1,number2,ebob,ekok;
    cout<<"Enter the 1st issue :";
    cin>>number1;
    cout<<"Enter the 2st issue :";
    cin>>number2;
    calculate(number1,number2,&ebob,&ekok);
    cout<<"ebob of numbers : "<<ebob<<endl;
    cout<<"ekok of numbers : "<<ekok<<endl;
    return 0;
}
void EbobAccount(int number1,int number2,int *pEbob)
{
    *pEbob=1;
    int CommonDivider=2;
    while((number1 != 1)&&(number2 != 1))
    {
        while((number1 % CommonDivider == 0) && (number2 % CommonDivider == 0))
        {
            *pEbob *=CommonDivider;
            number1 /= CommonDivider;
            number2 /= CommonDivider;
        }
        while(number1 % CommonDivider == 0)
        {
            number1 /= CommonDivider;
        }
        while(number2 % CommonDivider == 0)
        {
            number2 /= CommonDivider;
        }
        ++CommonDivider;
    }
}

void EkokAccount(int number1,int number2,int *pEkok)
{
    *pEkok=1;
    int Dividing = 2;
    while((number1 != 1)||(number2 != 1 ))
    {
        while((number1 % Dividing == 0)||(number2 % Dividing ==0))
        {
            *pEkok *= Dividing;
            if(number1 % Dividing ==0)
            {
                number1 /= Dividing;
            }
            if(number2 % Dividing ==0)
            {
                number2 /= Dividing;
            }
        }
        ++Dividing;
    }
    
}
void calculate(int number1,int number2,int *pEbob, int *pEkok)
{
    EbobAccount(number1, number2, pEbob);
    EkokAccount(number1, number2, pEkok);
}
