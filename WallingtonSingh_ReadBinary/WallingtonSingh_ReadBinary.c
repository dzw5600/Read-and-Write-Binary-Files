
// Name: Utkarsh Singh
// Partners Name: David Wallington
// CmpSc472, Spring 2026
// This program will read student data from a binary file

// David is working on writing
// Utkarsh is working on reading

#include <stdio.h>
#include <stdbool.h>
#include "WallingtonSingh_BinaryIO.h"

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
}
