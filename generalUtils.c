# include <stdio.h>
# include "generalUtils.h"

// generalUtils.c


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
