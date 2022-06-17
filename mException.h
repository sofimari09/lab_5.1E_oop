#pragma once
#include <exception>
using namespace std;

class mException : public exception
{
public:
	mException(const char* const msg) : exception(msg) {};
};
