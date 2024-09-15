#include <stdio.h>

#define TEN          10
#define BILLION      1000000000L
#define BILLION_U    1000000000UL
#define PI           3.1416
#define BILLION_E    1.0e+9
#define THIRTY_ONE_O 037
#define THIRTY_ONE_H 0x1F
#define ZERO         '0'
#define VTAB         '\013'
#define BELL         '\x7'
#define HELLO        "Hello"
#define WORLD        "world"

enum boolean {NO, YES};
enum months {JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

int main()
{
    printf("Constants\n");
    printf("  integer constant: %d\n", TEN);
    printf("  long constant: %ld\n", BILLION);
    printf("  unsigned long constant: %lu\n", BILLION_U);
    printf("  floating point constant (decimal point): %.4f\n", PI);
    printf("  floating point constant (exponent): %.0e -> %0.f\n", BILLION_E, BILLION_E);
    printf("  decimal 31 in octal: %o -> %d\n", THIRTY_ONE_O, THIRTY_ONE_O);
    printf("  decimal 31 in hexadecimal: %x -> %d\n", THIRTY_ONE_H, THIRTY_ONE_H);
    printf("  character constant (zero): %c\n", ZERO);
    printf("  ASCII vertical tab (octal): %o\n", VTAB);
    printf("  ASCII bell character (hexadecimal): %x\n\n", BELL);

    printf("Escape secuences\n");
    printf("  \\a alert (bell) character\n");
    printf("  \\b backspace\n");
    printf("  \\f formfeed\n");
    printf("  \\n newline\n");
    printf("  \\r carriage return\n");
    printf("  \\t horizontal tab\n");
    printf("  \\v vertical tab\n");
    printf("  \\\\ slash\n");
    printf("  \\? question mark\n");
    printf("  \\' single quote\n");
    printf("  \\\" double quote\n\n");

    printf("String constants\n");
    printf("  string constant: %s\n", HELLO);
    printf("  string constants (concatenated): %s%s%s\n\n", HELLO, ", ", WORLD);

    printf("Enumeration constants\n");
    printf("  boolean: %d %d\n", NO, YES);
    printf("  months: %d %d %d %d %d %d %d %d %d %d %d %d\n", JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC);
}
