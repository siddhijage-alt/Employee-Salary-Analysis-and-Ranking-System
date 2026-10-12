# Employee Management and Sorting Analysis

## About the Project

This is an **Analysis and Design of Algorithms (AOA) mini project** developed using the C programming language. It manages employee records and demonstrates sorting and searching operations on employee data.

The project also compares the performance of **Insertion Sort and Selection Sort** using execution time.

## Features

- **Add Employee:** Enter employee details such as name, ID, salary, phone number, and department.
- **Display Employees:** Display all stored employee records.
- **Sort Employees:** Sort employee records by salary in ascending or descending order.
- **Search Employee:** Search for an employee using their ID.
- **Compare Sorting Algorithms:** Compare Insertion Sort and Selection Sort based on execution time and time complexity.
- **Exit:** Close the program.

## Algorithms Used

### 1. Insertion Sort

Insertion Sort arranges employee records according to salary by inserting each record into its correct position.

- **Ascending Order:** Lowest to highest salary.
- **Descending Order:** Highest to lowest salary.
- **Best-Case Time Complexity:** O(n)
- **Average-Case Time Complexity:** O(n²)
- **Worst-Case Time Complexity:** O(n²)

### 2. Selection Sort

Selection Sort repeatedly selects the employee with the highest salary from the unsorted portion and places that record in its correct position.

- **Sorting Order:** Highest to lowest salary.
- **Best-Case Time Complexity:** O(n²)
- **Average-Case Time Complexity:** O(n²)
- **Worst-Case Time Complexity:** O(n²)

## Technologies Used

- **Programming Language:** C
- **Libraries:** `stdio.h`, `stdlib.h`, `string.h`, `time.h`
- **Concepts:** Structures, arrays, functions, searching, sorting, and execution-time measurement.

## How to Run

1. Clone or download this repository.
2. Open the project folder in your C compiler or IDE.
3. Compile the source file using GCC:

   ```bash
   gcc employee_sort_compare.c -o employee_sort_compare
   ```

4. Run the program.

   **On Windows:**

   ```bash
   employee_sort_compare.exe
   ```

   **On Linux or macOS:**

   ```bash
   ./employee_sort_compare
   ```

## Menu Options

| Option | Operation |
|:---:|---|
| 1 | Add Employee |
| 2 | Display Employees |
| 3 | Sort Employees |
| 4 | Search Employee by ID |
| 5 | Compare Sorting Algorithms |
| 6 | Exit |

## Performance Analysis

The comparison option creates copies of the employee records, runs Insertion Sort and Selection Sort on separate copies, and measures their execution time using the `clock()` function.

Both algorithms have O(n²) average-case and worst-case time complexity. Insertion Sort has an O(n) best case when the records are already sorted in the required order, whereas Selection Sort remains O(n²).

Measured execution times can vary depending on the input size and system performance.

## Learning Outcomes

- Understanding structures and arrays in C.
- Implementing sorting algorithms on structured records.
- Performing linear search using employee IDs.
- Measuring algorithm execution time.
- Comparing theoretical time complexity with practical performance.

This project was developed for academic and educational purposes.
