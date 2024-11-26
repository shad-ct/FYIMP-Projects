# 1. Function with argument, without return value:

      #include <stdio.h>
      
      // Function declaration
      void printMessage(char *message);
      
      int main() {
          char msg[] = "Hello, World!";
          printMessage(msg); // Function call
          return 0;
      }
      
      // Function definition
      void printMessage(char *message) {
          printf("%s\n", message);
      } 

# 2. Function with argument, with return value:

``` #include <stdio.h>

// Function declaration
int add(int a, int b);

int main() {
    int result = add(5, 3); // Function call
    printf("Sum: %d\n", result);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
```

# 3. Function without argument, without return value:

``` 
#include <stdio.h>

// Function declaration
void greet();

int main() {
    greet(); // Function call
    return 0;
}

// Function definition
void greet() {
    printf("Hello, World!\n");
}
```

# 4. Function without argument, with return value:

``` 
#include <stdio.h>

// Function declaration
int getNumber();

int main() {
    int number = getNumber(); // Function call
    printf("Number: %d\n", number);
    return 0;
}

// Function definition
int getNumber() {
    return 42;
}

```


# 5. Call by Value : 

```
#include <stdio.h>

// Function declaration
void addTen(int x);

int main() {
    int a = 5;
    printf("Before function call: a = %d\n", a);
    addTen(a); // Function call by value
    printf("After function call: a = %d\n", a);

    return 0;
}

// Function definition
void addTen(int x) {
    x = x + 10;
    printf("Inside function: x = %d\n", x);
}
```

# 6. Call by Reference : 

```
#include <stdio.h>

// Function declaration
void addTen(int *x);

int main() {
    int a = 5;
    printf("Before function call: a = %d\n", a);
    addTen(&a); // Function call by reference
    printf("After function call: a = %d\n", a);

    return 0;
}

// Function definition
void addTen(int *x) {
    *x = *x + 10;
    printf("Inside function: x = %d\n", *x);
}
```
