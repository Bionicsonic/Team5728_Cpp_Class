//2.1

/*
C++ has a set of predefined types for aritmetic and a special type
named 'void'. The arithmetic types represent characters, integers, boolean
values, and floating-point numbers. The 'void' type has no associated value
is mostly used in functions that don't return values.
*/

//2.1.1

/*
Aritmetic types has two catagories: 
	-Integral types (Characters and Booleans included)
	-Floating-point types

bool type (true or false)
	-bool

char type (Strings)
	-char
	-wchar_t (16 bits)
	-char16_t (16 bits)
	-char32_t (32 bits)

int type (numbers)
	-short
	-int
	-long
	-long long

floating-point type (decimal numbers)
	-float
	-double
	-long double

A unique thing about the integral types that are numbers is that they can
be signed or unsigned. What this means is that they can either be a 
value that is only greater than zero (positive) or able to be both 
greater than and less than zero (negative or positive). Signed types
can be both, unsigned can only be positive. By default all values are signed
but you can make them unsigned by simple prepending the work before the type.

Also as a rule of thumb 
	-always use 'double' when doing floating-point
	operations.
	-do not use 'char' or 'bool' in arithmetic operations.
*/
