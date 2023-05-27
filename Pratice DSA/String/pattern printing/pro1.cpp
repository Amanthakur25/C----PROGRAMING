/* WAP TO PRINT PATTERN 
    4
    x
    xx
    xxx
    xxxx
*/
#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the value";
    cin>>n;
    for (int  i = 0; i <=n; i++)
    {
        for(int j=0 ;j<i; j++){
            cout<<"X";
        }
        cout<<endl;
    }
    

    return 0;
}