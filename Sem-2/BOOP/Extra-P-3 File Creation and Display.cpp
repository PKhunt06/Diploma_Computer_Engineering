// Extra-P-3 Develop a C++ program that creates a new file, write “Computer Engineering” message in that file and display contents of that file on the screen.

#include <iostream>
using namespace std;

int main() 
{
    FILE *fptr;
    char fileName[] = "output.txt";
    char content[] = "Tapi Diploma Engineering College, SURAT.\nComputer Department.\n";

    // Open file for writing
    fptr = fopen(fileName, "w");
    if (fptr == NULL) 
    {
        cout << "Error opening file " << fileName << endl;
        return 1;
    }

    // Write content to the file using fputs
    if (fputs(content, fptr) == EOF) 
    {
        cout << "Error writing to file " << fileName << endl;
        fclose(fptr);
        return 1;
    }

    // Close the file
    fclose(fptr);

    // Open the file for reading
    fptr = fopen(fileName, "r");
    if (fptr == NULL) 
    {
        cout << "Error opening file " << fileName << " for reading" << std::endl;
        return 1;
    }

    // Read and display content from the file using fgets
    char buffer[100];  // Assuming a maximum line length of 100 characters
    cout << "Contents of file " << fileName << ":" << endl;
    while (fgets(buffer, sizeof(buffer), fptr) != NULL) 
    {
        cout << buffer;
    }

    // Close the file
    fclose(fptr);

    return 0;
}
