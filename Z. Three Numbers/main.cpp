#include <iostream>

using namespace std;

int main()
{
    long long x, sum , c=0;

    cin>> x>>sum;
    for(int i=0; i<=x ; i++)
    {
        for(int j=0; j<=x; j++)
        {
            for(int k=0; k<=x; k++)
            {
                if(i+j+k==sum)
                {
                    c++;

                }
            }
        }
    }
    cout<<c<<endl;
}
