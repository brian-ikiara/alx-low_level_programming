# Bit Manipulation

-------------------------------------------------------------------------

## SYNOPSIS

### Definition of terms

_Operator_

> Symbol that represents a mathematical or logical operation to be performed.

_Operand_

> Data that a mathematical or logical operation will be performed on.

_Unary operator_

> Operator that accepts only one operand.

_Binary operator_

> Operator that accepts two operands.

_ASCII_

> American Standard Code for Information Interchange in full. `man ascii` for more info.

_Number systems_

> Refers to the different representations of digits in Mathematics. They are 4 main: *binary*, *octal*, *decimal*, *hexadecimal*.

### Syntax

```
	operand1 <bitwise_operator> operand2
```

### Example in code

```c
	#include <stdio.h>

	/**
	 * main - Function
	 *
	 * Description: Returns the value of bitwise operations.
	 * Return: 0.
	 * On error, stderr.
	 */

	int main(void)
	{
		/* a = 0b00000100; b = 0b00000101 */
		int a = 4, b = 5;

		a = ~a;
		/* a = 0b11111011; -(0d4) */
		printf("%d\n", a);

		a = 4;
		a = a & b;
		/* a = 0b00000100; 0d4 */
		printf("%d\n", a);

		a = 4;
		a = a | b;
		/* a = 0b00000101; 0d5 */
		printf("%d\n", a);

		a = 4;
		a = a ^ b;
		/* a = 0b00000001; 0d1 */
		printf("%d\n", a);

		a = 4;
		a = a << 2;
		/* a = 0b00010000; 0d16 */
		printf("%d\n", a);

		a = 4;
		a = a >> 2;
		/* a = 0b00000001; 0d1 */
		printf("%d\n", a);

		return (0);
	}
```

--------------------------------------------------------------------------

## DESCRIPTION

This is the concept of playing around with binary digits(bits) or data that's
smaller than a char(1 byte | 8 bits). 

> Consider A = 0d60(0b00111100) and B = 0d13(0b00001101), then:

| Bitwise Operator | Description | Example |
| -- | -- | -- |
| ~ | Bitwise NOT; flips bits from 1 to 0 and vice versa(*Gives the 1's complement(negative form) of a binary digit*) | ~A == -(0d60)(0b11000011) |
| & | Bitwise AND; copies a bit to the result if it exists in both operands(*Gives the intersection of A&B*) | A & B == 0d12(0b00001100) |
| '|' | Bitwise OR(*Inclusive OR*); copies a bit to the result if it exists in either operand(*Gives the union of A&B*) | A | B == 0d61(0b00111101) |
| ^ | Bitwise XOR(*Excludive OR*); copies a bit that exists in either and not in both(*Gives the symmetric difference of A&B*) | A ^ B == 0d49(0b00110001) |
| << | Left Shift(_Bitwise *_); adds zeros to the right of the binary digit(*Equivalent to multiplication by 2^right_operand*) | A << 2 == 0d240(0b11110000) |
| >> | Right Shift(_Bitwise /_); adds zeros to the left of the binary digit(*Equivalent to division by 2^right_operand*) | A >> 2 == 0d15(0b00001111) |

--------------------------------------------------------------------------

## REMARKS

For more info on conversions between number systems, visit [CUEMATH](https://www.cuemath.com/numbers/number-systems) and [Wikipedia](https://en.wikipedia.org/wiki/Bitwise_operations_in_C) :joy:
