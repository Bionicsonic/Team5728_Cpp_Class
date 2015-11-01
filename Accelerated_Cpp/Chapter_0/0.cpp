//Chapter 0

/*
Wowie lets begin you AP accelerated Honors College students you,
it looks like we have our first program! Lets write it out.
*/

#include <iostream>

int main(){
	std::cout << "Hello World!" << std::endl;
	return 0;
}

/*
This program starts out by telling us what we are going to be using
which is 'iostream'. In C++ and many other various langauges often 
their are lots of predefined variables and functions built-in to the
language or at least pre-built so that we don't have to make them
ourselves. 

Next we see is 'int', this is called a type and is specifying
to our compiler what the ultimate result of our code will be, which in 
this case is an integer, hence 'int'. 

Next is the function name which is pretty straight forwardly named main, 
when you code however you can name your functions whatever you want but 
it is important to know that somewhere in your code you need to have a 
'main' function. This is because your compiler does not know where to
start reading code from otherwise so by having a main function were able
to start at an exact location and delegate out tasks to other functions we write as needed. 

Next we see our parameter list this will usually hold some sort of input 
that is accepted into our function instead of everything being generated 
internally. Right now it is blank but otherwise those parameters would be 
listed inbetween the two paraentheses shown after 'main'.

After this is the code body that occurs inbetween the curly braces, this 
code can contain anything but will always be the first part of our code to
run, delegating out tasks to other parts of the code not in the main function
as needed. Within our code body, we see we have two statements the first 
the first is drawing from the iostream library we told our compiler that we 
would need at the very beginning of our program. Each statement reads to the 
computer like this:
	-'std::' says were looking for a specific predefined funcation
	-'cout' is the name of the specfic function
	-'<<' output operator that sequential pipes into the 'cout' function
	-'Hello World!' our string to be outputted
	-'std::endl' again a very specific function were talking about called endl

The next statement of code is giving us the value we said we would ultimately
return. If you code runs perfectly the main will return 0, any otehr number
specifies some problem in your code that you must look up relative to your 
compiler.
*/


//Exercises

//0-0

/*
You can do this on your machine by either getting Eclipse or using you native
compiler which you will have to Google because each OS has a different built-in
compiler
*/

//0-1

/*
Adds Number 3 to Number 4 To Get Value of Number 7
*/

//0-2

#include <iostream>

int main(){
	std::cout << "This (\") is a quote, and this (\\) us a backslash." << std::endl;
	return 0;
}

//0-3

/*
Again relative to you, do research if you like.
*/

//0-4

#include <iostream>

int main(){
	char c = 'Hello World!';
	std::cout << c << std::endl;
	return 0;
}

//0-6

/*
No Because their are no curly brace to define where the function
starts
*/

//0-7

/*
Yes because while each curly brace creates a new scope utimetely the 
same code will be run as it their were only one set of curly braces
*/

//0-8

/*
No because the second instance of the delimiter ends the comment prematurely
*/ 

//0-9

int main(){
	return 0;
}

//0-10

#include <iostream>

int main(){
	std::cout << "\nHello World!\n" << std::endl;
	return 0;
}
