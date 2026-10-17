#include<iostream>
using namespace std;
int main(){
	int num,d1,d2,d3,d4,d5;
	cout<<"Enter a 5 digit number:";
	cin>>num;
	d1=num%10;
	num = num/10;
	d2=num%10;
	num = num/10;
	d3 = num%10;
	num = num/10;
	d4 = num%10;
	num = num/10;
	d5 = num%10;
	
	cout<<d5<<" "<<d4<<" "<<d3<<" "<<d2<<" "<<d1;
}
