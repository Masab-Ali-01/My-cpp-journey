#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	int remainder = (num&(16-1)) ;
	cout<<"\n The remainder is: "<< remainder;
	return 0;
}
