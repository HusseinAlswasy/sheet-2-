#include <iostream>

using namespace std;

int main()
{
    int input;
    cin>>input;

    for(int a=input; a>=1; a--)  // a=input ; 4>=1 ; --
    {
        for(int b=1; b<=a; b++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
