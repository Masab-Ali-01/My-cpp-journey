#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number:";
	cin>>n;
	cout<<"Initial value: "<<n<<endl;	
	cout<<"After +=10: "<<(n+=10)<<endl;
	cout<<"After -= 5: "<<(n-=5)<<endl;
	cout<<"After *= 2: "<<(n*=2)<<endl;
	cout<<"After /= 5: "<<(n/=5)<<endl;
	cout<<"After %= 7: "<<(n%=7)<<endl;
	return 0;
}
