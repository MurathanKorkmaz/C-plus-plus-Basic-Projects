#include <iostream>

using namespace std;

int main()
{
    int counter=0;
    double number=0;
    double total=0;
    double Arithmetic=0;
    cout<<"How many numbers will you enter : ";
    cin>>counter;
    int Vector[counter];
    for(int i=0;i<counter;i++)
    {
        cout<<"Enter the "<<i+1<<"st issue : ";
        cin>>number;
        Vector[i]=number;
    }
    for(int j=0;j<counter;j++)
    {
        total=total+Vector[j];
    }
    Arithmetic=(total)/(counter);
    cout<<"Arithmetic mean of the "<<counter<<" numbers entered : "<<Arithmetic<<endl;
}
