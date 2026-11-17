# Git Practice Assignment - BT25CSE170

## Student Information
- **Name:** Adarsh
- **Roll Number:** BT25CSE170
- **Section:** CSE-C1
- **GitHub Username:** [Adarsh-510](https://github.com/Adarsh-510)
- **Repository URL:** [https://github.com/Adarsh-510/git-practice-BT25CSE170](https://github.com/Adarsh-510/git-practice-BT25CSE170)

---

## Assignment Overview
This repository contains solutions for the Git Practice Assignment. The primary objective is to demonstrate practical knowledge of Git version control, branching strategies, commit hygiene, pull requests, issue tracking, and merge conflict resolution, along with clean implementations of foundational C++ programs.

---

## Directory Structure
```text
git-practice-BT25CSE170/
├── .gitignore
├── README.md
├── git-commands.md
├── exercise-01/
│   ├── main.cpp
│   ├── input.txt
│   └── output.txt
├── exercise-02/
│   ├── main.cpp
│   ├── input.txt
│   └── output.txt
└── exercise-03/
    ├── main.cpp
    ├── input.txt
    └── output.txt
```

---

## Completed Exercises

### Exercise 01: Arithmetic Operations Calculator
- **Directory:** `exercise-01/`
- **Source File:** `exercise-01/main.cpp`
- **Description:** Performs basic arithmetic operations (addition `+`, subtraction `-`, multiplication `*`, and division `/`) on two numeric inputs.
- **Key Features & Validation:**
  - Robust handling of unsupported operators.
  - Zero-division detection preventing runtime division-by-zero crashes.
  - Formatted precision output (`std::fixed`, `std::setprecision(2)`).

### Exercise 02: Factorial Calculation
- **Directory:** `exercise-02/`
- **Source File:** `exercise-02/main.cpp`
- **Description:** Computes the factorial ($n!$) of a given integer.
- **Key Features & Validation:**
  - Utilizes 64-bit `unsigned long long` to compute factorials accurately.
  - Validates non-negative integer domain ($n \ge 0$).
  - Prevents integer overflow by checking the upper limit ($n \le 20$).

### Exercise 03: Fibonacci Sequence Generator
- **Directory:** `exercise-03/`
- **Source File:** `exercise-03/main.cpp`
- **Description:** Generates the first $n$ terms of the Fibonacci sequence starting from $0, 1$.
- **Key Features & Validation:**
  - Validates positive term count ($n > 0$).
  - Enforces safe upper boundary ($n \le 90$) to prevent 64-bit integer overflow.
  - Efficient $O(n)$ iterative calculation with clean comma-separated output.

---

## Compilation and Execution Guide

### Prerequisites
- A standard C++ compiler supporting C++11 or higher (such as `g++`, `clang++`, or MSVC).

### 1. Exercise 01: Arithmetic Calculator
Compile using GCC/Clang with optimizations and extra warnings:
```bash
g++ -O2 -std=c++11 -Wall -Wextra exercise-01/main.cpp -o exercise-01/main
```
Run interactively:
```bash
./exercise-01/main
```
Or execute with automated input redirection:
```bash
./exercise-01/main < exercise-01/input.txt
```

### 2. Exercise 02: Factorial Calculator
Compile:
```bash
g++ -std=c++11 -Wall exercise-02/main.cpp -o exercise-02/main
```
Run interactively:
```bash
./exercise-02/main
```
Or run with sample input:
```bash
./exercise-02/main < exercise-02/input.txt
```

### 3. Exercise 03: Fibonacci Generator
Compile:
```bash
g++ -std=c++11 -Wall exercise-03/main.cpp -o exercise-03/main
```
Run interactively:
```bash
./exercise-03/main
```
Or run with sample input:
```bash
./exercise-03/main < exercise-03/input.txt
```

---

## Evidence of GitHub Activities

### Issues Log
| Issue # | Title | Description | Link |
| :---: | :--- | :--- | :--- |
| **#1** | Implement Basic Arithmetic Calculator | Implement addition, subtraction, multiplication, and division with zero-division validation. | [#1](https://github.com/Adarsh-510/git-practice-BT25CSE170/issues/1) |
| **#2** | Implement Factorial Calculator | Implement factorial calculation supporting integers up to 20 with overflow prevention. | [#2](https://github.com/Adarsh-510/git-practice-BT25CSE170/issues/2) |
| **#3** | Implement Fibonacci Sequence Generator | Generate first N Fibonacci numbers with positive input and upper bound validation. | [#3](https://github.com/Adarsh-510/git-practice-BT25CSE170/issues/3) |
| **#4** | Git Practice Documentation & Merge Conflict | Create comprehensive git commands reference and document merge conflict resolution. | [#4](https://github.com/Adarsh-510/git-practice-BT25CSE170/issues/4) |

### Pull Requests Log
| PR # | Branch | Target | Description | Link |
| :---: | :--- | :---: | :--- | :--- |
| **#1** | `feature/arithmetic-operations` | `main` | Add addition, subtraction, multiplication, division, and tests. | [#1](https://github.com/Adarsh-510/git-practice-BT25CSE170/pull/1) |
| **#2** | `feature/factorial` | `main` | Implement factorial logic, negative number validation, and sample I/O. | [#2](https://github.com/Adarsh-510/git-practice-BT25CSE170/pull/2) |
| **#3** | `feature/fibonacci` | `main` | Add Fibonacci sequence generator, limit checks, and verification files. | [#3](https://github.com/Adarsh-510/git-practice-BT25CSE170/pull/3) |
| **#4** | `feature/docs-git-record` | `main` | Add documentation, execution instructions, and merge conflict record. | [#4](https://github.com/Adarsh-510/git-practice-BT25CSE170/pull/4) |

---

## Sample Program Outputs

### Exercise 01 (Arithmetic Calculator)
- **Input (`exercise-01/input.txt`):**
  ```text
  25.5
  *
  4.0
  ```
- **Output (`exercise-01/output.txt`):**
  ```text
  ========================================
          ARITHMETIC CALCULATOR           
  ========================================
  Enter first number: Enter operator (+, -, *, /): Enter second number: Result: 25.50 * 4.00 = 102.00
  ```

### Exercise 02 (Factorial Calculator)
- **Input (`exercise-02/input.txt`):**
  ```text
  6
  ```
- **Output (`exercise-02/output.txt`):**
  ```text
  ========================================
           FACTORIAL CALCULATOR           
  ========================================
  Enter a non-negative integer (0 - 20): Result: 6! = 720
  ```

### Exercise 03 (Fibonacci Generator)
- **Input (`exercise-03/input.txt`):**
  ```text
  10
  ```
- **Output (`exercise-03/output.txt`):**
  ```text
  ========================================
        FIBONACCI SEQUENCE GENERATOR      
  ========================================
  Enter number of terms (1 - 90): Fibonacci Sequence (10 terms):
  0, 1, 1, 2, 3, 5, 8, 13, 21, 34
  ```
