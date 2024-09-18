#include <stdio.h>
#include <string.h>

// Define a structure to store employee details
struct Employee {
    char name[50];
    int id;
};

int main() {
    // Create two employee structures
    struct Employee emp1, emp2;
    
    // Populate the employee data
    strcpy(emp1.name, "John");
    emp1.id = 1001;

    strcpy(emp2.name, "Alice");
    emp2.id = 1002;

    // Create an array of pointers to the structure
    struct Employee *arr[2];

    // Assign the addresses of the employee structures to the array
    arr[0] = &emp1;
    arr[1] = &emp2;

    // Create a pointer to the array of pointers
    struct Employee **ptr = arr;

    // Access and print the employee information using the pointer to the array
    for (int i = 0; i < 2; i++) {
        printf("Employee Name: %s\n", ptr[i]->name);
        printf("Employee ID: %d\n", ptr[i]->id);
    }

    return 0;
}
