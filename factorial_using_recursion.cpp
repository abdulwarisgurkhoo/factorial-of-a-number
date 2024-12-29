/******************************************factorial_using_recursion.cpp********************************/
#include<iostream>
using namespace std;
//recursive function
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
//main function
int main ()
    {
        int num;
        cout<<"enter the number please whose factorial you want to find  : ";
        cin>>num;
        cout<<"\n the factorial of number you entered is :  ";
       cout<<fun(num);
     
        return 0;

    }