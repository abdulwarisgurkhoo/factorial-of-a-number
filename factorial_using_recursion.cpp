/******************************************factorial_using_recursion.cpp********************************/
#include<iostream>
using namespace std;
int fun(int n)
    {
        
        if(n>0)
        {
          if(n==1)
          {
            return 1;
          }
          else
          {
            return n*fun(n-1);
          }
          
        }

    }

int main ()
    {
        int num;
        cout<<"enter the number please whose factorial you want to find  : ";
        cin>>num;
        cout<<"\n the factorial of number you entered is :  ";
       cout<<fun(num);
     /*  int i=1;
       int fact=1;
       while (num>0)
       {
          fact=fact*num;
         num-- ;
       }
       cout<<fact;*/
        return 0;

    }