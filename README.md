# 📚 Sorting Algorithms & Big O Notation

## 🌟 Project Overview
This project is a practical introduction to sorting algorithms, a cornerstone of computer science. Through implementing several common sorting methods, you will:

- Build these algorithms in C
- Learn to evaluate their efficiency using Big O notation
- Gain solid foundations for effective data organization

## 🎯 Learning Objectives
By completing this project, you will be able to:

### Core Concepts
- Explain at least four different sorting algorithms
- Understand Big O notation and evaluate time complexity
- Select the optimal sorting algorithm for given input
- Define what makes a sorting algorithm stable

## 🛠️ Requirements & Guidelines

### General
- **Allowed editors**: `vi`, `vim`, `emacs`
- **Compilation**: Ubuntu 20.04 LTS using `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- **File format**: Must end with newline
- **README.md**: Mandatory at project root
- **Coding style**: Strict Betty style compliance
- **Restrictions**:
  - No global variables
  - Maximum 5 functions per file
  - Standard library prohibited (unless specified)

### GitHub
- Single repository per team
- Header file: `sort.h` with prototypes and include guards

## 🚀 Implementation Tasks

         0. Bubble Sort
         1. Insertion Sort
         2. Selection Sort
         3. Quick Sort

## 📋 Data Structures & Helper Functions

### List Structure
```c
/**
 * struct listint_s - Doubly linked list node
 * @n: Integer stored in the node
 * @prev: Pointer to previous element
 * @next: Pointer to next element
 */
typedef struct listint_s {
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
