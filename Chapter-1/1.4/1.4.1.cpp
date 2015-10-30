//1.4.1

/*
Control Flow

Normally code will execute line by line, but you can alter the flow of 
programs so that loops, or conditionals statements occur, or even make calls
to other functions to delegate actions as needed.

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

/*
So our code here starts with our two variables, 'sum' holding the value 0 and 'val'
holding the value one. Then our while loop evaluates the value of 'val' and if it 
decides that it is in fact 'less than or equal to 10' then it will return true causing
the code within its curly braces to run. Which add the current value of 'val' to 'sum', 
and then increment the value of 'val' before the while loop occurs again. After the while
loop evaluates to false, which will occur when 'val' holds the value 10, the code after
the loop will run causing it to output the summation of all numbers from 0 to 10 added. 
*/

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


