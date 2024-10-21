#include <stdio.h>

// Define a structure called "Person"
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare a variable of type "struct Person"
    struct Person person1;

    // Assign values to the members of "person1"
    strcpy(person1.name, "Alice");  // Copy string into the name field
    person1.age = 25;
    person1.height = 5.6;

    // Print the values
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.1f\n", person1.height);

    return 0;
}
