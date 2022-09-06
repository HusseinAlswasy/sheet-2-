#include <iostream>

using namespace std;

int main()
{

    int input;
    long long x,y,odd=0;

    cin>>input;
    for(int i=1; i<=input; i++)
    {

        cin>>x>>y;
        if(x>y)
        {
            swap(x,y);
        }
        for(int j=x+1; j<=y; j++)
        {
            if(j%2 !=0)
            {
                odd = odd+j;

            }
        }
        cout<<odd<<endl;
        odd=0;


    }


}
