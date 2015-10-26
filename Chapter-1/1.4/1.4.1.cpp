//1.4.1

/*
Normally code will execute line by line, but you can alter the flow of 
programs so that loops, or conditionals occur, or even calls to other 
functions so you can delegate actions.

While statement will repeat a section of the code while a given condition
is true
*/

#include <iostream>

int main(){
	int sum = 0, val = 1;
	while (val <= 10){ //will continue while val is less than or equal to 10
		sum += val; //adds the current value of sum to val
		++val; //increment val same as 'val = val + 1;'
	}
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
	return 0; //Tells compiler all is well
}

// Exercises

//1.9

#include <iostream>

int main(){
	int num1 = 50, num2 = 0;
	while (num1 <= 100){
		num2 += num1;
		++num1;
	}
	std::cout << "The sum of every number from 50 to 100 is: " << num2 << std::endl;;
	return 0;
}

//1.10


#include <iostream>

int main(){
	int ten = 10, base = 0;
	while (ten >= 0){
		std::cout << base;
		--ten;
	}
	return 0;
}

//1.11

#include <iostream>

int main(){
	std::cout << "Enter two numbers: " << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	while (v1 <= v2){
		std::cout << "Current number is : " << v1 << std::endl;
		++v1;
	}
	return 0;
}


