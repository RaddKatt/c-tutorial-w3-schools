/* C TUTORIAL from W3 Schools
Reference: https://www.w3schools.com/c/ */

#include <stdio.h>

int main() {

  // The print function
  printf("\n");
  printf("PRINT FUNCTION\n");
  printf("Hello world!\n"); // This is a comment
  printf("I am learning C.\nAnd it is awesome!\n");
  printf("\n");

  // DATA TYPES
  printf("DATA TYPES\n");

  // Store an integer variable and print it
  int myNum = 15; // Integer (whole number)
  printf("myNum is: %d.", myNum); // %d is a format specifier. %i can also be used for an integer
  printf("            (int myNum = 15;)\n");

  // Store a float (fractional number in decimal) variable, and print it
  float myFloat = 5.99; // Floating point number (7 decimal digits)
  printf("myFloat is: %f.", myFloat);
  printf("    (float myFloat = 5.99;)\n");

  // Store a double variable and print it
  double myDouble = 19.99; // 15 decimal digits
  printf("myDouble is: %lf.", myDouble);
  printf("  (double myDouble = 19.99;)\n");

  // Store a character variable, and print it
  char myLetter = 'm'; // A character
  printf("myLetter is: %c.", myLetter);
  printf("          (char myLetter = 'm';)\n");

  printf("myNum is %d and myLetter is %c.\n", myNum, myLetter); // Print different types in a single printf() function

  int x = 5;  // Store an integer variable named 'x' with the value 5
  int y = 6;  // Store an integer variable named 'y' with the value 6
  int sum = x + y;  // Store the sum of the previous two integers in a new variable
  printf("%d + %d = %d.\n", x, y, sum); // Print x + y = sum

  int a = 5, b = 6, c= 50; // Declare multiple variables
  printf("%d.\n", a + b + c); // Print the sum of the three variables

  int d, e, f;  // Declare multiple integer variables
  d = e = f = 50; // Assign the same value to multiple variables of the same type
  printf("%d.\n", d + e + f);

  printf("\n");

  /* Store a constant variable using the 'const' keyword. 
  Constants are variables that cannot be overwritten later.
  They are unchangeable and read-only.
  When you declare a constant variable, it must be assigned with a value.
  By convention, contstants should be named in uppercase (e.g. const int MYCONSTANT = 16;) */
  printf("CONSTANTS\n");
  const int BIRTHYEAR = 1985;
  printf("BIRTHYEAR is: %i.", BIRTHYEAR);
  printf(" (const int BIRTHYEAR = 1985;)\n");
  printf("It is read-only and cannot be changed.\n");
  // int BIRTHYEAR = 1986; // <-- this will error out because BIRTHYEAR is read-only

  printf("\n");
  printf("ARITHMETIC OPERATORS\n");

  /* OPERATORS
  ARITHMETIC OPERATORS
  Addition Operator
  In this example, the '+' operator is used to add together a variable and a value */
  int intsAdded = 50 + 100; // // In this example, the '+' operator is used to add together two values
  printf("50 + 100 = %i.\n", intsAdded);
  int sum1 = 100 + 50;  // 150 (100 + 50)
  printf("%i.", sum1);
  printf(" (int sum1 = 100 + 50;)\n");
  int sum2 = sum1 + 250;  // 400 (150 + 250)
  printf("%i.", sum2);
  printf(" (int sum2 = sum1 + 250;)\n");
  int sum3 = sum2 + sum2;
  printf("%i.", sum3); // 800 (400 + 400)
  printf(" (int sum3 = sum2 + sum2;)\n");


  // Subtraction Operator
  int subEight = 8;
  int subFive = 5;
  printf("%i.", subEight - subFive); // 8 - 5 = 3
  printf("   (8 - 5 = 3)  (subtraction)\n");

  // Multiplication Operator (*)
  int multFive = 5;
  int multThree = 3;
  printf("%i.", multFive * multThree); // 5 * 3 = 15
  printf("  (5 * 3 = 15) (multiplication)\n");

  // Division Operator (/)
  int divTwenty = 20;
  int divFive = 5;
  printf("%i.", divTwenty / divFive); // 20 / 5 = 4
  printf("   (20 / 5 = 4) (division)\n");

  // Modulous Operator (%) Note: Remainder
  int modTwentyOne = 21;
  int modFour = 4;
  printf("%i.", modTwentyOne % modFour); // 21 % 4 = 1
  printf("   (21 %% 4 = 1) (modulus)\n");

  // Increment Operator  (++) Increases the value of a variable by 1
  int incrX = 5;
  printf("5 incremented by 1 is: %i.", ++incrX);
  printf("  (int incrX = 5; ++incrX;)\n");

  // Decrement Operator (--) Decreases the value of a variable by 1
  int decrX = 10;
  printf("10 decremented by 1 is: %i.", --decrX);
  printf(" (int decrX = 10; --decrX;)\n");

  printf("\n");
  printf("BITWISE OPERATORS\n");

  /* BITWISE OPERATORS
  Bitwise operators work with binary numbers

  Bitwise 'AND' &
  Result is 1 if the corresponding bits of two operands is 1.
  If either bit of an operand is 0, the result is 0. */
  printf("1010\n");
  printf("1011\n");
  printf("1010\n");
  printf("%i.\n", 10 & 11);

  // Bitwise 'OR' |

  // Bitwise 'XOR' ^

  // Bitwise 'Complement' ~

  // Shift right >>

  // Shift left <<

  printf("\n");
  printf("ASSIGNMENT OPERATORS\n");

  /* ASSIGNMENT OPERATORS
  Assignment operators are used to assign values to variables 
  '=' Operator */
  char g = 'S';
  printf("%c.", g);
  printf("  (char g = 'S';)\n");

  // '+=' Operator (same as 'x = x + 3')
  int h = 5;
  h += 3; // h = h + 3
  printf("%i.", h);
  printf("  (int h = 5; h += 3;)\n");

  // '-=' Operator (same as 'x = x - 3')
  int i = 5;
  i -= 3; // i = i - 3
  printf("%i.", i);
  printf("  (int i = 5; i -= 3;)\n");

  // '*=' Operator (same as 'x = x * 3')
  int j = 5;
  j *= 3; // j = j * 3
  printf("%i.", j);
  printf(" (int j = 5; j *= 3;)\n");

  // '/=' Operator (same as 'x = x / 3')
  int k = 15;
  k /= 3; // k = k / 3
  printf("%i.", k);
  printf("  (int k = 15; k /= 3;)\n");

  // '%=' Operator (same as 'x = x % 3')
  int l = 5;
  l %= 3; // l = l % 3
  printf("%i.", l);
  printf("  (int l = 5; l %%= 3;)\n");

  // '&=' Operator (x = x bitwise 'AND') (same as x = x & 3)
  int m =  12; // 12 in binary is 1100
  m &= 8;       // 8 in binary is 1000
  printf("%i.", m);            // 1000 (m = 1100 & 1000)
  printf("   (int m = 12; m &= 8;)   (bitwise 'AND')\n");

  // '|=' Operator (x = x bitwise 'OR') (same as x = x | 3)
  int n = 12; // 12 in binary is 1100
  n |= 8;      // 8 in binary is 1000
  printf("%i.", n);            // 1100 (12)
  printf("  (int n = 12; n|= 8;)    (bitwise 'OR')\n");

  // '^=' Operator (x = x bitwise 'XOR') (same as x = x ^ 3)
  int o = 12; // 12 in binary is 1100
  o ^= 8;      // 8 in binary is 1000
  printf("%i.", o);           // 0100 (4)
  printf("   (int o = 12; o^= 8;)    (bitwise 'XOR')\n");

  // '>>=' Operator (x = x 'shift right') (same as x = x >> 3)
  int p = 200; // 200 in binary is 11001000
  p >>= 2;     // shift right by 2
  printf("%i.", p);             // 00110010 (50)
  printf("  (int p = 200; p >>= 2;) (shift bits right by 2)\n");

  // '<<=' Operator (x = x 'shift left') (same as x = x << 3)
  int q = 200; // 200 in binary is 11001000
  q <<= 2;     // shift left by 2
  printf("%i.", q);               // 1100100000 (800)
  printf(" (int q = 200; q <<= 2;) (shift bits left by 2)\n");

  printf("\n");

  return 0; /* Block comment */
}