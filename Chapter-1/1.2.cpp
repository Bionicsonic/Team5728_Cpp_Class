#include <iostream>

int main(){
	std::cout << "Enter two numbers:" << std::endl; /* String Literal */
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2; /* Takes the two variables in*/
	std::cout << "The sum of" << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
	return 0; /*Tells computer that all is well */
}

/* 
'std::' prefix tells that compiler that 'endl', 'cout', and 'cin', are 
all located in the namespace 'std'. Namespaces allow us to avoid collisions
between those we make ourselves and those that are premade

'int v1=0, v2=0'
defines two integer variables meaning they will only be able to have
integer related operations performed on them as well as be recieved by 
the comiler as integers. They are initilized at 0. 

'std::cin' reads the input and uses the input operator '>>' to do so. 
*/


//Exercises for 1.2

//1.3
int main(){
	std::cout << "Hello World" << std::endl;
	return 0;
}

//1.4
int main{
	std::cout << "Enter Two Numbers:" << std::endl;
	int variable = 0, variable1 = 0;
	std::cin >> variable >> variable1;
	std::cout << "The values of" << variable << " and " << variable1 << " when multiplied is " << variable * variable1 << std::endl; 
	return 0;
}

//1.5
int main(){
	std::cout << "Enter two numbers:" << std::endl; 
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The sum of";
	std:cout << v1;
	std::cout << " and ";
	std::cout << v2;
	std::cout << " is ";
	std::cout << v1 + v2;
	std::cout << std::endl;
	return 0; 
}

//1.6
/*
The program provided is not legal because the first line ends with a 
';' signifying that the compiler should go to the next piece of code.
But when it arrives there the code does not provide the compiler with 
a way to handle the information being given, so an error will be outputed
*/

