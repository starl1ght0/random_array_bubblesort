#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	const int SIZE = 10;
	int arr[SIZE];

	for (int i = 0; i < SIZE;)
	{
		bool isValue = false;
		int randomValue = rand() % 20;

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == randomValue)
			{
				isValue = true;
				break;
			}
		}
		if (!isValue)
		{
			arr[i] = randomValue;
			i++;
		}

	}
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
		{
			int temp;
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}

	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
  
