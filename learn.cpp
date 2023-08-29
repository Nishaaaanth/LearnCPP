#include <iostream>
using namespace std;

int main(void) {
	/* NUMBER SYSTEMS
		int a {070};   => Octal
		int a {0xa};   => Hexa
		int a {0b011}; => Binary
	*/

	/* VARIABLE INITIALIZATION
		int a = 1; => Assignment
		int b (2); => Functional
		int c {3}; => Braces

		int c = a + b;
		int c {a + b};
		int c (a + b);
	*/

	/* DIFFERENCE B/W DIFFERENT INITIALIZATION
		int d (2.3); => will not throw an error
		int d {2.3}; => will throw in a compiler error
	*/

	/* SAFER AND MODERN TYPE CASTING
		int d = static_cast<int>(2.3) => there is also dynamic_cast<typename>(value)
		int d = (int)2.3              => old C type of casting not safe
	*/
	
	/* INT TYPES (with modifiers)
		signed int    => will not throw an error when negative numbers are stored
		unsigned int  => will throw an error when negative numbers are stored

		2 BYTES
		short a {2}
		short int a {2}
		signed short a {2}
		signed short int a {2}
		unsigned short int a {2}

		4 BYTES
		int a {2}
		signed a {2}
		signed int a {2}
		unsigned int a {2}

		4/8 BYTES
		long a {2}
		long int a {2}
		signed long a {2}
		signed long int a {2}
		unsigned long int a {2}

		8 BYTES
		long long a {2}
		long long int a {2}
		signed long long a {2}
		signed long long  int a {2}
		unsigned long long int a {2}
	*/
	unsigned int a {-2};
	cout<<a<<endl;

	return 0;
}
