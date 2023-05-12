#include <iostream>
using namespace std;
template <typename T>
class my_array
{
public:
	T array[5] = {};
	void elements()
	{
		cout << "All elements of array : " << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << array[i] << " ~ ";
		}
	}
	void upsideDown() 
	{
		cout << "\nElements of array from the end to beginning : " << endl;
		for (int i = 4; i >= 0; i--)
		{
			cout << array[i] << " ~ ";
		}
	}
	void  compare()
	{
		cout << "\nThe biggest element :" << endl;
		if (array[0] > array[1] && array[0] > array[2] && array[0] > array[3] && array[0] > array[4])
			cout << array[0];
		if (array[1] > array[0] && array[1] > array[2] && array[1] > array[3] && array[1] > array[4])
			cout << array[1];
		if (array[2] > array[1] && array[2] > array[0] && array[2] > array[3] && array[2] > array[4])
			cout << array[2];
		if (array[3] > array[1] && array[3] > array[2] && array[3] > array[0] && array[3] > array[4])
			cout << array[3];
		if (array[4] > array[1] && array[4] > array[2] && array[4] > array[3] && array[4] > array[0])
			cout << array[4];
	}
	void print()
	{
		cout << "\nThe maximum amount of elements is 5" << endl;
	}

};
int main()
{

	my_array <double> obj;
	cout << "enter your elements : " << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> obj.array[i];
	}
	obj.elements();
	obj.upsideDown();
	obj.compare();
	obj.print();
}