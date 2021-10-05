
/*
c_write.c
Hussein Esmail
Created: 2021 10 04
Updated: 2021 10 04
Terminal command to compile file to an executable:
    gcc -o c_write c_write.c && chmod +x c_write && ./c_write
Description: This is a code snippet on how to read and write to and from files.
*/

#include <stdio.h>

int main(void) {

    char fileName[] = "test.txt";
    char fileWrite[] = "This is what is in the text file\n";

    // WRITING 
    FILE* fpointer = fopen(fileName, "w");  // File pointer with fopen (file name, file mode (r/w/a))
    // Writing and appending is used the same way.
    // fprintf(file pointer, String to write);
    // This does not put the endline character, you have to add that like in C
    fprintf(fpointer, fileWrite);
    fclose(fpointer); // This must always be here after you're done with a file

    // READING 
    int line_size = 255;
    char line[line_size]; // String will be stored here
    FILE* fpointer1 = fopen(fileName, "r");  // File pointer with fopen (file name, file mode (r/w/a))
    fgets(line, line_size, fpointer1); // fgets(where to store info, max size to read. Should be same as the char[] size, file pointer);
    // This only gets 1 line, but the first line_size characters. To get the next line, you have to run fgets() again. This can be looped.
    printf("%s", line);
    fclose(fpointer1); // This must always be here after you're done with a file


    return 0;
}
