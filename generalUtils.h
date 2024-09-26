# ifndef GENERALUTILS_H
# define GENERALUTILS_H

// generalUtils.h


// Macros for Logic Operators

# define eq					==
# define equ        ==
# define neq        !=
# define gt         >
# define gte        >=
# define lt         <
# define lte        <=
// Closer to english terminology
# define equals     ==
# define is         ==
# define isnt       !=
// Everything but division (div -- /)
# define and        &&
# define or         ||
# define assign     =
# define assigned   =
# define not        !
# define bit_and    &
# define bit_or     |
# define bit_xor    ^
# define bit_not    ~
# define bit_shiftL <<
# define bit_shiftR >>
# define addressOf  &
# define add        +
# define inc        ++
# define sub        -
# define dec        --
# define mult       *
# define div        /
# define mod        %
# define ret        return
# define nop        ;


// Boolean types implementation

typedef unsigned int bool;
enum { false, true };

void setTrue(bool value);
void setFalse(bool value);
void printBool(bool value, bool newline);

# endif
