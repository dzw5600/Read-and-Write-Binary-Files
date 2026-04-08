// Name: David Wallington
// Partners Name: Utkarsh Singh
// CmpSc472, Spring 2026
// This program will write student data into a binary file to later be read in

// David is working on writing
// Utkarsh is working on reading

// References: https://www.geeksforgeeks.org/c/how-to-write-struct-to-a-binary-file-in-c/
//
// (Reference in lab instructions would not work)

#include <stdio.h>
#include <stdbool.h>
#include "WallingtonSingh_BinaryIO.h"

void writeStudent(Student student, FILE* file)
{
    size_t num_written = fwrite(&student, sizeof(Student), 1, file);
    if (num_written != 1) 
	{
        printf("ERROR: Unable to write to file\n");
    }
}

void printStudent(Student student)
{
	printf("Name: %s, ID: %d, Credits: %f, GPA: %lf, Alumni: %s\n",
			student.name,
			student.id,
			student.credits,
			student.gpa,
			student.alumni ? "true" : "false"
	);
}

int main()
{
	const char FILE_LOCATION[] = "C:/Temp/WallingtonSingh_Data.bin";

	Student student1 = {"Bob", 3131, 40.5, 3.2518, true};
	Student student2 = {"Sam", 3132, 122.0, 3.6231, false};
	Student student3 = {"Rob", 3133, 13.5, 2.4182, false};
	Student student4 = {"John", 3134, 2.5, 3.8940, false};
	Student student5 = {"Mike", 3135, 79.5, 4.0000, true};

    FILE* file = fopen(FILE_LOCATION, "wb");
    if (file == NULL) 
	{
        printf("ERROR: Unable to open file");
    }
	else
	{
		fclose(file);
		file = fopen(FILE_LOCATION, "ab");
	    if (file == NULL) 
		{
	        printf("ERROR: Unable to open file");
	    }
	}
	printf("Writing the following students to binary file %s\n\n", FILE_LOCATION);
	
	printStudent(student1);
	writeStudent(student1, file);
	printStudent(student2);
	writeStudent(student2, file);
	printStudent(student3);
	writeStudent(student3, file);
	printStudent(student4);
	writeStudent(student4, file);
	printStudent(student5);
	writeStudent(student5, file);
	
    fclose(file);
}
