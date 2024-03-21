#include <iostream>
using  namespace std;
#define tab "\t";
void main()
{
	
	setlocale(LC_ALL, "");
	
	

		int const n = 10;
		int arr[n] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 };
		int save = arr[n - 1];
		
		
			arr[-1] = 0;
			for (int i = 0; i < n; i++)
			{
				cout << arr[i] << tab;
				arr[-1] = save;
				arr[i - 1];

			}
		
		cout << endl;

		for (int i = -1; i < n - 1; i++)
		{
			cout << arr[i] << tab;

		}
		cout << endl;
	
}