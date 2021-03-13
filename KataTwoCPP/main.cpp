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
	cout << "You have " << slices << " slices of pizza. (variable slices is being used here)" << endl;
	cout << "You have " << 10 << " slices of pizza. (10 is hardcoded into cout)" << endl; //This is a way to hard code a number into a sentence instead of variable

	printf("Using printf to print slices: %i\n", slices); //Can also print strings this way. cout is easier than printf

	using std::cin;
	//getting user input
	//arrows point toward the data flow. For example, cout << "hello"; the arrows are pointing TO cout, so it is going towards the console.
	//cin >> the arrows are pointing to where the data is going to go. In this case, the data FROM console is going to be stored in userInput. 
	int userInput;
	
	cout << "What is your favorite integer? ";
	cin >> userInput;
	cout << "The number you entered was: " << userInput << endl;

	//note that cout and cin are both objects. cout is an instance of o stream, and cin is an instance of i stream.
	//Going to end this code here.






}