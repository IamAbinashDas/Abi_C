
# C Programming: Conditional Statements

This folder contains practice programs covering conditional decision-making statements in C.

---

## 📌 Core Concepts

Conditional statements control the execution flow of a program based on whether a specific condition evaluates to **true** (non-zero) or **false** (`0`).

### 1. `if` Statement
Executes a code block only if the specified test condition evaluates to true.

```c
if (condition) {
    // executes when condition is true
}

```

### 2. `if-else` Statement

Provides an alternative execution path when the test condition is false.

```c
if (condition) {
    // executes when condition is true
} else {
    // executes when condition is false
}

```

### 3. `else-if` Ladder

Tests multiple conditions sequentially until one evaluates to true.

```c
if (condition1) {
    // executes if condition1 is true
} else if (condition2) {
    // executes if condition2 is true
} else {
    // executes if all conditions above are false
}

```

### 4. Nested `if`

Places an `if` or `if-else` statement inside another `if` or `else` block to handle hierarchical conditions.

```c
if (condition1) {
    if (condition2) {
        // executes only if both condition1 and condition2 are true
    }
}

```

### 5. `switch` Statement

Selects one of many code blocks to execute based on the value of a single variable or expression (must evaluate to an integer or character).

```c
switch (variable) {
    case value1:
        // code
        break;
    case value2:
        // code
        break;
    default:
        // executes if no case matches
}

```

---

## ⚙️ Compilation & Execution

To compile and run any C file using GCC:

```bash
# Compile
gcc filename.c -o output

# Run (Linux / macOS)
./output

# Run (Windows)
output.exe

```

```

```
