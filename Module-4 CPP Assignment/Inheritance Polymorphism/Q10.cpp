#include <iostream>
#include <string.h>
using namespace std;
class AddString {
public:
	char s1[25], s2[25];
	
	AddString(char str1[], char str2[])
	{
		strcpy(this->s1, str1);
		strcpy(this->s2, str2);
	}

	void operator+()
	{
		cout << "\nConcatenation: " << strcat(s1, s2);
	}
};

int main()
{
	char str1[] = "Hello";
	char str2[] = " World";

	AddString a1(str1, str2);

	// Call operator function
	+a1;
	return 0;
}

