_Singly Linked Lists_

----------------------------------------------------------------

*SYNOPSIS*

_Category_: Linear Data Structure
_Sub-category_: Dynamic Data Structure

----------------------------------------------------------------

*DESCRIPTION*

A linked list is kind of an improvement to a typical array in that
it's boundless and isn't susceptible to memory leaks.

Generally made up of _nodes_, where each node is made up of a data
field and a reference(pointer) to the next node in the linked list.

_Node Syntax_

```c
	typedef struct Node *node_ptr;

	typedef struct Node
	{
		size_t data;
		/** 
		 * We can declare this also as
		 * struct Node *next;
		 *
		 * I prefer this though.
		 */
		node_ptr next;
	} node;
```

---------------------------------------------------------------

*REMARKS*

Looking foward to this.
