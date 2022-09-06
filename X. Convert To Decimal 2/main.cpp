#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin>> t;
    for(int i=1; i<=t ; i++)
    {
        int count = 0;
        int n;
        cin >> n;
        while(n!=0)
        {
            int digit = n%2;
            if(digit==1)
            {
                count++;
            }
            n= n/2;
        }
        int dec=0;
        int p=0;
        for(int k=1; k<=count; k++)
        {
            dec = dec + (1*pow(2,p));
            p++;
        }
        cout<<dec<<endl;

    }
}
