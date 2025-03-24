# push_swap

<i>
    "The Push swap project is a very simple and a highly straightforward algorithm project: data must be sorted.
    <br>You have at your disposal a set of integer values, 2 stacks, and a set of instructions
    to manipulate both stacks.
    <br>The goal is write a program in C called push_swap which calculates and displays
    on the standard output the smallest program, made of Push swap language instructions,
    that sorts the integers received as arguments.
</i>

#### <i> ---- [subject](en.subject.pdf) ----</i>

## Project Structure
	
```js
├── push_swap
│   ├── Makefile
│   ├── include
│   │   └── push_swap.h
│   ├── lib
│   │   └── libft
│   └── src
│       ├── push_swap.c
│       ├── perform_actions.c
│       ├── algorithm_short.c
│       ├── algorithm_long.c
│       ├── find_best_path.c
│       ├── checker.c  
│       └── lst
│           ├── t_stack_add_back.c
│           ├── t_stack_check_dup.c
│           ├── t_stack_del_last.c
│           ├── t_stack_free.c
│           ├── t_stack_from_arr.c
│           ├── t_stack_head.c
│           ├── t_stack_index_data.c
│           ├── t_stack_is_sorted.c
│           ├── t_stack_last.c
│           ├── t_stack_max.c
│           ├── t_stack_min.c
│           ├── t_stack_new.c
│           ├── t_stack_n_is_inside.c
│           ├── t_stack_second_min.c
│           ├── t_stack_set_to_head.c
│           ├── t_stack_size.c
│           └── t_stack_to_arr.c
├── en.subject.pdf
├── README.md
└── LICENSE
```

## Allowed operations

The goal is to sort in ascending order numbers into stack a. To do so, only the following operations are allowed:

- sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.
- sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.
- ss : sa and sb at the same time.
- pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
- pb (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
- ra (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one.
- rb (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one.
- rr : ra and rb at the same time.
- rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.
- rrb (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.
- rrr : rra and rrb at the same time.


## Sorting Algorithms

### Algorithm for numbers >= 2 && <= 5

The algorithm works as follows:
- If the number of elements is greater than 3, the smallest excess 
    elements are transferred to stack 'b' in the least number of actions and
    sorted in descending order;
- When there are 3 or less elements in stack 'a', the goal of the 
    algorithm is to locate the largest element and move it with a single 
    action to the last node;
- If the element at the first node is greater than the second element they 
    are swapped;
- Finally (if there are elements in stack 'b') the two stacks are merged.

### Algorithm for numbers > 5

The algorithm is divided into three steps:
- In the first phase all the elements that are not part of the longest 
    incremental subsequence are transferred to stack 'b';
- As long as stack 'b' is not empty, each time the element that "costs" 
    less in terms of actions is identified and transferred;
- Finally, if the smallest element is not on the first node, the list is
    rotated.