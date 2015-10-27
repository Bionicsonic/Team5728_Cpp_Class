//2.1.2 Type Conversions

/*
As we've learned the 'type' of an object defines it data and the operations
able to be performed on it. One thing you can do though is type conversion
whereby you change an objects data from one type to another, pretty straight
forward. When we apply the types to data where another type was expected,
type conversions occur automatically.
*/

bool b = 42; //b is true
int i = b; //i has value 1
i = 3.14; //i has value 3
double pi = i; //pi has value 3.0
unsigned char c = -1; //assuming 8-bit chars, c has value 255
signed char c2 = 256; //assuming 8-bit chars, c2 has value 'undefined'

/*
-Assigned to the bool type to an integer will always produce true for any number
except 0 which will return false
-when the bool type is assigned to any other aritmetic types the resulting
value is 1 if the bool is true, and 0 if it is not
-Whent a floating-point value is assigned to an integer type the number
will truncate itself to the value before the decimal point
-When an integer value is held in a floating-point type, the fractional
part is 0
-out-of-range values to an unsigned type the result is the remainder of
the modulo the number of values the target type can hold
-out-of-range values that are signed return undefined values

These type conversions also occur when conditionals are called with
non-bool values so...
*/

int i = 42;
if(i){
	i = 0;
}

/*
would return true. (If 'i' was 0 then it would be false). Another quirky
feature is that if you add a signed interger to an unsigned one, the compiler
will return the associated bit value. Additionally we will never write 
loops with unsigned values that decrement, this is because when we reach 0
the loop will try to decrement to -1 but before the loop can catch it and 
exit, the comiler will wrap the value to the associated bit-style number.
The trick is to use only the 'less than' or 'greater than' operator with no
'equals to' operator, this will allow the loop to exit before it goes below
0.

The lesson here is to mind your types because they can cause hard to find
compiling errors.
*/
