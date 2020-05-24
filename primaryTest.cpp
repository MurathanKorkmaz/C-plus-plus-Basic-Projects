#include <iostream>
using namespace std;
int main()
{
    continuation:
    int number=0;/* number = sayı */
    int counter=0;/* sayaç*/
    char selection='e';/* selection = seçim */
    while(selection=='e')
    {
        cout<<"Please enter a number = ";
        cin>>number;
        for(int i=2;i<number;i++)
        {
            if(number%i==0)
            {
                counter=counter+1;
            }
        
        }
        if(counter==0)
        {
            cout<<number<<" is the prime number"<<endl;
        }
        else
        {
            cout<<number<<" is not prime "<<endl;
        }
        cout<<"e - continuation "<<endl<<"h - exit "<<endl;
        cin>>selection;
    }
}
