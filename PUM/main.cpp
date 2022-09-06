#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;

    for(int var1=1; var1<=input*4; var1++){
        if(var1%4==0){
            cout<<"PUM"<<endl;

        }else{
            cout<<var1<<" ";
        }
    }
}
