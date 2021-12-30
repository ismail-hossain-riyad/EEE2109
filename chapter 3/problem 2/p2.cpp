#include<iostream>
using namespace std;
int main()
{
    //ternary operator

  int x=9,y=5,maximum;
  maximum=(x>y)? x:y;
  cout<<"Max = "<<maximum <<endl;

  int minimum;
  minimum=(x>y)? y:x;
  cout<<"min= "<<minimum<<endl;
  return 0;
}
