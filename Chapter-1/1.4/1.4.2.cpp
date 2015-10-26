//1.4.2

/*
Because incremnting through values occurs so much in code their is a specific
statement defined just for this. The for loop, which takes a base value, and
increments that value from its original to some other value, executing some
code each time it loops.
*/

#include <iostream>

int main(){
	int sum = 0;
	for(int val = 1; val <= 10; ++val) //will increment val until its equal to 10
		sum += val; //adds sum to val
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
	return 0;
}

/*
For statement has 3 parts. An init statement, a coditional, and an
expression, which does not necessairily have to increment the init.
*/

//Exercises

//1.12

/*
The for loop will add postive 1 to negative 100 until the variable 'i' equals
positive 100. The final value of sum will be -100. This is because this program
will add -100 to -99 and then add -98 to that and so on.  
*/

//1.13

#include <iostream>

int main(){
	int sum = 0;
	for(int val = 1; val <= 10 ; ++val){
		sum += val;
	}
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
	return 0;
}

//1.14

/*
For loops are good for when you need to increment between a known value
and a known base value that are generally integers. Whereas while loops
are good for incrementing through lists that may include strings or booleans
*/

//1.15

/*
Don't worry about this just yet.
*/
