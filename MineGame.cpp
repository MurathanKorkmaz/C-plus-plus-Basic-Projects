#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int counter=0;
    int random=0;;
    int election=0;
    char matrix[6][5];
    cout<<"**** Welcome to the mine game ****"<<endl;
    for(int i=0;i<6;i++)
    {
        if(counter==0)
        {
            cout<<"You moved to line "<<i+1<<" : ";
            cin>>election;
            while((election<1)&&(election>5))
            {
                cout<<"You made the wrong choice. Please choose between 1 and 5."<<endl;
                cout<<"You moved to line "<<i+1;
                cin>>election;
            }
        }
        random=rand()%5+1;
        for(int j=0;j<5;j++)
        {
            if(counter==0)
            {
                if(election==j+1)
                {
                    matrix[i][j]='O';
                }
                if(random==j+1)
                {
                    matrix[i][j]='X';
                }
                if((election!=j+1)&&(random!=j+1))
                {
                    matrix[i][j]='T';
                }
                if((election==j+1)&&(random==j+1))
                {
                    matrix[i][j]='P';
                    counter++;
                    cout<<"!!! uh, Mine Mine. !!!"<<endl;
                }
            }
            else
            {
                if(random==j+1)
                {
                    matrix[i][j]='X';
                }
                if(random!=j+1)
                {
                    matrix[i][j]='T';
                }
            }
        }
    }
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    if(counter==0)
    {
        cout<<"*** Congratulations You Won The Game ***"<<endl;
    }
    else
    {
        cout<<"!!! Sorry You Lost !!!"<<endl;
    }
}
