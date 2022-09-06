#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;           //4
    int spaces = input-1;   //3
    for(int lines=1; lines<=input; lines++) //1<=4
    {
        for(int i=1; i<=spaces; i++)     //1<=3
        {
            cout<<" ";
        }
        for(int j=1; j<lines*2; j++)      //1<2
        {
            cout<<"*";
        }
        spaces--;
        cout<<endl;
    }

}
