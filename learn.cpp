#include <ios>
#include <iostream>
#include <iomanip>
#include <compare>
#include <limits>
#include <cmath>
using namespace std;

int main(void) {
	/* NUMBER SYSTEMS
		int a {070};   => Octal
		int b {0xa};   => Hexa
		int c {0b011}; => Binary
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

		precision by default would be 7 for float and double of that for double and a little more than that for long double (precision of long double will not go below than that of double)
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

	/*  CONST
		const  => to make a variable immutable
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
		
		std::cout<<"Hello there"<<std::endl<<std::flush;

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

		17. fixed  => will display every numbers with consistant format
		double a{3.1415926535}  => 3.141593
		double b{1.34e-10}  => 0.000000 (this is because the value is too small for the precision of the data type to display)
		double c{200.0}  => 200.000000

		18. scientific  => everything will be displayed in scientific notation
		double a{3.1415926535}  => 3.141593E+00
		double b{1.34e-10}  => 1.340000E-10
		double c{200.0}  => 2.000000E+02

		But by default all the values are displayed in the following format i.e, applying scientific format wherever applicable
		double a{3.1415926535}  => 3.14159
		double b{1.34e-10}  => 1.34E-10
		double c{200.0}  => 200

		To change the double value back to default format from scientific or fixed.
		std::cout.unsetf(std::ios::scientific | std::ios::fixed)

		19. showpoint  => for showing trailing '0' if neccessary (like for floating point number it's neccessary and for int it's not)

		20. noshowpoint  => for not showing trailing '0' which is set by 'default'
	*/

	/* LIMITS LIBRARY
		#include <limits>

		1. std::numeric_limits<T>::min()  => will provide the min possible number for the provided data type(T)
		2. std::numeric_limits<T>::max()  => will provide the max possible number for the provided data type(T)
		3. std::numeric_limits<T>::lowest()  => will provide the lowest possible number for the provided data type(T) and can be compared with min for correctness.
		4. std::numeric_limits<T>::digits()  => will provide the number of digits possible for the given data type(T)
		5. std::numeric_limits<T>::is_signed()  => will tell if the number is signed or unsigned
	*/

	/* MATH FUNCTIONS
		#include <cmath>

		1. std::floor(value)  => will round down
		2. std::ceil(value)  => will round up
		3. std::abs(value)  => will provide the absolute value
		4. std::exp(value)  => will provide the exponential of the value (e^value) [e => 2.71828]
		5. std::pow(value, exponent)  => will raise the value to the power of the exponent provided 
		(logs are reverse of power)
		6. std::log(value)  => will give the log of the value to the base 'e'
		7. std::log10(value)  => will give the log of the value to the base '10'
		8. std::sqrt(value)  => will provide the square root of the provided value.
		9. std::round(value)  => will provide the square root of the provided value.
		if 2.5 & above => rounded up to 3
		else if 2.4 & below => rounded up to 2
		10. std::sin(value)  => will provide sin of a value
		11. std::cos(value)  => will provide cos of a value
		12. std::tan(value)  => will provide tan of a value
	*/

	/* WIERD INTEGRAL TYPES
		char | short (basically integral types with size less than 4 bytes)
		If we have values with these types and have arithmetic operators it'll convert the types to 'int' because int is the smallest integral data types for which arithmetic operation works

		short a{1};
		short b{20};
		cout<<sizeof(a)<<" "<<sizeof(b)<<"\n";

		auto result = a + b;
		std::cout<<sizeof(result)<<"\n";  => will print out the size of an int instead of short(2 bytes). Same goes with char arithmetic operation on which will also return int.

		This is basically compiler doing implicit conversion
	*/

	/* CONDITIONAL FLOWS
		if, else if, else  => conditional expression
		switch  => alternative way of using coniditonal expression
		ternary  => alternative way of using conditional expression if there are 2 paths (othewise it'll ruin the code quality) [NOTE: both the values should be of the same type]

		switch(condition) {
			case 1:
				//do something
				break;
			case 2:
				//do something
				break;
			default:
				//do something
		}
		
		(or)

		switch(condition) {
			case 1: {
				//do something
			}
			break;

			case 2: {
				//do something
			}
			break;

			default: {
				//do something
			}
		}

		condition  => can be integral types and enums

		switch(condition) {
			case 1:
			case 2:
			case 3:
			...
			case n: {
				//do something
			}
			break;
		}

		string result = a > b ? "a is greateer" : "b is greater";
	*/

	/*  LOOP
		1. FOR LOOP
		for(unsigned int i{}; i<10; ++i) {
			//statements
		}

		size_t  => is a type alias for some unsigned int representation (size depends on the compiler [In my compiler it's 8bytes])

		for(size_t i{0}; i<10; ++i) {
			//statements
		}

		if we want to use iterator variable outside the loop as well:
		size_t i{};
		for(i; i<10; ++i) {
			//statements
		}
		++i;

		or

		size_t i{};
		for( ; i<10; ++i) {
			//statements
		}
		++i;

		GOOD PRACTICE:
		It is to use a const variable for the counter because there might be a chance that we'll be re-using that variable in other loops as well
		const size_t COUNT{10};
		size_t i{};
		for( ; i<COUNT; ++i) {
			//statements
		}
		++i

		RANGE BASED FOR LOOP:
		int arr[] {1, 2, 3};
		for(auto value : arr) {
			//statements
		}

		2. WHILE LOOP
		const size_t COUNT{10};
		size_t i{};
		
		while(i<COUNT) {
			//statements
			++i;
		}
		++i;

		3. DO WHILE LOOP
		const size_t COUNT{10};
		size_t i{11};

		do {
			//statements
			++i;
		} while (i<COUNT);
	*/

	/*  ARRAYS
		Array are a way to store homogenous types of data together in a contigious memory location (data type should be the same because I guess it'll feel confused when it sees one of the value having different size of bits of binaries instead of the number of bits allocated to it)
		1. INITIALIZE
		int arr[10];  => once we declare an array will be garbage values inside them. Only once we initialize the value it'll be updated.

		arr[0] = 1;  => updating the 1st index with a value [Always while indexing the array be aware of the boundary of the array especially while working with loops. Sometimes it'll give garbage values or sometimes if your luck is not in your side then the whole OS might fail because you might not know what memory you might be using since it has given access to some contigious memory with the given size it found free which also means that the very next index after the boundary of the array might have garbage not currently used by the OS or it might be using that memory for OS]
		
		cout<<arr<<"\n";  => will print the address of the first index of the array

		2. INITIALIZE AND DECLARE
		double arr[10] {1, 2.4, 5, 9.3, 10, 5, 9, 10, 2, 3};  => this will initailize and declare the array

		double arr[5] {1, 2, 3};  => this will update the value in the 1st 3 indices and for the next available indices it'll update to 0.

		int arr[] {1, 2, 3}  => compiler will deduce the size of the array to the values present in the array
		we can also make use of RANGE BASED FOR LOOP for arrays

		const int arr[] {1, 2, 3}  => won't be able to update the value of the array with CONST as type
		arr[0] = 0;  => will throw an error

		3. SIZE
		std::size(arr)  => will provide the size of the array in runtime (c++ 17)
		previous hacks for the same was  => size_t count {sizeof(arr)/sizeof(arr[0])};

		To find the length of the array:
		*(&arr+1)-arr  => here &arr+1 will give the address to the first element of the next array. If, there's no array defined then it'll get arbitrary address to the address right after the end of the given array. Hence, by removing the address of the first element of the array with the arbitrary address after the array gives the length of the element.

		4. ARRAY OF CHAR
		char str[5] {'h', 'e', 'l', 'l', 'o'};
		for(auto c: str) cout<<c<<" \n";

		str[0] = 'm';
		for(auto c: str) cout<<c<<" \n";

		with char arrays the string can be directly printed with [IMP] => cout<<str<<"\n";  (but for this to work sometime it might require you to have '\0' or the null terminator string character at the end of the array otherwise in some cases some junk value will be printed at the end) [size also will be printed out properly if we add this]
		
		character array ending with '\0' is called 'c string'

		char str[6] {'h', 'e', 'l', 'l', 'o'};
		cout<<str<<"\n";
		char str[] {'h', 'e', 'l', 'l', 'o'};
		cout<<size(str)<<"\n";  => size will be 6 because null terminator string character will be appended at the end of the array (not sure how executing I couldn't find this working)

		char str[6] {'h', 'e', 'l', 'l', 'o', '\0'};
		cout<<str<<"\n";
		char str[] {'h', 'e', 'l', 'l', 'o', '\0'};
		cout<<size(str)<<"\n";

		LITERAL C STRING (recommended way to initialize the character array)
		char str[] {"hello"};  => this will by default add null ternminator string character at the end
	*/

	/*  POINTER
		This is a variable which stores the address of another variable

		The following pointers are not pointing to anything.
		int * p_number{};  => this can only store the pointer to the address of an int
		double * p_fractional_number{};  => this can only store the pointer to the address of an double
		But, we can do the following to add double to int pointer:
		p_number = static_cast<int>(double_value);

		Or else we can explicitly state by using  nullptr. [It's really bad to not use nullptr for initializing the pointer. Otherwise we might use a memory that's in use by other programs it's be storing value in a junk address]
		int * p_number{nullptr};

		All pointer will have the same size even with different data types this is because at all cases it's storing the address which will have the same size all the time.
		sizeof(p_number) == sizeof(p_fractional_number);  => 8 bytes in my machine

		* positioning: Any position is fine
		int*  p;
		int * p;
		int  *p;

		int* p, q;  => this will be confusing because here 'p' will pointer as expected, but 'q' is not a pointer except it'll be an int
		int *p, q;  => the above can be updated like to make it slightly better, but with pointer it's better to separate declarations.

		ASSIGNING DATA TO THE POINTER
		int int_var{2};
		int *p_number{&int_var};  => will point to the address of int_var

		int *p_number{};
		p_number = &int_var;  => this will also work

		DEREFERENCING POINTER
		cout<<*p_number<<"\n";

		CHAR POINTER
		Normal way of declaring char pointer:
		char *p_char{nullptr};
		char c{'A'};
		p_char = &c;
		cout<<*p_char;  => will print the character

		But, the unique thing here is that we can initialize a string literal
		char *p_str{"hello"};  => this is like character array. Where the pointer is pointing to the first character of the character array or the string. [NOTE: sometimes we'll receive a compiler error. This is because some compiler will expect const char array or pointer instead of normal char array or pointer]

		DEREFERENCING CHAR POINTER
		cout<<*p_str;  => will print the first character
		cout<<p_str;  => will print the whole string

		MODIFICATION OF CHAR ARRAY THROUGH POINTER
		(This is throw an error or crash the program because updating the value of the string literal is not possible since it's a const char)
		const char p_message{"hello"};
		*p_message = 'B';  => will throw an error since it's read-only

		So, if we want to have a modifiable char array it should be normal char array
		char message[]{"hello"};
		message[0] = 'm';
	*/

	/*  PROGRAM MEMORY MAP
		If we double click on the exe or program files it'll be stored in RAM(Memory) and will be stored in a special section of memory called 'Program Area'.
		But, the reality is that all the programs are run in Virtual Memory. Otherwise we would run out of memory. With Virtual memory it's tricking programs into thinking that it's the only program running in the OS and all the memory belongs to it. This memory that program uses is called 'Memory Map'.

		Each memory is abstracted into a process and each process will have access to memory range 0~(2^N)-1. where 'N' is 32 if 32 bit and 64 is the system is 64bit.
		
		MEMORY MAPPING UNIT
		It is mapping the Virtual Memory to the actual memory. It's assign some sections of the memory to each process in the RAM.
		And it'll use that section only while executing the program.

		Memory map is defined by the OS so we won't be able to execute the same executables in different OS we'll have to build separately [IMP]
		
		MEMORY MAP DIVISION
		System  |  Stack  |	 Heap  |  Data  |  Text

		Stack  => will store our local variables
		int a, b, c;
		a = b = c = 7;  => a, b, c will be stored in stack
		heap  => additional memory we can use to make things better for our program during run time. (dynamic memory)
		Text  => will hold the actual binary of the program so that the CPU can execute this
	*/

	/*  DYNAMIC MEMORY ALLOCATION
		Start using heap from the memory map of our system if memory isn't enough for our execution.

		BAD PRACTICE
		int *p;  => contains junk address
		*p = 52; => writing into junk (dereferencing and initializing)

		Stack  => finite memory
				  developer isn't in full control of memory lifetime
				  lifetime is controlled by scope mechanism

		heap  => finite memory but can be made use of when stack memory is not sufficient
				 developer has full control of when the memory is allocated and when it's released
				 lifetime is controlled by 'new' and 'delete' operators

		DYNAMIC INITIALIZATION (Dynamically allocating memory at runtime)
		int *p_number{nullptr};
		p_number = new int;  => this piece of memory will be allocated to the program at runtime and no other process would be running at this memory location

		*p_number = 8;

		LIFETIME OF HEAP
		int main() {
			{
				int a{8};
				int *b = new int;
			}
			return 0;
		}

		Here, 'a' will be limited to that scope. But, whereas for 'b' the memory will be for us to use.

		RESETTING/ RELEASING
		This is returning the heap memory to the OS.
		int *p_number{nullptr};
		p_number = new int;

		delete p_number;
		p_number = nullptr;  => good practice to set the released memory to nullptr

		INITIALIZING NEW UPON POINTER DECLARATION
		int *p_number{new int};  => memory location contains junk
		int *p_number{new int(20)};  => using direct initialization
		int *p_number{new int{20}};  => using uniform initialization

		Avoid deleting the memory location twice [IMP]

		REMEMBER THIS IN POINTERS
		Don't try to assign value to a memory using dereferencing technique
		DON'T:
		int *p_number{nullptr};
		*p_number = 4;

		DO'S:
		int *p_number{nullptr};
		int a{4};

		But we can dereference when we have dynamic memory [IMP]
		int *p_number{};
		p_number = new int;
		*p_number = 8;  => writing into dynamically allocated memory

		We can also reuse the memory we've returned to the OS using delete. This is valid.
		int *p_number{new int(2)};
		delete p_number;
		p_number = nullptr;

		p_number = new int(8);  => valid
	*/

	/*  DAGLING POINTERS
		Pointer that is not pointing to the valid memory address. Trying to dereference and use a dangling pointer will result in undefined behavior
		1. Uninitialized pointer
		2. Deleted pointer
		3. Multiple pointers pointing to the same memory
		int *p_number{new int{2}};
		int *p_number1{p_number};

		now if we delete p_number then if we try to use p_number1 this will cause an error or will have junk value
		delete p_number;
		cout<<*p_number1<<"\n";  => will throw an error or garbage values

		SOLUTIONS
		1. Always initialize the pointers
		initialize pointers immediately:
			int *p_number{};
			int *p_number1{new int(3)};

		check for nullptr before use:
			if(p_number != nullptr) { //only then use the value }

		2. Reset the pointer to 'nullptr' after deleting

		3. For multiple pointers pointing to the same address create a master pointer (that owns the memory responsible for releasing whenever necessary), other pointers(slave pointers) should only be able to dereference when the master pointer is valid.
		int *p_number{new int(8)};  => master pointer
		int *p_number1{p_number};  => slave pointer

		cout<<*p_number;  => dereferencing the pointer and using them

		if(!(p_number == nullptr)) {//only using slave pointers when master pointer is valid
			cout<<*p_number1;
		}

		delete p_number;  => master releases the memory
		p_number = nullptr;

		if(!(p_number == nullptr)) { //only use when master pointer is valid
			cout<<*p_number1;  => this will not execute this time because master pointer is nullptr now.
		} else {
			cout<<"Invalid pointer";
		}
	*/
}
