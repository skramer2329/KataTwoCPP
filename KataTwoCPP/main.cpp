/*
Sabrina Kramer
This is the beginning of my learning CPP

*/

#include <iostream>


//This is bringing everything in from std
//using namespace std;

//int main()
//{
//	std::cout << "Hello World\n";
//}

//This is only bringing in cout from std
//Where we place using std::cout is important. It is either local or global depending on where we place it
using std::cout;
using std::endl;	//I could just do using namespace std instead but for now I won't do this.
int main()
{
	cout << "Hello World\n";

	int slices; //declaration
	slices = 5; //initialization

	cout << slices << endl; //will print number in screen

	int moreSlices = slices +1;
	cout << moreSlices << endl; //will print moreSlices

	//can make more complex strings:
	cout << slices << endl;	//endl is a new line 
	cout << "You have " << slices << " slices of pizza." << endl;
	cout << "You have " << 10 << " slices of pizza." << endl; //This is a way to hard code a number into a sentence instead of variable

	printf("%i\n", slices); //Can also print strings this way. cout is easier than printf
}