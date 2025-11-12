#include <stdio.h>  // Required for file I/O functions (fopen, fclose, fprintf, fscanf, printf)
#include <stdlib.h> // Required for exit() for error handling

int main() {
    FILE *file_pointer; // Declare a file pointer
    char filename[] = "example.txt"; // Name of the file to create/access

    // --- PART 1: WRITING DATA TO THE FILE ---

    // Open the file in "write" mode ("w")
    // If the file doesn't exist, it will be created.
    // If the file exists, its content will be truncated (erased) before writing.
    file_pointer = fopen(filename, "w");

    // Check if the file was opened successfully
    if (file_pointer == NULL) {
        printf("Error: Could not open file '%s' for writing.\n", filename);
        return 1; // Indicate an error
    }

    printf("Writing data to '%s'...\n", filename);

    // Write a string and an integer to the file
    // fprintf works just like printf, but writes to the specified file stream
    fprintf(file_pointer, "Hello, File!\n"); // Write a string followed by a newline
    fprintf(file_pointer, "The answer is %d.\n", 42); // Write a formatted string with an integer

    // Close the file after writing
    // It's crucial to close files to save changes and release resources
    fclose(file_pointer);
    printf("Data successfully written to '%s'.\n\n", filename);

    // --- PART 2: READING DATA FROM THE FILE ---

    // Open the file in "read" mode ("r")
    file_pointer = fopen(filename, "r");

    // Check if the file was opened successfully for reading
    if (file_pointer == NULL) {
        printf("Error: Could not open file '%s' for reading.\n", filename);
        return 1; // Indicate an error
    }

    printf("Reading data from '%s'...\n", filename);

    char read_string[100]; // Buffer to store the read string
    int read_integer;      // Variable to store the read integer

    // Read the first line (string) from the file
    // fgets is generally safer for reading lines as it prevents buffer overflows
    // It reads up to (sizeof(read_string) - 1) characters or until a newline is encountered.
    // It includes the newline if read.
    if (fgets(read_string, sizeof(read_string), file_pointer) != NULL) {
        printf("Read line 1: %s", read_string); // %s already includes the newline from fgets
    } else {
        printf("Error reading first line.\n");
    }

    // Read the second line (formatted integer) from the file
    // fscanf reads formatted input from the file stream
    // It's good practice to check its return value (number of items successfully read)
    if (fscanf(file_pointer, "The answer is %d.", &read_integer) == 1) {
        printf("Read line 2: The answer is %d.\n", read_integer);
    } else {
        printf("Error reading second line or integer not found.\n");
    }


    // Close the file after reading
    fclose(file_pointer);
    printf("\nData successfully read from '%s'.\n", filename);

    return 0; // Indicate successful program execution
}
