#include <iostream>

using namespace std;

int main()
{
    int lines;
    cin>> lines;

    int spaces = lines-1;
    for(int i=1; i<=lines; i++)
    {
        for(int j=1; j<=spaces; j++)
        {
            cout<<" ";
        }
        for(int k=1; k<i*2; k++)
        {
            cout<<"*";
        }
        cout<<endl;
        spaces--;
    }

     spaces =1;
       for(int i=lines; i>=1; i--)      // i = 3   3>=1
    {
        for(int j=1; j<spaces; j++)     // 1<2
        {
            cout<<" ";
        }
        for(int k=i*2; k>1; k--)        // k=8    8>1
        {
            cout<<"*";
        }
        cout<<endl;
        spaces++;
    }
}
