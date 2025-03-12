# push_swap

[Leia em Português](README.pt.md)

This project aims to implement an efficient algorithm for sorting an integer stack using a limited set of operations in C.

- **Objective**: Develop a program, `push_swap`, that sorts an integer stack using the smallest possible number of predefined operations. The goal is to implement an efficient sorting algorithm while adhering to the project constraints.

- **Algorithm Used**:
  - The implemented algorithm is **Turk Sort**, which balances efficiency and a reduced number of operations to optimize sorting.
  - **Turk Sort** combines divide-and-conquer techniques, applying intelligent heuristics to minimize the number of required movements in the stack.
  - Implements efficient rotation strategies and intelligent redistribution of elements between `a` and `b`.
  
- **Implemented Features**:  

  | Operation  | Description |
  |------------|--------------------------------------------------------------------------------|
  | `sa`       | Swaps the first two elements of stack `a`                                     |
  | `sb`       | Swaps the first two elements of stack `b`                                     |
  | `ss`       | Executes `sa` and `sb` simultaneously                                        |
  | `pa`       | Moves the top element from `b` to `a`                                        |
  | `pb`       | Moves the top element from `a` to `b`                                        |
  | `ra`       | Rotates `a` (shifts all elements up by one, first element becomes last)      |
  | `rb`       | Rotates `b` (shifts all elements up by one, first element becomes last)      |
  | `rr`       | Executes `ra` and `rb` simultaneously                                       |
  | `rra`      | Reverse rotates `a` (shifts all elements down by one, last element becomes first) |
  | `rrb`      | Reverse rotates `b` (shifts all elements down by one, last element becomes first) |
  | `rrr`      | Executes `rra` and `rrb` simultaneously                                    |


- **Average Moves**:
  - On average, for 100 numbers, `push_swap` performs 550 moves.
    
    - ![Image](https://github.com/user-attachments/assets/14661d9d-c02a-4f53-8264-b6595f4f4bf1)
  
  - On average, for 500 numbers, `push_swap` performs 5050 moves.
 
    - ![Image](https://github.com/user-attachments/assets/a0012241-d929-46ca-8581-4f85573a1d52)

- **push_swap Tester**:
  - A script was created to automatically test the performance and efficiency of `push_swap`.
  - To use the tester, run:
    ```bash
    chmod +x tester.sh
    ./tester.sh <number of executions> <number of numbers>
    ```
  - The script will generate random numbers, execute `push_swap`, and verify the number of operations performed.
 
  - **Testing with 100 and 500 numbers**:
 
  <p align="center">
    <img src="https://github.com/user-attachments/assets/46986d4a-0322-4f2f-b2dd-ac8f7bbd9f07" style="height: 350px; width: auto; margin-right: 10px;" />
    <img src="https://github.com/user-attachments/assets/92f6ba78-9b1d-4f93-8425-52f5725d75ac" style="height: 350px; width: auto;" />
  </p>

  ---
  
