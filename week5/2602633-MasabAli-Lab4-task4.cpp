#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number:";
	cin>>n;
	int length;
	int temp = n;
	while(temp>0){
		length ++;
		temp = temp/10;
	}
	int sum = 0;
	temp = n;
	for(int j=0;j<=length;j++){
		while(temp>0){
			sum = sum + (temp-(temp/10)*10); //8
			temp= temp/10; //4
		}
		if(j==1){
			temp = sum;
			sum = 0;
		}
	}
	
	cout<<"\nlast="<<sum;
	
	return 0;
}
