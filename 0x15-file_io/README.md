
README

C File I/O

This is a simple example of how to perform file I/O in C. The program opens a file called foo.txt for reading and writing. If the file does not exist, it is created.

The program then writes the string "Hello, world!" to the file and closes the file.

To compile and run the program, you can use the following commands:

gcc file_io.c -o file_io
./file_io
If the program runs successfully, it will create a file called foo.txt in the current directory. The file will contain the string "Hello, world!".

File I/O Functions
The following are some of the most common file I/O functions in C:

fopen(): Opens a file for reading, writing, or both.
fclose(): Closes a file.
fread(): Reads data from a file.
fwrite(): Writes data to a file.
fgets(): Reads a line of text from a file.
fputs(): Writes a line of text to a file.
Example
The following is a simple example of how to use the fopen(), fread(), and fclose() functions to read a file:

C
#include <stdio.h>

int main() {
  // Open the file for reading.
  FILE *fp = fopen("foo.txt", "r");
  if (fp == NULL) {
    printf("Error opening file.\n");
    return 1;
  }

  // Read the contents of the file into a buffer.
  char buffer[1024];
  size_t bytes_read = fread(buffer, 1, sizeof(buffer), fp);

  // Close the file.
  fclose(fp);

  // Print the contents of the buffer.
  printf("%s\n", buffer);

  return 0;
}
Use code with caution. Learn more
Conclusion
File I/O is an essential part of programming in C. By learning how to use the file I/O functions, you can be able to read and write data from files, which can be used for a variety of purposes, such as storing data, logging events, and creating reports
