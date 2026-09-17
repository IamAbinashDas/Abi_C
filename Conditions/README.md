
# Conditional Statements in C

Conditional statements control the flow of execution based on specific conditions. In C, any non-zero value evaluates to **true**, while zero evaluates to **false**.

---

## 1. `if` Statement
Executes a block of code only if the specified condition evaluates to true.

```c
#include <stdio.h>

int main() {
    int age = 20;

    if (age >= 18) {
        printf("Eligible to vote.\n");
    }

    return 0;
}

```

---

## 2. `if...else` Statement

Executes one block if the condition is true, and another block if it is false.

```c
#include <stdio.h>

int main() {
    int num = 7;

    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}

```

---

## 3. `if...else if...else` Ladder

Tests multiple conditions sequentially until one evaluates to true.

```c
#include <stdio.h>

int main() {
    int marks = 82;

    if (marks >= 90) {
        printf("Grade: A\n");
    } else if (marks >= 75) {
        printf("Grade: B\n");
    } else if (marks >= 50) {
        printf("Grade: C\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}

```

---

## 4. Nested `if` Statements

An `if` or `else` block placed inside another `if` or `else` block.

```c
#include <stdio.h>

int main() {
    int age = 19;
    int hasVoterID = 1;

    if (age >= 18) {
        if (hasVoterID) {
            printf("You can vote.\n");
        } else {
            printf("Please register for a voter ID.\n");
        }
    } else {
        printf("Underage.\n");
    }

    return 0;
}

```

---

## 5. `switch` Statement

Selects one of many code blocks to execute based on the evaluation of an integral or character expression.

```c
#include <stdio.h>

int main() {
    char operator = '+';
    int a = 10, b = 5;

    switch (operator) {
        case '+':
            printf("Result: %d\n", a + b);
            break;
        case '-':
            printf("Result: %d\n", a - b);
            break;
        case '*':
            printf("Result: %d\n", a * b);
            break;
        case '/':
            if (b != 0) printf("Result: %d\n", a / b);
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}

```

> **Note:** Always include `break;` to prevent execution from falling through to the subsequent cases, unless fall-through behavior is intentional.

---

## 6. Ternary Operator (`?:`)

A shorthand inline expression for simple `if-else` branching.

```c
condition ? expression_if_true : expression_if_false;

```

```c
#include <stdio.h>

int main() {
    int a = 15, b = 25;
    int max = (a > b) ? a : b;

    printf("Maximum: %d\n", max);
    return 0;
}

```

---

## Relational & Logical Operators Reference

| Operator | Description | Operator | Description |
| --- | --- | --- | --- |
| `==` | Equal to | `&&` | Logical AND |
| `!=` | Not equal to | `||` | Logical OR |
| `>`, `<` | Greater / Less than | `!` | Logical NOT |
| `>=`, `<=` | Greater / Less than or equal |  |  |

```

```
