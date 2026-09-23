
# Loops in C

Loops repeat a block of code until a specified condition is met. C provides three primary loop constructs: `for`, `while`, and `do...while`.

---

## 1. `for` Loop
Best used when the number of iterations is known beforehand.

### Syntax
```c
for (initialization; condition; update) {
    // code to execute
}

```

### Example

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("Iteration: %d\n", i);
    }
    return 0;
}

```

---

## 2. `while` Loop

An entry-controlled loop that evaluates the condition **before** executing the code block. Best used when the iteration count depends on runtime conditions.

### Syntax

```c
while (condition) {
    // code to execute
    // update statement
}

```

### Example

```c
#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 5) {
        printf("Count: %d\n", i);
        i++;
    }
    return 0;
}

```

---

## 3. `do...while` Loop

An exit-controlled loop that evaluates the condition **after** executing the block. The code always runs at least once.

### Syntax

```c
do {
    // code to execute
    // update statement
} while (condition);

```

### Example

```c
#include <stdio.h>

int main() {
    int num = 1;

    do {
        printf("Value: %d\n", num);
        num++;
    } while (num <= 5);

    return 0;
}

```

---

## 4. Loop Control Statements

* **`break`**: Immediately terminates the innermost loop and transfers control outside.
* **`continue`**: Skips the remaining statements in the current iteration and advances to the next cycle.

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 3) continue; // skips printing 3
        if (i == 7) break;    // terminates loop when i hits 7

        printf("%d ", i);
    }
    // Output: 1 2 4 5 6
    return 0;
}

```

---

## 5. Nested Loops

A loop placed inside another loop. Frequently used for multidimensional arrays and matrix manipulation.

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("(%d, %d) ", i, j);
        }
        printf("\n");
    }
    return 0;
}

```

---

## Loop Comparison

| Feature | `for` | `while` | `do...while` |
| --- | --- | --- | --- |
| **Control Type** | Entry-controlled | Entry-controlled | Exit-controlled |
| **Minimum Runs** | 0 | 0 | 1 |
| **Condition Check** | Before execution | Before execution | After execution |
| **Ideal Scenario** | Fixed count / index-based | Indefinite condition | Guaranteed single run (e.g., menus) |

```

```
