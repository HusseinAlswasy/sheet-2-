#include <iostream>

using namespace std;

int main()
{
    int Number,Recu,even=0,odd=0,pos=0,neg=0;
    cin >> Number;
    for(int i=0; i<Number;Number++){
        cin >> Recu;
        if(Recu%2==0){
            even = even+1;
        }
        if(Recu%2 !=0){
            odd = odd+1;
        }
        if(Recu>0){
            pos = pos+1;
        }
        if(Recu<0){
            neg = neg+1;
        }
    }
    cout<<"Even: "<<even<<endl;
     cout<<"Odd: "<<odd<<endl;
      cout<<"Positive: "<<pos<<endl;
       cout<<"Negative: "<<neg<<endl;
}
