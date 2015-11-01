/*
In C++ everything is done by functions, if you need something done 
you make a function for it. The benefit of this is being able to 
compartmentalize our code, only using it when necessary, this makes it
faster, and agile when running. A basic function is composed of four
central parts those being: a return type, a function name, a parameter list,
and a function body. Lets take a look at our first function.
*/

int main(){
  return 0;
}

/*
What is the above program telling us? Well first it tells us its return type which
in this case is 'int' which means that the ultimate of this function  will be an
integer. Next is the function name, which is 'main'. In C++ you can name your functions
whatever you please but you must somewhere have a function named 'main' because this is 
where your code will first start running from. After this is our function parameter list
which is within the two parantheses, you must always have this, and although it is empty 
now it can be used to take in input from other functions or various user actions.
The function body is inbetween the two curly braces, which is where the code will run;

Generally the value derived from main will tell you the state of your code with 0 meaning
that everything went all right. Any other value means a problem occured and is specified by
that systems way of handeling code.

Other useful information:

C++ files are usually appended with either '.cpp', '.cc', '.cxx', '.cp', or '.C'. Depending
on which OS you are running (OS X, Windows, Linux) you will have a different built-in compiler.
You will have to find your version of your Operating System and do research on your compiler to
know how to do this. Alternatively you can download the Eclipse IDE and use theirs.
*/
