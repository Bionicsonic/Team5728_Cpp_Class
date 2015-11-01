//1.4.3

#include <iostream>

int main(){
	int sum = 0, value = 0; //initialize variables to hold values
	while (std::cin >> value){ //reads the number of inputs and stores them in variable 'value' 
		sum += value; //adds value to the evolving total of sum
	}
	std::cout << "Sum is: " << sum << std::endl; //Tells us the final value of sum
	return 0; //All is well carry on
}

/*
This program will take any input values and add them together. So giving 
values of '3 5 8' will give you '16'. the variable value is init'ed at 0 and
holds each of the input values. Why does this occur? In the background each
input value is read by the 'cin' function and then stored in value before being
added to the running total of 'sum'. 'cin' reads from an array where each
input value is temporarily stored.

The while loop is essentially testing the input stream (elements in
the array). If no error is eencountered then the test returns true. The false
value will occur when we reach end-of-file, null-byte, or invalid input such
as a value that is not an integer.

Type Errors: 
	-If you tell the compiler the value is an integer('int'), but then pass
	it a string an error will occur

-Declaration Errors
	-All names must be declared before they are used, failure to do this
	will cause an error. Remember your 'char', 'bool', and 'int'.
*/

//Exercises

//1.16

int main(){
	std::cout << "Enter any amount of numbers sperated by spaces: " << std::endl;
	int v1 = 0, v2 = 0;
	while(std::cin >> v2)
		v2 += v1;
		std::cout << "The current total is... " << v1 << std::endl;
	return 0;
}


