# Recursion

## General Idea

```c
	#include <stdio.h>
	
	/**
	 * rec_func - Function
	 * @par: Integer
	 *
	 * Description: Recursively decrements par until
	 * condition is met.
	 * Return: par, the integer.
	 * On error, stderr.
	 */
	
	int rec_func(int par)
	{
		if (par < 0)
			return (0);
		printf("Recursion!!! %d\n", par);
		par--;

		return (par);
	}
	
	/**
	 * main - Function
	 *
	 * Description: The program that calls rec_func().
	 * Return: 0.
	 * On error, stderr.
	 */

	int main(void)
	{
		int num = 69;

		rec_func(num);

		return (0);
	}
```

## Definition of Terms

_Iterative Programming_

> Repetition of a block of statements within a program using a loop.

_Recursion_

> Method where the solution to a problem depends on the cumulative solution to smaller instances of the same problem.

## Sidebar

This is going to be fun! :grinning:
