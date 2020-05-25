#include <iostream>

using namespace std;

int main()
{
    char word[100],tmp;
    cout<<"Enter the word you will invert : ";
    cin>>word;
    int length;
    
    for(length=0 ;word[length] !='\0';++length)
    {
        
    }
    for(int i=0;i<(length/2);++i)
    {
        tmp=word[i];
        word[i]=word[length-i-1];
        word[length-i-1] = tmp;
    }
    cout<<word<<endl;
    return 0;
}
