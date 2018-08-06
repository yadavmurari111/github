#include<iostream>
using namespace std;
int main()
{
int x,c=0;
cout<<"enter a number"<<endl;
cin>>x;
while(x>0)
{
x=x/10;
c=c+1;
}
cout<<"no. of digits are "<<c<<endl;
return 0;
}
