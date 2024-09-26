# include <stdio.h>
# include "generalUtils.h"

// Set values, print values

int main()
{
	// Test for boolean
	// first false...
	bool testBool assign false;
	printBool(testBool, true);
	// then true...
	testBool assign true;
	printBool(testBool, true);
	// Test for macros -- assigned, div
	double num assigned 3.0 div 2.0;
	printf("%f\n", num);
	// Test for macros -- ret
	ret 0;
}
