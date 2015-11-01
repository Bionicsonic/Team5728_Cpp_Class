//1.4.4

#include <iostream>

int main(){
	int currVal = 0, val = 0; //init our variables 
	if(std::cin >> currVal) { //stores current value being counted
		int cnt = 1; //init 'cnt' variable
		while (std::cin >> val){ // holds each input as its read in 'val'
			if(val == currVal) //continues if the values are the same
				++cnt
			else {
				std::cout << currVal << " occurs " << cnt << " times " << std::endl;
				currVal = val; //remember the new value
				cnt = 1; //resets the counter
			}
		} //while loop ends
		std::cout << currVal << " occurs " << cnt << " times " << std::endl;
	}
	return 0;
}

/*
Given the input: 
	42 42 42 42 42 55 55 62 100 100 100
The output becomes:
	42 occurs 5 times
	55 occurs 2 times
	62 occurs 1 times
	100 occurs 3 times

Essentially this programs works by first validating that their is some input
then this value is stored in 'currVal'. We init the 'cnt' variable
at 1, and then the 'while' statement loops through each of the input and 
increments the 'cnt' variable for each equal match. This is done for each
input into the program.

C++ uses the '=' for assignment and '==' for equality comparison.
*/

//Exercises

//1.17

/*
If all the values are equal then the programs 'while' statement will 
continue to increment the 'cnt' function. And input the amount of times it
occured. If none of them are equal for each value it will output the 
string with the 'occurence rate' at 1 for each value 
*/

//1.18

/*
I'm a lazy bastard I'll do this in a wee bit laddies
*/

//1.19

#include <iostream>

int main(){
	int sum = 0, holder = 0, saver = 0;
	while(std::cin >> holder){
	    std::cout << "[+] Holding: "<< holder << std::endl;
        std::cout << "[+] Saving: " << saver << std::endl;
	    if(saver < holder){
	        std::cout << "[+] Adding " << holder << " to " << sum << std::endl;
	        sum += holder;
	        saver = holder;
	    }
	} 
	std::cout << "[+] Total sum is: " << sum << std::endl;
	return 0;
}
