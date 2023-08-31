#include <iostream>
#include <iomanip>
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

		But for assigning new value ot the var use "Assignment Operation"
		c = a;
		c = b;
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

	/* FLOATING POINT & PRECESION
		float a {2.1111111111111111f};         => size(4),  precision(7)
		double a {2.11111111111111111};        => size(8),  precision(15)       => recommended (default)
		double long a {2.111111111111111111L}  => size(16), precision(>double)

		precision by default would be 7
		To set precision => setprecision();

		// SCIENTIFIC NUMBER (1e10)

		// Inf and Nan
			int a {1};
			int b {};
			int c {};
			int res;

			a/b   => Inf
			-a/b  => -Inf
			c/b   => Nan
	*/

	/* BOOLEAN
		bool a{true};   => will print 1.
		bool b{false};  => will print 0.
		
		To print 'true/false'
		std::cout<<std::boolalpha;
		std::cout<<a;

		A byte can store 256 values so using it to throw only 'true and false' state is considered wasteful
		Hence, there's another way of creating this without wasting memory.
	*/

	/* CHARACTERS & TEXT
		(1 Byte => 256 different values from 0 ~ 255)
		(Encodings: ASCII & UTF)

		char character a{'A'}
		
		char value a{65}     => will print 'A' in terms of ASCII encoding.
		static_cast<int>(a)  => will print the integer value.

		Some more examples:
		char value{65};
		std::cout<<value<<std::endl;                                         => will print 'A' 
		std::cout<<static_cast<char>(static_cast<int>(value)+5)<<std::endl;  => will add 5 to 65 which will sum up to 70 and will the corresponding character that is 'F'
	*/

	/* AUTO
		Used when the typename is complex.

		auto a{2};     => will interpret as an 'int'.

		//int modifier suffixes
		auto a{123u};  => unsigned
		auto a{123ul}; => unsigned long
		auto a{123ll}; => long long
	*/

	char value{65};
	std::cout<<value<<std::endl;
	std::cout<<static_cast<char>(static_cast<int>(value)+5)<<std::endl;

	return 0;
}
