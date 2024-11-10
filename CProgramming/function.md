# Function with argument, without return value:

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

# Function with argument, with return value:

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

# Function without argument, without return value:

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

# Function without argument, with return value:

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
