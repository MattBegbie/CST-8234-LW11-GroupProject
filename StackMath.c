#include "war.c"
extern void push(double);
extern double pull();

void addition()
{ // get last two values from stack
	double x = pop();
	double y = pop();

	// add two values together
	double z = x + y;
	// put answer on stack
	push(z);
}

void division()
{ // get last two values from stack
	double x = pop();
	double y = pop();

	// divide numbers
	double z = x / y;
	// push answer to stack
	push(z);
}

void multiplication()
{ // get last two numbers
	double x = pop();
	double y = pop();

	// multiply numbers together
	double z = x * y;
	// push to stack
	push(z);
}

void negation()
{	//pop last value
	double x = pop();
	//push negative version of x
	push(-x);
}

void copy()
{	// pop last value to x
	double x = pop();

	//push x to stack twice
	push(x);
	push(x);
}

void load(double i)
{	// insert i to stack
	push(i);
}