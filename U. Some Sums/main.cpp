#include <iostream>

using namespace std;

int main()
{
    int max1,range1,range2;
    cin >> max1 >> range1 >> range2;

    long long sum=0;
    for(int var=1; var<=max1; var++)
    {
        if(var/10==0)
        {
            if(var>=range1 && var<=range2)
            sum = sum + var;
        }
        else
        {
            int Mymax1 = var;
            int Mysum=0;
            while(Mymax1)
            {
                int digit = Mymax1%10;
                Mysum = Mysum + digit;
                Mymax1 = Mymax1 /10;
            }
            if(Mysum >= range1 && Mysum <=range2)
            {
                sum = sum +var;
            }

        }
    }
    cout<<sum;
}
