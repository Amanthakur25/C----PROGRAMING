// XXXX
// XXX
// XX
// x

#include<iostream>
using namespace std;
void pattern(int row,int col=0)
{   
  if(row==0)
    return;
   if(col<row)
   {
        cout<<"X";
        pattern(row,col+1);
   }
   else{
    cout<<endl;
    pattern(row-1,0);
   }
}
int main()
{
    
    int row=5;
    pattern(row);
    return 0;

}