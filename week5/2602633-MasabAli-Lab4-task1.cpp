#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a number: ";//90 = 1011010 ----- 95 = 1011111
	cin>>num;
	cout<<"Golden number for "<<num<<" is "<<(num|5);
	return 0;
}
