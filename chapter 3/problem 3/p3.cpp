#include<iostream>
using namespace std;
int main()
{
  //LEAP YEAR

   int year;
   cin>>year;
   if (year%400==0)
   {
    cout<<"THIS YEAR IS LEAP YEAR"<<endl;
   }
   else if(year%4==0 && year%100!=0)
   {
    cout<<"THIS YEAR IS LEAP YEAR"<<endl;
   }
   else
   {
     cout<<"THIS YEAR IS NOT LEAP YEAR"<<endl;
   }

  return 0;
}

