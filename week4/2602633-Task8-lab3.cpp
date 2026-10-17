#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter a number:";
	cin>>a;
	cout<<"Enter a number:";
	cin>>b;
	
	cout<<"Both are positive:"<<(a>0 and b>0)<<endl;
	cout<<"Atleast one is:"<<(a>0 or b>0)<<endl;
	cout<<"Wether the first number is positive:"<<(a>0)<<endl;
	return 0;
}
