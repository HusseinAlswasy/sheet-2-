#include <iostream>

using namespace std;

int main()
{
    int input;
    cin>> input;
    int start=0,second=1;
    if(input==1)
    {
        cout<<start;
    }
    else if(input==2)
    {
        cout<<start<<" "<<second;
    }
    else
    {
        cout<<start<<" "<<second<<" ";
        for(int i=2; i<input; i++){
            int result=start+second;
            cout<<result<<" ";
            start=second;
            second=result;
        }

    }
////    int input;
////    cin >> input;
////    int start = 0;
////    int second = 1;
////    if(input==1)
////    {
////        cout<<start<<endl;
////    }
////    else if(input==2)
////    {
////        cout<<start<<" "<<second<<endl;
////    }
////    else
////    {
////        cout<<start<<" "<<second<<" ";
////
////        for(int i=2; i<input; i++)
////        {
////            int result = start+second;
////            cout<<result<<" ";
////            start=second;
////            second=result;
////        }
////    }
}
