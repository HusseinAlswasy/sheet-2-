#include <iostream>

using namespace std;

int main()
{
    int count;
    cin >> count;
    int num;
   for(int i=1 ; i<=count; i++)
        {
           long long fact = 1 ;
           cin>>num;
           for(int j=1;j<=num;j++)
            {
                fact = fact * j;
            }
           cout<< fact<<endl;
        }

}
