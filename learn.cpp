#include <iostream>
#include <iomanip>
#include <compare>
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

		//auto is dangerous when we have to assign different value to it later
		auto var3{22u};
		var3 = -2;       => instead of this compiler will put in garbage values here
	*/

	/* OPERATORS
		Addition        => +
		Subtraction     => -
		Multiplication  => *
		Division        => /
		Modulus         => %
	*/

	/* PRECEDENCE & ASSOCIATIVITY
		Precedence     => what operation to do first
		Associativity  => what direction or order
	*/

	/* PREFIX & POSTFIX INCREMENT/DECREMENT
		int value{5};
		value++;
		value--;

		++value;
		--value;
	*/

	/* COMPOUND ASSIGNEMENT OPERATORS
		+=
		-=
		*=
		/=
		%=
	*/

	/* COMPARATOR OPERATOR
		==
		!=
		>=
		<=
		>
		<
		<=>  : spaceship operator (compares 3 way)

		To print bool we can use the same operator
		std::cout<<std::boolalpha;

		If we want to print the evaluation of an expression directly through cout, we'll need to have ().

		cout<<(a < b)<<endl;

		If we remove () it'll evaluate '<<' first due to higher precedence causing error.
	*/

	/* LOGICAL OPERATORS
		a && b => AND
		a || b => OR
		!a     => NOT
	*/
	
	/* OUTPUT FORMATTING
		Libraries:
		#include<ios>
		#include<iomanip>

		1. endl  => to print new line character
		2. flush => causes immediate sending of data to the device connected to the stream. So, what happens with 'cout' is that the data goes to a intermediary buffer(like a storage) before printing in the console. It'll first print out each word and line one by one to that buffer and then directly transfer all of the data to the console at once.
		std::cout<<std::flush;
		std::cout<<"Hello there\nHow's it going there?"<<endl;

		3. setw() => to set the width of the value to be printed.
		std::cout << std::setw(10) << "Firstname" <<std::setw(10)<<"Lastname"<< std::setw(5) <<"Age"<<std::endl;
		std::cout << std::setw(10) << "Nishanth" <<std::setw(10)<<"Kiran"<< std::setw(5) <<"23"<<std::endl;
		std::cout << std::setw(10) << "someone" <<std::setw(10)<<"else"<< std::setw(5) <<"20"<<std::endl;
		
		4. right  => to tell that after setting width to our data it should print to the right side of the formatted layout
		std::cout<<std::right;
		std::cout << std::setw(10) << "Firstname" <<std::setw(10)<<"Lastname"<< std::setw(5) <<"Age"<<std::endl;

		5. left  => to tell that after setting width to our data it should print to the left side of the formatted layout
		std::cout<<std::left;
		std::cout << std::setw(10) << "Firstname" <<std::setw(10)<<"Lastname"<< std::setw(5) <<"Age"<<std::endl;

		6. internal  => to tell that after setting width to our data it should print to the right most side and the negative sign if the value is negative should print on the left most side of the formatted layout
		std::cout<<std::internal;
		std::cout << std::setw(10) << "Firstname" <<std::setw(10)<<"Lastname"<< std::setw(5) <<"Age"<<std::endl;

		7. setfill()  => to tell the console to print the value provided inside the function to be printed instead of spaces after each value in the formatted output
		std::cout<<std::internal;
		std::cout<<std::setfill('*');
		std::cout << std::setw(10) << "Firstname" <<std::setw(10)<<"Lastname"<< std::setw(5) <<"Age"<<std::endl;
		
		8. boolalpha => to print the boolean values instead of 0 and 1
		std::cout<<std::boolalpha;
		std::cout<<(true)<<std::endl;

		9. noboolalpha => to remove the implementation of 'boolalpha'
		std::cout<<std::boolalpha;
		std::cout<<(true)<<std::endl;
		std::cout<<std::noboolalpha;
		std::cout<<(true)<<std::endl;

		10. showpos  => to show + sign if the value is positive. But, - will always be shown for negative numbers by default
		std::cout<<std::showpos;
		std::cout<<(34)<<std::endl;

		11. noshowpos  => to remove the implementation of 'showpos'.
		std::cout<<std::showpos;
		std::cout<<(34)<<std::endl;
		std::cout<<std::noshowpos;
		std::cout<<(34)<<std::endl;
		
		12. dec, hex, oct  => to convert a number an integer (will not convert a floating point number)
		std::cout<<std::dec<<55<<std::endl;
		std::cout<<std::hex<<55<<std::endl;
		std::cout<<std::oct<<55<<std::endl;

		13. showbase  => to represent base of the number (0x, 0, 0b)
		14. noshowbase  => to print number without the base

		15. uppercase  => to print the scientific & hexadecimal numbers with uppercase alphabets
		std::cout<<std::uppercase;
		std::cout<<std::hex<<717171<<'\n'<<3e10<<'\n';
	*/

	std::cout<<std::uppercase;
	std::cout<<std::hex<<717171<<'\n';

	return 0;
}
