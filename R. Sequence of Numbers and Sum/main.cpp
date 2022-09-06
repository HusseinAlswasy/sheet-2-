#include <iostream>

using namespace std;

int main()
{
    while(true)
    {
        int x,y;
        int sum =0;
        cin>>x>>y;
        if(x<=0 || y<=0)
            return 0;
        else
        {
            if(x>y)
                swap(x,y);
            for(int i=x; i<=y; i++)
            {
                cout<<i<<" ";
                sum = sum + i;
            }
            cout<<"sum ="<<sum<<endl;
        }
    }

}
