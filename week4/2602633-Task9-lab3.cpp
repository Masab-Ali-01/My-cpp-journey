#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e;
	cout<<"Enter a number 1:";
	cin>>a;
	cout<<"Enter a number 2:";
	cin>>b;
	cout<<"Enter a number 3:";
	cin>>c;
	cout<<"Enter a number 4:";
	cin>>d;
	cout<<"Enter a number 5:";
	cin>>e;
	
	cout<<"Result 1:"<<a + b * c;
   cout<<"\nResult 2:"<<(a + b) * c;
   cout<<"\nresult 3:"<<a / (b + c) * (d - e);
	return 0;
}
