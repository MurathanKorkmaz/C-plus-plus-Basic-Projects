#include <iostream>

using namespace std;

int main()
{
    int line1=0,column1=0;
    int line2=0,column2=0;
    cout<<"**** Welcome to the matrix multiplication calculation program ****"<<endl;
    cout<<"Enter the number of lines of the 1st array: ";
    cin>>line1;
    cout<<"Enter the number of columns of the 1st array: ";
    cin>>column1;
    cout<<"Enter the number of lines of the 2st array: ";
    cin>>line2;
    cout<<"Enter the number of columns of the 2st array: ";
    cin>>column2;
    if(column1==line2)
    {
        int matrix1[line1][column1];
        int matrix2[line2][column2];
        int matrix3[column1][line2];
        for(int i=0;i<line1;i++)
        {
            for(int j=0;j<column1;j++)
            {
                cout<<"Enter the "<<i+1<<"st line "<<j+1<<"st column element of the 1st row : ";
                cin>>matrix1[i][j];
            }
        }
        for(int k=0;k<line2;k++)
        {
            for(int m=0;m<column2;m++)
            {
                cout<<"Enter the "<<k+1<<"st line "<<m+1<<"st column element of the 2st row : ";
                cin>>matrix2[k][m];
            }
        }
        for(int a=0;a<line1;a++)
        {
            
            for(int b=0;b<column2;b++)
            {
                matrix3[a][b]=0;
                for(int c=0;c<column1;c++)
                {
                    matrix3[a][b]=matrix3[a][b]+matrix1[a][c]*matrix2[c][b];
                }
            }
        }
        for(int i=0;i<line1;i++)
        {
            for(int j=0;j<column2;j++)
            {
                cout<<matrix3[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    
}
