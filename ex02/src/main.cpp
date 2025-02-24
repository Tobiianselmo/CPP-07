#include "../include/Array.hpp"

int main(void)
{
	try
	{
		Array<int> firstArray(5);

		for (int i = 0; i <= firstArray.size(); i++)
		{
			std::cout << "firstArray in pos " << i << " has value " << firstArray[i] << std::endl;
		}

		std::cout << std::endl;

		Array<int> secondArray(firstArray);
		secondArray[1] = 10;

		std::cout << std::endl;

		for (int i = 0; i <= secondArray.size(); i++)
		{
			std::cout << "secondArray in pos " << i << " has value " << secondArray[i] << std::endl;
		}
		
		std::cout << std::endl;

		for (int i = 0; i <= firstArray.size(); i++)
		{
			std::cout << "firstArray in pos " << i << " has value " << firstArray[i] << std::endl;
		}

		std::cout << firstArray[-1] << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	return (0);
}