#include <iostream>

using namespace std;

int main()
{
    int number;
    cin>>number;
    int max=0;
    for(int i=1; i<=number; i++)
    {
        int num;
        cin>>num;

           if(num>max)
        {
            max=num;
        }
    }
    cout<<max;
}
