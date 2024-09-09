// C++ Program to illustrate how to define a move
// constructor
#include <iostream>
using namespace std;

class Box {

public:
	int* data; // Pointer to an integer value
	// Constructor
	Box(int value)
	{
		data = new int;
		*data = value;
	}

	// Move constructor
	Box(Box&& other) noexcept
	{
		cout << "Move Constructor Called" << endl;

		data = other.data; // Transfer ownership of 'other'
						// data
		other.data = nullptr; // Null out 'other' to prevent
							// double deletion
	}

	// Destructor
	~Box() { delete data; }
};

int main()
{
	// Create a Box with value 42
	Box originalBox(42);

	// Create a new Box by moving resources from the
	// originalBox
	Box newBox(move(originalBox));

	cout << "newBox.data: " << *newBox.data;

	// originalBox is now in a valid but unspecified
	// state (its resources were moved to newBox)

	return 0;
}
