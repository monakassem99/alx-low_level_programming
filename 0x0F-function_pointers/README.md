Function Pointer in C
In C, like normal data pointers (int _, char _, etc), we can have pointers to functions. Following is a simple example that shows declaration and function call using function pointer.
#include <stdio.h>
// A normal function with an int parameter
// and void return type
void fun(int a)
{
printf("Value of a is %d\n", a);
}

int main()
{
// fun_ptr is a pointer to function fun()
void (\*fun_ptr)(int) = &fun;

    /* The above line is equivalent of following two
    void (*fun_ptr)(int);
    fun_ptr = &fun;
    */

    // Invoking fun() using fun_ptr
    (*fun_ptr)(10);

    return 0;

}
Why do we need an extra bracket around function pointers like fun_ptr in above example?
If we remove bracket, then the expression “void (*fun_ptr)(int)” becomes “void *fun_ptr(int)” which is declaration of a function that returns void pointer. See following post for details.
How to declare a pointer to a function?

Following are some interesting facts about function pointers.

1. Unlike normal pointers, a function pointer points to code, not data. Typically a function pointer stores the start of executable code.

2) Unlike normal pointers, we do not allocate de-allocate memory using function pointers.

3) A function’s name can also be used to get functions’ address. For example, in the below program, we have removed address operator ‘&’ in assignment. We have also changed function call by removing \*, the program still works.

#include <stdio.h>
// A normal function with an int parameter
// and void return type
void fun(int a)
{
printf("Value of a is %d\n", a);
}

int main()
{
void (\*fun_ptr)(int) = fun; // & removed

    fun_ptr(10); // * removed

    return 0;

}

4. Like normal pointers, we can have an array of function pointers. Below example in point 5 shows syntax for array of pointers.

5. Function pointer can be used in place of switch case. For example, in below program, user is asked for a choice between 0 and 2 to do different tasks.

#include <stdio.h>
void add(int a, int b)
{
printf("Addition is %d\n", a+b);
}
void subtract(int a, int b)
{
printf("Subtraction is %d\n", a-b);
}
void multiply(int a, int b)
{
printf("Multiplication is %d\n", a\*b);
}

int main()
{
// fun_ptr_arr is an array of function pointers
void (\*fun_ptr_arr[])(int, int) = {add, subtract, multiply};
unsigned int ch, a = 15, b = 10;

    printf("Enter Choice: 0 for add, 1 for subtract and 2 "
    		"for multiply\n");
    scanf("%d", &ch);

    if (ch > 2) return 0;

    (*fun_ptr_arr[ch])(a, b);

    return 0;

} 6) Like normal data pointers, a function pointer can be passed as an argument and can also be returned from a function.
For example, consider the following C program where wrapper() receives a void fun() as parameter and calls the passed function.

// A simple C program to show function pointers as parameter
#include <stdio.h>

// Two simple functions
void fun1() { printf("Fun1\n"); }
void fun2() { printf("Fun2\n"); }

// A function that receives a simple function
// as parameter and calls the function
void wrapper(void (\*fun)())
{
fun();
}

int main()
{
wrapper(fun1);
wrapper(fun2);
return 0;
}

This point in particular is very useful in C. In C, we can use function pointers to avoid code redundancy. For example a simple qsort() function can be used to sort arrays in ascending order or descending or by any other order in case of array of structures. Not only this, with function pointers and void pointers, it is possible to use qsort for any data type.
// An example for qsort and comparator
#include <stdio.h>
#include <stdlib.h>

// A sample comparator function that is used
// for sorting an integer array in ascending order.
// To sort any array for any other data type and/or
// criteria, all we need to do is write more compare
// functions. And we can use the same qsort()
int compare (const void _ a, const void _ b)
{
return ( _(int_)a - _(int_)b );
}

int main ()
{
int arr[] = {10, 5, 15, 12, 90, 80};
int n = sizeof(arr)/sizeof(arr[0]), i;

qsort (arr, n, sizeof(int), compare);

for (i=0; i<n; i++)
printf ("%d ", arr[i]);
return 0;
}
Similar to qsort(), we can write our own functions that can be used for any data type and can do different tasks without code redundancy. Below is an example search function that can be used for any data type. In fact we can use this search function to find close elements (below a threshold) by writing a customized compare function.

#include <stdio.h>
#include <stdbool.h>

// A compare function that is used for searching an integer
// array
bool compare (const void _ a, const void _ b)
{
return ( _(int_)a == _(int_)b );
}

// General purpose search() function that can be used
// for searching an element *x in an array arr[] of
// arr_size. Note that void pointers are used so that
// the function can be called by passing a pointer of
// any type. ele_size is size of an array element
int search(void *arr, int arr_size, int ele_size, void _x,
bool compare (const void _ , const void *))
{
// Since char takes one byte, we can use char pointer
// for any type/ To get pointer arithmetic correct,
// we need to multiply index with size of an array
// element ele_size
char *ptr = (char \*)arr;

    int i;
    for (i=0; i<arr_size; i++)
    	if (compare(ptr + i*ele_size, x))
    	return i;

    // If element not found
    return -1;

}

int main()
{
int arr[] = {2, 5, 7, 90, 70};
int n = sizeof(arr)/sizeof(arr[0]);
int x = 7;
printf ("Returned index is %d ", search(arr, n,
sizeof(int), &x, compare));
return 0;
}

7. Many object oriented features in C++ are implemented using function pointers in C. For example virtual functions. Class methods are another example implemented using function pointers. Refer this book for more details.
