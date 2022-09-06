#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int Result1 ,Result2;
  string num1;
  cin >> num1;

  int size = num1.size();
  char num2[size];
  int counter =0;

  for(int i=size-1;i>=0;i--){
    num2[counter] = num1[i];
    counter++;
  }

  cout<<Result2<<endl;

  if(Result1==Result2){
    cout<<"YES"<<endl;
  }else{
  cout<<"NO"<<endl;
  }

}
