#include <stdio.h>

/* Called functions that are needed to convert binary to decimal
as well as find the sum of chosen divisible integers. */
int sum_of_divisibles(int x, int y, int n);
int bin_to_dec(int x);

int main() {
    int options;
    while (1) {
        printf("Choose from one of the option below: \n");
        printf("1. Calculate the sum of integers divisible by two integers within an Upperbound.\n");
        printf("2. Convert binary to decimal.\n");
        printf("3. Goodbye.\n");
        printf("Please select one: ");
        scanf("%d", &options);
        /* This gives the user the opening menu, using the "printf" function, as well as allowing the user 
    to type in an input and responds to the input given using the "scanf" fuction
    If the user gives an input that's not shown, it will then take the user back to the menu with options given initially. 
    The loop will continue to execute the code until the user inputs 3, which at that point will terminate the code as a whole with "break;".*/ 


        if (options == 1) {
            int x, y, z;
            printf("Enter three integers: ");
            scanf("%d %d %d", &x, &y, &z);
            int sum = sum_of_divisibles(x, y, z);
            printf("Sum of chosen numbers is %d and %d up to %d is: %d\n", x, y, z, sum);
            /* This part of the code will initiate once the user inputs 1 from 
            the options given at the beginning and then it will prompt the user 
            to enter 3 integers and once those 3 integers are given, then it will  
            calculate the sum with a given upperbound*/
        } else if (options == 2) {
            int binary;
            printf("Enter a binary number: ");
            scanf("%d", &binary);
            int decimal = bin_to_dec(binary);
            if (decimal == -1) {
                printf("Invalid number, try again.\n");
            } else {
                printf("The decimal of the binary number is: %d\n", decimal);
            }
            /* This part of the code will initiate once the user inputs 2 from 
            the options given at the beginning and then it will prompt the user 
            to enter a binary number and then it will print out the same number
            but in decimal representation.*/
        } else if (options == 3) {
            printf("Goodbye.\n");
            break;
            /* This part of the code will initiate once the user inputs 3. Once the 
            user confirms their input, the program will terminate and print out 
            the message "Goodbye".*/
        } else {
            printf("Invalid input. Please select 1, 2, or 3.\n");
        }
        /* This part of the code acts as the limiter in case the user doesn't input 
        the values between 1 and 3 and then it will prompt them to select either
        1, 2 or 3.*/
    }
    return 0;
}

int sum_of_divisibles(int x, int y, int z) {
    int sum = 0;
    for (int i = 1; i <= z; i++) {
        if (i % x == 0 && i % y == 0) {
            sum += i;
        }
    }
    return sum;
}
/* The code above first declares a function "sum_of_divisibles" 
that takes three integers, x, y and n, and returns an integer
line 64: Declares and initializes a  variable 'sum' to 0. 
'This vairable will be used to store the sum of numbers that 
the required conditions.
line 65 - 68: Within the 'for' loop - this line checks if the
current value of i - the value given by the user input, is divisible 
by both 'x' and 'y'. If true, the 'if' statement is executed.

*/

int bin_to_dec(int x) {
    int decimal = 0;
    int i = 0;
    
    while (x > 0) {
        int digit = x % 10;
        if (digit != 0 && digit != 1)
        {
            return -1; 
            
        }
        decimal += digit * (1 << i);
        x /= 10;
        i++;
    }

    return decimal; 
    /* line 83: Declares a function named "bin_to_dec" that takes an integer 'x'
    and returns an integer
    line 84 - 85: Declare two integer variables, 'decimal' and 'i'. Initializes 
    both of them to 0. 'decimal' stores the decimal equivalent of the binary number 
    given. 
    line 87: While loop - This line starts the loop that continues on as long as 
    'x' is greater than 0.
    line 88: This calculates the last digit of the binary number bu taking the remainder when  
    the integer 'x' is divided by 10
    line 89: This checks if the digit thats taken is either 0 or 1. If its false, then the
    function returns as '-1', that indicates an invalid binary digit.
    line 94: If the given digit meets the requirements, it adds the produc of the digit and 2 raised 
    to the power of 'i' in the 'decimal' variable.
    line 95 - 96: These update the value of 'x' by removing the last digit, and increments of 'i' to continue 
    on to the next digit for conversion
    line 99: The function returns the calculated decimal value.*/
    
}








