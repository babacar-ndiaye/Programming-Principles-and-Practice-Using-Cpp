/*
	Written by Jtaim
	April 8 2019
	Stroustrup, Bjarne. Programming: Principles and Practice Using C++ . Pearson Education. Kindle Edition.

	Section 10 Exercise 6
	Define a Roman_int class for holding Roman numerals (as ints) with a << and >>.
	Provide Roman_int with an as_int() member that returns the int value, so that if r is a Roman_int,
	we can write cout << "Roman" << r << " equals " << r.as_int() << '\n';.

	This program is to test the Roman_int class
	Roman numerals have no concept of 0 or negative numbers.
	Also, this does not go above 3999, well guess could with adding more Ms but
	does not follow 4 = IV, 9 = IX ... when get above 3999.
*/

#include "../includes/ppp.h"
#include "Roman_int.h"

int main()
try{
	Roman_int r1{"CDIV"};
	Roman_int r2{"MMMCMXCIX"};
	Roman_int r3{"MMMI"};
	std::cout << "Roman " << r1 << " equals " << r1.as_int() << '\n';
	std::cout << "Roman " << r2 << " equals " << r2.as_int() << '\n';
	std::cout << "Roman " << r3 << " equals " << r3.as_int() << '\n';

	ppp::keep_window_open();
	return 0;
}
catch(std::exception& e){
	std::cerr << R"(exception: )" << e.what() << std::endl;
	ppp::keep_window_open();
	return 1;
}
catch(...){
	std::cerr << R"(exception)";
	ppp::keep_window_open();
	return 2;
}