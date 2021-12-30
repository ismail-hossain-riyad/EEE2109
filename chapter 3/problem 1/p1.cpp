#include<iostream>
using namespace std;
int main ()
{
  //GRADING SYSTEM CODE
  int marks;
  cout<<"Enter your marks"<<endl;
  cin>>marks;
if(marks>100 || marks<0)
  {
    cout<<"INVALID RESULT"<<endl;
  }
  else if(marks>=80&&marks<=100) //80 to 100
  {
    cout<<"CONGRATULATION A+"<<endl;
  }
  else if(marks>=75&&marks<=79) //75 to 79
  {
    cout<<"NOT BAD A"<<endl;

}
else if(marks>=70&&marks<=74) //70 to 74
  {
    cout<<"BETTER LUCK NEXT TIME A-"<<endl;
  }
else if(marks>=65&&marks<=69) //65 to 69
  {
    cout<<"BETTER LUCK NEXT TIME B+"<<endl;
  }
  else if(marks>=60&&marks<=64) //60 to 64
  {
    cout<<"TRY HARD B"<<endl;
  }
  else if(marks>=54&&marks<=59) //55 to 59
  {
    cout<<"TRY HARD B-"<<endl;
  }
  else if(marks>=50&&marks<=54) //50 to 54
  {
    cout<<"TRY HARD C+"<<endl;
  }
  else if(marks>=45&&marks<=49) //45 to 49
  {
    cout<<"TRY HARD C"<<endl;
  }
  else if(marks>=40&&marks<=44) //40 to 44
  {
    cout<<"TRY HARD D"<<endl;
  }
  else //0 to 39
  {
    cout<<"SORRY F"<<endl;
  }
}


