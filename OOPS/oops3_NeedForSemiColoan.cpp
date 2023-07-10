// Why do we give semicolons at the end of class?
// Many people might say that it’s a basic syntax 
// and we should give a semicolon at the end of the class as its rule defines in cpp.
// But the main reason why semi-colons are there at the end of the class is compiler checks
// if the user is trying to create an instance of the class at the end of it. 

// Yes just like structure and union,
// we can also create the instance of a class at the end just before the semicolon.
// As a result, once execution reaches at that line,
// it creates a class and allocates memory to your instance.

#include <iostream>
using namespace std;

class Demo{
int a, b;
	public:
	int c;
	Demo() // default constructor
	{
		cout << "Default Constructor" << endl;
	}
	Demo(int a, int b):a(a),b(b) //parameterised constructor
	{
		cout << "parameterized constructor values " << a << " "<< b << endl;
	}
}i(10,50);


int main() {
	i.c = 100;
	cout<<i.c;
	return 0;
}
