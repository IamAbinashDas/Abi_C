
# Conditions in C

This repository demonstrates the use of **conditional statements** in the C programming language.  
Conditional statements allow programs to make decisions based on logical expressions.

---

## 🔹 Types of Conditions

### 1. `if` Statement
Executes a block of code if the condition evaluates to true.

```c
int number = 10;
if (number > 5) {
    printf("Number is greater than 5\n");
}
```

---

### 2. `if-else` Statement
Provides an alternative block of code if the condition is false.

```c
int number = 3;
if (number > 5) {
    printf("Number is greater than 5\n");
} else {
    printf("Number is less than or equal to 5\n");
}
```

---

### 3. `else if` Ladder
Checks multiple conditions sequentially.

```c
int number = 0;
if (number > 0) {
    printf("Positive\n");
} else if (number < 0) {
    printf("Negative\n");
} else {
    printf("Zero\n");
}
```

---

### 4. `switch` Statement
Used when multiple possible values of a variable need to be checked.

```c
int day = 3;
switch (day) {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    default:
        printf("Invalid day\n");
        break;
}
```

---

## 🔹 Key Points
- Conditions evaluate **Boolean expressions** (`true` or `false` in logic, represented as non-zero/zero in C).
- Use relational operators: `==`, `!=`, `<`, `>`, `<=`, `>=`.
- Logical operators: `&&` (AND), `||` (OR), `!` (NOT).
- `switch` is best for discrete values, while `if-else` handles ranges and complex logic.

---

## 🚀 Usage
Clone the repository and run the examples to understand how conditional statements work in C.

```bash
git clone https://github.com/your-username/Abi_C.git
cd Abi_C/Condition.c
gcc filename.c -o output
./output
```

---

## 📌 Author
Created by **Abinash Das**  
For learning and practicing **C programming basics**.
```
