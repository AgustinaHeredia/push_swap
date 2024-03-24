# Push Swap

Push Swap is a sorting algorithm project in the 42 school curriculum. The goal of this project is to sort a stack of integers using a limited set of instructions, with the smallest number of moves possible.

## Introduction

In this project, you will implement two programs: `push_swap` and `checker`.

- **push_swap**: This program will receive a list of integers as arguments and must output a series of instructions to sort the list using only two stacks and a limited set of instructions.
  
- **checker**: This program will receive the same list of integers as arguments, along with a series of instructions. It will then execute these instructions on the list and output either "OK" if the list is sorted or "KO" if it is not.

## Instructions

The following instructions can be used to manipulate the stacks:

- **sa**: Swap the first two elements at the top of stack A.
- **sb**: Swap the first two elements at the top of stack B.
- **ss**: Equivalent to `sa` and `sb` simultaneously.
- **pa**: Push the first element at the top of stack A onto stack B.
- **pb**: Push the first element at the top of stack B onto stack A.
- **ra**: Rotate stack A, move the first element to the bottom.
- **rb**: Rotate stack B, move the first element to the bottom.
- **rr**: Equivalent to `ra` and `rb` simultaneously.
- **rra**: Reverse rotate stack A, move the last element to the top.
- **rrb**: Reverse rotate stack B, move the last element to the top.
- **rrr**: Equivalent to `rra` and `rrb` simultaneously.

## Usage

### push_swap

Compile the `push_swap` program:

```bash
make
```
Run the push_swap program with a list of integers as arguments:

```bash
Copy code
./push_swap 4 2 7 1
```

```bash
Copy code
ARG="4 2 7 1"; ./push_swap $ARG 
```
Example
Here's an example of sorting a stack of integers:

```bash
Copy code
$> ./push_swap 4 2 7 1
sa
rra
pb
rra
pa
```
## Contributing
Contributions are welcome! If you want to improve the project, please submit a pull request. Make sure to follow the contribution guidelines.

## License
This project is licensed under the MIT License. See the LICENSE file for more information.

## Contact
If you have any questions or suggestions, feel free to contact me via email.

Thank you for using Push Swap!
