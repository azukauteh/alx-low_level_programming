#0x0E. C - Structures, typedef


This README provides an overview of structures and the `typedef` keyword in C programming. Structures allow you to create custom data types that can hold multiple variables of different types. The `typedef` keyword is used to create aliases for existing data types or define new types.

## Structures

In C programming, a structure is a user-defined data type that can hold variables of different types. It allows you to group related data together under a single name. Each variable inside a structure is called a member or field.

The syntax for declaring a structure is as follows:

```c
struct structure_name {
    type member1;
    type member2;
    // ...
};
```

Here, `structure_name` is the name of the structure, and `member1`, `member2`, etc., are the members of the structure, each with its own data type.

Example:

```c
#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct Person person1;

    // Accessing structure members
    strcpy(person1.name, "John Doe");
    person1.age = 25;
    person1.height = 1.75;

    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    return (0);
}
```

In this example, a structure `Person` is defined with three members: `name`, `age`, and `height`. Inside the `main` function, a variable `person1` of type `struct Person` is declared, and its members are accessed using the dot (`.`) operator.

## Typedef

The `typedef` keyword is used to create aliases for existing data types or define new types. It allows you to create a new name (alias) for a data type, making the code more readable and easier to maintain.

The syntax for `typedef` is as follows:

```c
typedef existing_type new_type;
```

Here, `existing_type` is the existing data type, and `new_type` is the alias name for that type.

Example:

```c
#include <stdio.h>

typedef int myInt;

int main() {
    myInt num = 10;

    printf("Number: %d\n", num);

    return (0);
}
```

In this example, `typedef` is used to create an alias `myInt` for the existing data type `int`. The code then uses `myInt` as a data type, and `num` is declared as a variable of type `myInt`.

Typedef is often used with structures to create shorter and more readable names.

Example:

```c
#include <stdio.h>

typedef struct {
    char name[50];
    int age;
    float height;
} Person;

int main() {
    Person person1;

    // Accessing structure members
    strcpy(person1.name, "John Doe");
    person1.age = 25;
    person1.height = 1.75;

    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    return (0);
}
```

In this example, the `typedef` keyword is used to define a new type `Person` that is an alias for the structure `struct Person`. The code then declares a variable `person1` of type `Person`, making the code more concise.

## Conclusion

Structures allow you to create custom data types that can hold multiple variables of different types. They are useful for
