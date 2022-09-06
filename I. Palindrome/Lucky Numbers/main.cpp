#include <iostream>

using namespace std;

int main()
{
    int num1, num2,divide,next =0,total=0;
    cin>> num1 >> num2;
    bool isLuky=false,stop=true;

    for(int i=num1; i <=num2; i++)
    {
        divide = i;
        total=i;
        while(divide > 0)
        {
            next = divide %10;
            divide = divide /10;
            if(next == 7 || next == 4)
            {
                isLuky=true;
                if(divide==0)
                {
                    stop=false;
                   cout<<total<<" ";
                }
            }
            else
            {
                isLuky=false;
                break;
            }
        }
    }
    if(isLuky==false && stop==true){
        cout<<-1;
    }
}
