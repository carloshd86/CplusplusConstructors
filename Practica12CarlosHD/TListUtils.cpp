#include "stdafx.h"
#include "ITListUtils.h"

/**
Returns a list corresponding to the source list reversed.

@param lstSrc The list to generate its reverse
*/
TList ITListUtils::GetReverseList(TList lstSrc)
{
#ifdef _DEBUG
	printf("\n----- Enter GetReverseList  -----\n");
#endif

	TList reverseList;
	const char * strTemp = nullptr;
	unsigned int sourceSize = static_cast<unsigned int>(lstSrc.Size()); // Size must never be lower than zero
	const char ** bufferTemp = nullptr;

	if (sourceSize)
	{
		bufferTemp = new const char *[sourceSize];
		strTemp = lstSrc.First();
		int i = 0;
		while (strTemp)
		{
			bufferTemp[i++] = strTemp;
			strTemp = lstSrc.Next();
		}

		while (i-- > 0)
			reverseList.Push(bufferTemp[i]);
	}

#ifdef _DEBUG
	printf("\n----- Exit GetReverseList  -----\n");
#endif

	return reverseList;
}

TList * ITListUtils::GetReverseListImproved(const TList& lstSrc)
{
#ifdef _DEBUG
	printf("\n----- Enter GetReverseListImproved  -----\n");
#endif

	TList * reverseList = new TList();
	const char * strTemp = nullptr;
	unsigned int sourceSize = static_cast<unsigned int>(lstSrc.Size()); // Size must never be lower than zero
	const char ** bufferTemp = nullptr;

	if (sourceSize)
	{
		bufferTemp = new const char *[sourceSize];
		strTemp = lstSrc.First();
		int i = 0;
		while (strTemp)
		{
			bufferTemp[i++] = strTemp;
			strTemp = lstSrc.Next();
		}

		while (i-- > 0)
			reverseList->Push(bufferTemp[i]);
	}

#ifdef _DEBUG
	printf("\n----- Exit GetReverseListImproved  -----\n");
#endif

	return reverseList;
}