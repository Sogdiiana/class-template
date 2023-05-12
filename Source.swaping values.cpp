#include <iostream>
using namespace std;
template <typename T >
class Change
{
private:
	T val1;
	T val2;
public:
	Change(T val1, T val2)
	{
		setValues(val1, val2);
	}
	void setValues(T val1, T val2)
	{
		this-> val1 = val1;
		this-> val2 = val2;
	}
	void print()
	{
		cout << "Values : " << val1 << " " << val2;
		cout << "\nSwaping**"; 
		cout  << "\nFirst value ~ " << val2 << endl;
		cout << "Second value ~ " << val1 << endl;
	}
};

int main()
{
	Change <int> obj(6, 7);
	obj.print();

	return 0;
}