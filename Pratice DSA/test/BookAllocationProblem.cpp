#include<iostream>
using namespace std;

class Node{
   int data;
   Node*next;

   Node(int data)
   {
      this->data=data;
      this->next=NULL;

   }

   ~Node(){
      int value=this->data;
      if(this->next!=NULL)
      {
         delete next;
         this->next=NULL;
      }
      
   }
};

int main()
{

}