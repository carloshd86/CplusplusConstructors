#pragma once


class TList
{

public:
	TList();
	TList(const TList& source);

	int Size() const;
	int Push(const char * psz);
	const char * First() const;
	const char * Next() const;
	const char * Pop();
	void Reset();

	~TList();

private:
	void *m_data;
};