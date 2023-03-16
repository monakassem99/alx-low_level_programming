C - Hello, World
the “Hello World” program is the first step towards learning any programming language and also one of the simplest programs you will learn. All one needs to do is display the message “Hello World” on the screen. Let’s look at the program and try to understand the terminologies involved in it.
C program to print Hello World


// Simple C program to display "Hello World"
  
// Header file for input output functions
#include <stdio.h>
  
// main function -
// where the execution of program begins
int main()
{
  
    // prints hello world
    printf("Hello World");
  
    return 0;
}
Output:
Hello World
Compiling the First C Program:
Before proceeding to write the first program, the user needs to set up a C program compiler, which would compile and execute the “Hello World” program. Here we have used Windows-based GCC compiler to compile and run the program. To know more on how to set up the local GCC compiler or running using online ide refer to Setting C Development Environment.
Step 1: This requires writing the “Hello World” program, in a text editor and save the file with the extension .c, for example, we have stored the program in a C-type file HelloWorld.c.
Step 2: This includes opening CMD or command prompt line navigating to the directory where the file HelloWorld.c is present. Here it is present in C:\Users\Chin\Sample.
Step 3: To compile the code execute the following command:
gcc HelloWorld.c
This would create a C-executable file with a random name given by the compiler itself. We got the executable filename as a.
To give a user-oriented name, run the following command.

gcc -o helloworld HelloWorld.c/pre>
This would create a C-executable file by the name helloworld.
Step 4: To run the executable file to get the result, just run the file.
helloworld
Explanation of the code:

Let us now understand the terminologies of the above program:

// Simple C program to display “Hello World”
This is a single comment line. A comment is used to display additional information about the program. A comment does not contain any programming logic as it is not read by the compiler. When a comment is encountered by a compiler, the compiler simply skips that line of code. Any line beginning with ‘//’ without quotes OR in between /*…*/ in C is a comment.
More on Comments in C

#include 
In C,  all lines that start with pound (#) sign are called directives. These statements are processed by preprocessor program invoked by the compiler. The #include directive tells the compiler to include a file and #include<stdio.h> tells the compiler to include the header file for Standard Input Output file which contains declarations of all the standard input/output library functions.
More on Preprocessors in C.

int main()
This line is used to declare a function named "main" which returns data of integer type. A function is a group of statements that are designed to perform a specific task. Execution of every C program begins with the main() function, no matter where the function is located in the program. So, every C program must have a main() function and this is the function where the execution of program begins.
More on main() function in C.

{ and }: The opening braces '{' indicates the beginning of the main function and the closing braces '}' indicates the ending of the main function. Everything between these two comprises the body of the main function and are called the blocks.
printf("Hello World");
This line tells the compiler to display the message "Hello World" on the screen. This line is called a statement in C. Every statement is meant to perform some task. A semi-colon ';' is used to end a statement. Semi-colon character at the end of the statement is used to indicate that the statement is ending there. The printf() function is used to print character stream of data on stdout console. Everything within " " is displayed to the output device.
More on Input/Output in C.

return 0;
This is also a statement. This statement is used to return a value from a function and indicates the finishing of a function. This statement is basically used in functions to return the results of the operations performed by a function.
More on return in C.

Indentation: As you can see the printf and the return statement have been indented or moved to the right side. This is done to make the code more readable. In a program as Hello World, it does not seem to hold much relevance but as the program becomes more complex, it makes the code more readable and less error-prone. Therefore, one must always use indentations and comments to make the code more readable.
FAQ on the style of writing programs.

