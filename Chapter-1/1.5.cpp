//1.5 Introducing Classes

/*
In C++ data structures are defined by Classes. A class defines a type along
with a whole bunch of operations that are realted to it. Classes are usually
defined in header files and so can be called in your code without having to 
rewrite key parts. This allows us to generalize actions and reapply them
where necessary without rewriting all of the code.
*/

//1.5.1

/*
Each class defines a type. This allows us to declare variables that have 
this type, saying that the '[variable] is an object of type [class]'.
We can also use classes to:
	-Call functions to fetch the [class] object
	-Use the input and output operators ('>>' and '<<') to read and write
	objects of type [class]
	-Use the assignment operator (=) to assign one [class] object to 
	another
	-Add to [class] objects together

Classes define behavior that can be applied to the type.
*/

//This is psuedo-code it describes behavior but can't actually be run

#include <iostream>
#include "Sales_item.h" //This defines a header file not found in a library so something that is located locally in the file system

int main(){
	Sales_item book; //Our class is 'Sales_item' with object 'book' to which we will read and write all our data
	std::cin >> book; //writing input to object 'book'
	std::cout << book << std::endl; //outputing data of 'book'
	return 0;
}

//More psuedo-code

#include <iostream>
#include "Sales_items.h"

int main(){
	Sales_item item1, item2; //Defines two objects of type 'Sales_item'
	std::cin >> item1 >> item2; //This writes data into both of our init'd objects
	std::cout << item1 + item2 << std::endl; 
	//The line above sums the two objects. BUT, because we defined it as a class the summing may not occur in the tradditional sense, depending on the code
	//instead of summing it all it may just sum two properties or components of our objects.
	return 0;
}

//Exercises

//1.20

#include <iostream>
#include "Sales_item.h"

int main(){
	Sales_item book;
	while(std::cin >> book){
		std::cout << book << std::endl;
	}
	return 0;
}

//1.21

#include <iostream>
#include "Sales_item.h"

int main(){
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	if(item1.isbn() == item2.isbn()){
		std::cout << item1 + item2 << std::endl;
	}
	return 0;
}

//1.22

int main(){
	Sales_item item1, item_sum, holder_item;
	while(std::cin >> holder_item){
		if(holder_item != item1){
			item_sum += item1;
			item1 = holder_item;
		}
	}
	std::cout << "The sum of the transactions is: " << item_sum << std::endl;
}


//1.5.2

/*
What is a Member function? You might've heard them refferred to before as methods, if you haven't
heard of them at all before they are usually parts of a class and are called on an object. 
Using the '[object].[method]()', as seen above with the 'item1.isbn()' which would directly
reference the isbn property of the Sales_item object. We call the method with the call operator,
the parentheses '()'.
*/
