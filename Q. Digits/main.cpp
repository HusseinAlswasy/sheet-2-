#include <iostream>

using namespace std;

int main()
{


     int input;
    cin>>input;
    for(int a=1;a<=input;a++){
        string t;
        cin>>t;
        int size =t.size();
        for(int b=size-1;b>=0;b--){
            cout<<t[b]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

}
