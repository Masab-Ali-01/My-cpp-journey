#include <iostream>
using namespace std;

int main()
{
	/*Using escape sequences and understanding them
	This is a mult line comment*/

	cout << "Hello, World!\n\n";
	cout << "Reg Id:2602633\nName:Masab Ali\n\n";

	// Using all the escape sequences
	cout << "This is first line\nThis will appear in new line\t a tab space is added \"This is in douuble qouts\" and \'This is in single cout\' and now i added a backslash\\ \n";

	int x;
	x = 10;

	int y = 20;
	cout << "\n x=" << x;
	cout << "\n Y=" << y;

	int z;
	cout << "\n\nEnter the value of z:";
	cin >> z;
	cout << "\nvalue of z is:" << z;

	cout << "\nSize of int:" << sizeof(int) << " bytes\nSize of float:" << sizeof(float) << " bytes\nSize of boolean:" << sizeof(bool) << " bytes\nSize of string:" << sizeof(string) << " bytes\nSize of char:" << sizeof(char) << " bytes\nSize of DOuble:" << sizeof(double) << "  bytes";
	
	int num=10;
	char alphabet = 'a';
	string text = "Hello";
	bool value = true;
	float deci = 1.0025;
	
	float pi = 22/7;
	cout<<"pi="<<22/7;
	return 0;
}
