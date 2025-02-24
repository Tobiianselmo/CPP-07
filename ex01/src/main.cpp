#include "../include/iter.hpp"

void printNbr(int &nbr)
{
	std::cout << nbr << std::endl;
}

void printStr(std::string &str)
{
	std::cout << str << std::endl;
}

int main(void)
{
	std::cout << "-----Integer array test-----" << std::endl;
	int intArr[] = {1, 2, 3, 4, 5};
	int len = sizeof(intArr) / sizeof(intArr[0]);
	::iter(intArr, len, printNbr);

	std::cout << "-----String array test-----" << std::endl;

	std::string strArr[] = {"first", "second", "third"};
	len = sizeof(strArr) / sizeof(strArr[0]);
	::iter(strArr, len, printStr);

	return (0);
}