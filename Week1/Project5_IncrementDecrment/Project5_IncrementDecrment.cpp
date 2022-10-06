#include <iostream>
using namespace std;

int main()
{
	//Initialise num to 1
	int num = 1;

	cout << "num = " << num << "\n";
	cout << "Increment operator before num = " << ++num << "\n";
	cout << "num after = " << num << "\n";

	/* resets num to 1
	
	
	hheahah*/

	num = 1;

	cout << "num = " << num << "\n";
	cout << "Increment op after num = " << num++ << "\n";
	cout << "num after = " << num << "\n";

	//reset to 1
	num = 1;

	cout << "num = " << num << "\n";
	cout << "Decrement op before num = " << --num << "\n";
	cout << "num after = " << num << "\n";

	num = 1;

	cout << "num = " << num << "\n";
	cout << "Decrement op after num = " << num-- << "\n";
	cout << "num after = " << num << "\n";

	return 0;
}
