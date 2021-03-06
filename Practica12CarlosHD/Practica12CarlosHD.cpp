// Practica12CarlosHD.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TList.h"
#include "ITListUtils.h"


/*****************/

void TestCopyConstructor();
void TestGetReverseList();

/*****************/


void TestCopyConstructor()
{
	//Creating the sourceList
	TList * sourceList = new TList();
	int iTemp = 0;
	const char * strTemp = nullptr;

	printf("\n\nSOURCE LIST\n");

	// Pushing elements
	iTemp = sourceList->Push("Uno");
	iTemp = sourceList->Push("Dos");
	iTemp = sourceList->Push("Tres");
	iTemp = sourceList->Push("Catorce");


	// Iterating through elements
	strTemp = sourceList->First();
	while (strTemp)
	{
		printf("\nNext element: %s", strTemp);
		strTemp = sourceList->Next();
	}


	// Copy list
	TList copyList(*sourceList);

	// Iterating through elements
	printf("\n\nCOPY LIST\n");
	strTemp = copyList.First();
	while (strTemp)
	{
		printf("\nNext element: %s", strTemp);
		strTemp = copyList.Next();
	}

	//Altering the copy list...
	copyList.Reset();
	copyList.Push("New string");
	printf("\n\nCopy list altered\n\n");

	//Checking both lists...
	printf("\n\nSOURCE LIST\n");
	strTemp = sourceList->First();
	while (strTemp)
	{
		printf("\nNext element: %s", strTemp);
		strTemp = sourceList->Next();
	}

	printf("\n\nCOPY LIST\n");
	strTemp = copyList.First();
	while (strTemp)
	{
		printf("\nNext element: %s", strTemp);
		strTemp = copyList.Next();
	}


	// Destroying the source list
	delete sourceList;
	sourceList = nullptr;
}
/*****************/



void TestGetReverseList()
{
	//Creating the sourceList
	TList * sourceList = new TList();
	int iTemp = 0;
	const char * strTemp = nullptr;

	printf("\n\nSOURCE LIST\n");

	// Pushing elements
	iTemp = sourceList->Push("Uno");
	iTemp = sourceList->Push("Dos");
	iTemp = sourceList->Push("Tres");
	iTemp = sourceList->Push("Catorce");


	// Iterating through elements
	strTemp = sourceList->First();
	while (strTemp)
	{
		printf("\nNext element: %s", strTemp);
		strTemp = sourceList->Next();
	}


	// Reverse list
	printf("\n\nCreating reverse list\n");
	TList reverseList = ITListUtils::GetReverseList(*sourceList);

	// Iterating through elements
	printf("\nREVERSE LIST\n");
	strTemp = reverseList.First();
	while (strTemp)
	{
		printf("\nNext element: %s", strTemp);
		strTemp = reverseList.Next();
	}

	// Destroying the source list
	delete sourceList;
	sourceList = nullptr;
}
/*****************/


void TestGetReverseListImproved()
{
	//Creating the sourceList
	TList * sourceList = new TList();
	int iTemp = 0;
	const char * strTemp = nullptr;

	printf("\n\nSOURCE LIST\n");

	// Pushing elements
	iTemp = sourceList->Push("Uno");
	iTemp = sourceList->Push("Dos");
	iTemp = sourceList->Push("Tres");
	iTemp = sourceList->Push("Catorce");


	// Iterating through elements
	strTemp = sourceList->First();
	while (strTemp)
	{
		printf("\nNext element: %s", strTemp);
		strTemp = sourceList->Next();
	}


	// Reverse list
	printf("\n\nCreating reverse list (improved)\n");
	TList * reverseList = ITListUtils::GetReverseListImproved(*sourceList);

	// Iterating through elements
	printf("\nREVERSE LIST\n");
	strTemp = reverseList->First();
	while (strTemp)
	{
		printf("\nNext element: %s", strTemp);
		strTemp = reverseList->Next();
	}

	// Destroying the lists
	delete reverseList;
	reverseList = nullptr;

	delete sourceList;
	sourceList = nullptr;
}
/*****************/


int main()
{
	// Copy constructor
	printf("Test Copy Constructor");
	printf("*********************");

	TestCopyConstructor();

	printf("\n\nPress Enter to test GetReverseList...");
	getchar();


	// GetReverseList
	printf("\n\nTest GetReverseList");
	printf("*********************");

	TestGetReverseList();


	printf("\n\nPress Enter to test GetReverseListImproved...");
	getchar();

	// GetReverseListImproved
	printf("\n\nTest GetReverseListImproved");
	printf("*********************");

	TestGetReverseListImproved();


	printf("\n\nPress Enter to quit...");
	getchar();
}
/*****************/
