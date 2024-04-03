#include <iostream>
#include <ctime>
#include <time.h>

int main()
{
	const int n = 8;
	int arr[n][n];
	
	std::cout << "massive\n";
	//наполнение
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = i + j;
		}
	}
	//вывод
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}
	struct tm buf;
	time_t t = time(NULL);
	localtime_s(&buf, &t);
	int currentDay = buf.tm_mday;
	int remainder = currentDay % n;

	int sum = 0;
	for (int j = 0; j < n; j++)
	{
		sum += arr[remainder][j];
	}
	std::cout << "summ of elements with index " << remainder << " is " << sum;
}