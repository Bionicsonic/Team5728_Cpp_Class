//2.1.3 Literals

/*
Literals are values that are self-evident, or you as the programmer
can directly infer the value of.

Integer Literals

We can write an integer literal using decimal, octal, or hexadecimal notation.
Integer literals that begin with 0 are interpretted as octal, those that 
begin with '0x' or '0X' are interpretted as hexadeciaml. 
*/

20 //Decimal format
024 //Octal format
0x14 //Hexadecimal format

/*
Decimal literals are signed, whereas Hex and Oct literals can be either 
signed or unsigned. Decimal literals are the smallest type of 'int', 'long',
and 'long long'. Hex and Oct have the smallest types of 'int', 'unsigned int',
'long', 'unsigned long', 'long long', and 'unsigned long long'

You can override these defaults using the prefixes shown in the book.
*WILL INSERT TABLE LATER*

Decimal literals are never negative despite being signed, if you write
-42 as a negative decimal literal, the minus sign is not part of that literal.

Floating-point literals include either a decimal or an exponent valued specified
using scientific notation. Most floating-point literals have type 'double'

Character and Character String Literals

A character in single quotes is a literal of type 'char'. Zero or more
characters enclosed in double quotes marks a string literal.
*/

'a' //character literal
"Hello World!" //string literal

/*
String literals are contained in arrays which are just quick data structures
we'll discuss later. At the end of this string the compiler adds a null byte
'\0' to every string literal which ends the string at that point. Thus every 
string literal is bigger in size by one than that of its actual length. Two strings
that appear adjacent to eachother and are only seperated by newlines, tabs, or spaces
are concatenated to be one string literal.
*/

std::cout << "a really, really long string literall " 
			 " that spans two lines" << std::endl;

/*
Escape Sequences

Some characters are reserved by the compiler to have special meanings and if 
encountered cause special actions to occur. Such characters are called 
nonprintable.
____Name____________Escape_Sequence__
newline         |      \n
vertical tab    |      \v 
backslash       |      \\
carriage return |      \r
horizontal tab  |      \t
backspace       |      \b
question mark   |      \?
formfeed        |      \f
alert (bell)    |      \a
double quote    |      \"
single quote    |      \'
_____________________________________
*/

std::cout << '\n';
std::cout << "\tHi!\n";

/*
We can also generate general escape sequences which would be '\x' followed by one or
more hexadecimal digits pr a '\' followed by either 1, 2, or 3 octal digits. 
*/

\7   (bell)
\0   (null byte)
\12	 ('\n')
\115 ('M') 
\x4d ('M')


std::cout << "Hi \x4dO\115!\n"; //Prints 'Hi MOM! followed by a newline'

/*
If more than 3 digits are used for an octal anything past the third digit will be
interpretted as a character, seperate from the octal. \x will use every single digit
following it. You can override the default type of an integer, floating-point, or character
by giving a suffx or prefix as listed. 
*/

L'a'		// wide character literal, type is wchar_t
u8"hi!" 	// utf-8 string literal
42ULL		// unsigned integer literal, type is unsigned long long
1E-3F		//single-precision floating-point literal, type is float
3.14159L 	// extended precision floating-point literal, type is long double 

/*
Boolean and Pointer Literals

bool literals have values of either true or false. 'nullptr' is a pointer literal. 
Pointers will be discussed more later on.
*/
