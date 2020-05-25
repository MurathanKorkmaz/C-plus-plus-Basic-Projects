#include <iostream>

using namespace std;

int main()
{
    int counter=0;
    int number=0;
    int BigNumber=0;
    cout<<"how many numbers will you enter : ";
    cin>>counter;
    int Vector[counter];
    for(int i=0;i<counter;i++)
    {
        cout<<"Enter the "<<i+1<<"st issue : ";
        cin>>number;
        Vector[i]=number;
    }
    BigNumber=Vector[0];
    for(int j=1;j<counter;j++)
    {
        if(Vector[j]>BigNumber)
        {
            BigNumber=Vector[j];
        }
    }
    cout<<"The largest of the "<<counter<<" numbers entered : "<<BigNumber<<endl;
}
