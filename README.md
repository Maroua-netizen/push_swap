# Push Swap

The goal of the Push Swap project is to sort a list of integers using two stacks and a limited set of operations. The challenge is to achieve the sorting with the minimum number of moves. 

## Visualization

https://github.com/user-attachments/assets/769b9818-bc30-455f-8612-7142afafe1cc

## Features

- Sort 100 numbers in less than 700 moves
- Sort 500 numbers in less than 5500 moves

## Instructions

1. Clone the repository:
   ```sh
   git clone https://github.com/Maroua-netizen/push_swap.git
   cd push_swap

2. Compile the program:
    ```sh
    make
    ```

3. Run the program:
    ```sh
    ./push_swap <list_of_integers>
    ```

## Usage Example
   ```sh
  ./push_swap 3 2 5 1 4
   ```

## Operations

The following operations are used to sort the numbers:

    sa : swap the first two elements at the top of stack a
    sb : swap the first two elements at the top of stack b
    pa : push the top element of stack b onto stack a
    pb : push the top element of stack a onto stack b
    ra : rotate stack a (shift all elements up by one, the first element becomes the last one)
    rb : rotate stack b
    rra : reverse rotate stack a (shift all elements down by one, the last element becomes the first one)
    rrb : reverse rotate stack b

## License

This project is licensed under the MIT License - see the LICENSE.md file for details.
