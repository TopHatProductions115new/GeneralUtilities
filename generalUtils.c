# include <stdio.h>
# include "generalUtils.h"

// generalUtils.c


// Boolean types implementation

void setTrue(bool value)
{
	value = true;
}

void setFalse(bool value)
{
	value = false;
}

void printBool(bool value, bool newline)
{
	if (newline == true) {
		printf("%u\n", value);
	}
	else {
		printf("%u", value);
	}
}
