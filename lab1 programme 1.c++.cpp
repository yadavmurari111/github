#include<iostream>
using namespace std;
int main()
{
int i,j,rem=1,k=1;
cout<<"enter the value of i"<<endl;
cin>>i;
cout<<"enter the value of j"<<endl;
cin>>j;
while(rem<=i)
{
rem=k*j;
k++;
}
cout<<"next largest multiple interger of j "<<rem<<endl;
return 0;
}
