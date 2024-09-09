// C++ Program to illustrate the auto storage class
// variables
#include <iostream>
using namespace std;

void autoStorageClass()
{

	cout << "Demonstrating auto class\n";

	// Declaring an auto variable
	int a = 32;
	float b = 3.2;
	char c[] = "GeeksforGeeks";
	char d = 'G';
	string ptr = "hello";

	// printing the auto variables
	cout << a << " \n";
	cout << b << " \n";
	cout << c << " \n";
	cout << d << " \n";
	cout << ptr << " \n";
}

int main()
{

	// To demonstrate auto Storage Class
	autoStorageClass();

	return 0;
}
