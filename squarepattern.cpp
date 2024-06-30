#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    cout<<"enter the number of rows:";
    cin>>n;
    for(int row=1;row<=n;row++)
    {
    for(int col=1;col<=n;col++)
    {
  cout<<" * ";
 }
 cout<<"\n";
    }
 return 0;
}