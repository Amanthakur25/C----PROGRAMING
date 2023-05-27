#include<iostream>
using namespace std;

int main()
{
   int num=5;

    //creating the pointer.
   int *ptr=&num;

   cout<<*ptr;
   cout<<endl;
   //incrementing the value of pointer.
   (*ptr)++;
   cout<<*ptr;

  
 
   // //copying the pointer 

   int *q=ptr;
   cout<<endl;
   cout<<*q;

}