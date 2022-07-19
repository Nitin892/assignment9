// 1. Write a program which takes the month number as an input and display
// number of days in that month.

#include <stdio.h>
int main()
{
    int month;
    printf("Enter month number: ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("There are 31 days in January");
        break;

    case 2:
        printf("There are 28/29 days in February");
        break;
    case 3:
        printf("There are 31 days in March");
        break;
    case 4:
        printf("There are 30 days in April");
        break;
    case 5:
        printf("There are 31 days in May");
        break;
    case 6:
        printf("There are 30 days in June");
        break;
    case 7:
        printf("There are 31 days in July");
        break;
    case 8:
        printf("There are 31 days in August");
        break;
    case 9:
        printf("There are 30 days in September");
        break;
    case 10:
        printf("There are 31 days in October");
        break;

    case 11:
        printf("There are 30 days in November");
        break;

    case 12:
        printf("There are 31 days in December");
        break;
    }

    return 0;
}

// 2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit
#include <stdio.h>
#include <stdlib.h>
int main()
{

    while (1)
    {

        int a, b;
        printf("a. Addition\n");
        printf("b. Subtraction\n");
        printf("c. Multiplication\n");
        printf("d. Division\n");
        printf("e. Exit\n");

        printf("\nEnter a character to perform task: ");
        char choice;

        scanf(" %c", &choice);

        switch (choice)
        {

        case 'a':

            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Addition of %d %d is %d\n", a, b, a + b);
            break;
        case 'b':

            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Subtraction of %d %d is %d\n", a, b, a - b);
            break;
        case 'c':
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Multiplication of %d %d is %d\n", a, b, a * b);
            break;

        case 'd':

            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Division of %d %d is %d\n", a, b, a / b);
            break;
        case 'e':
            printf("Come Back Soon!");
            exit(0);

        default:
            printf("you have entered wrong charater\n");
        }
    }
    return 0;
}

// 3. Write a program which takes the day number of a week and displays a
// unique greeting message for the day.
#include <stdio.h>
#include <stdlib.h>
int main()
{

    int day;

    printf("\nEnter a character to perform task: ");

    scanf("%d", &day);

    switch (day)
    {

    case 1:

        printf("It's Going to be a great day!");

        break;
    case 2:

        printf("have a wonderful day ahead!");

        break;
    case 3:
        printf("Have hope in God and start your day with positive thoughts. Have a great day!");

        break;

    case 4:

        printf("Wishing you wealth and good health, have a great day.");

        break;
    case 5:
        printf("Today marks the day of another opportunity for you. Have a great day.");
        break;

    case 6:
        printf("Planning the day makes it easier to follow, here's to another great day!");
        break;
    case 7:
        printf("Reminder: It's you and you are unique. Have a great day!");
        break;
    }
    return 0;
}

// 4. Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an
// isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of sides of
// a right angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle
// or not
// d. Exit

#include <stdio.h>
#include <stdlib.h>
int main()
{

    while (1)
    {
        int a, b, c;
        printf("a. three numbers are lengths of an isosceles triangle or not\n");
        printf("b. three numbers are lengths of sides of a right angled triangle or not\n");
        printf("c. three numbers are equilateral triangle or not\n");
        printf("d. Exit\n");

        printf("\nEnter a character to perform task: ");
        char choice;

        scanf(" %c", &choice);

        switch (choice)
        {

        case 'a':

            printf("\nEnter three numbers: ");
            scanf("%d %d %d", &a, &b, &c);

            int t = a == b || b == c || c == a;
            switch (t)
            {
            case 1:
                printf("It is isoceles triangle\n");
                break;

            case 0:
                printf("It is not isoceles triangle\n ");
                break;
            }
            break;
        case 'b':

            printf("Enter three numbers: ");
            scanf("%d %d %d", &a, &b, &c);
            int z = (a * a + b * b) == c * c;
            switch (z)
            {
            case 1:
                printf("It is right angled traingle.\n");
                break;

            case 0:
                printf("It is not right angled traingle.\n");
                break;
            }

            break;
        case 'c':
            printf("Enter three numbers: ");
            scanf("%d %d %d", &a, &b, &c);
            int d = a == b && b == c && c == a;
            switch (d)
            {
            case 1:
                printf("It is equilateral triangle.\n");
                break;

            case 0:
                printf("It is not equilateral triangle.\n");
                break;
            }
            break;

        case 'd':
            printf("\bCome Back Soon!");
            exit(0);
        }
    }
    return 0;
}

// 5. Convert the following if-else-if construct into switch case:
// if(var == 1)
// System.out.println("good");
// else if(var == 2)
// System.out.println("better");
// else if(var == 3)
// System.out.println("best");
// else
// System.out.println("invalid");

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("good");
        break;
    case 2:
        printf("better");
        break;
    case 3:
        printf("best");
        break;
    default:
        printf("invalid");
    }
    return 0;
}

// 6. Program to check whether a year is a leap year or not. Using switch statement.
#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    switch (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
    {
    case 1:
        printf("%d is loop year", year);
        break;

    case 0:
        printf("%d is not a leap year", year);
        break;
    }
    return 0;
}
// 7. Program to take the value from the user as input electricity unit charges
// and calculate total electricity bill according to the given condition . Using
// the switch statement.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float bill;
    float total_bill;
    int unit, n, counter = 0;
    char y;
    while (1)
    {
        printf("Enter your bill: ");
        scanf("%d", &unit);

        switch (unit)
        {
        case 50 ... 99:
            bill = unit * 0.50;
            total_bill = (20 * bill) / 100;
            total_bill = total_bill + bill;
            printf("Total bill is %.2f\n", total_bill);
        case 100 ... 250:
            switch (counter)
            {
            case 1:
                bill = unit * 1.20;
                total_bill = (20 * bill) / 100;
                total_bill = total_bill + bill;
                printf("Total bill is %.2f\n", total_bill);
                break;

            case 0:
                bill = unit * 0.75;
                total_bill = (20 * bill) / 100;
                total_bill = total_bill + bill;
                counter++;
                printf("Total bill is %.2f\n", total_bill);
                break;
            }

            break;
        default:
            bill = unit * 1.50;
            total_bill = (20 * bill) / 100;
            total_bill = total_bill + bill;
            printf("Total bill is %.2f\n", total_bill);
            break;
        }
        printf("\nDo you want to Exit\n");
        printf("Enter y to exit.\n");
        printf("Enter n to stay.\n");
        scanf(" %c", &y);
        if (y == 'y' || y == 'Y')
        {
            printf("Visit Soon.");
            exit(0);
        }
    }
    return 0;
}

// 8. Program to convert a positive number into a negative number and negative
// number into a positive number using a switch statement.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    int a = n > 0;
    switch (a)
    {
    case 1:
        n = n * (-1);
        printf("%d\n", n);
        break;
    case 0:
        n = n * (-1);
        printf("%d", n);
        break;

    default:
        printf("invalid");
    }
    return 0;
}

// 9. Program to Convert even number into its upper nearest odd number
// Switch Statement.
#include <stdio.h>
int main()
{
    printf("1.Convert even number into its upper nearest odd number\n");
    int n;
    printf("Select Option: ");
    scanf("%d", &n);
    switch (n)
    {
        int a;
    case 1:

        printf("Enter a even numbers: ");
        scanf("%d", &a);

        switch (a % 2)
        {
        case 0:
            printf("%d", a + 1);
            break;

        case 1:
            printf("Please enter even number", a);
            break;
        default:
            break;
        }
        break;

    default:
        printf("invalid");
    }
    return 0;
}

// 10. C program to find all roots of a quadratic equation using switch case.

#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, D;
    float x, y;
    printf("Enter coefficient of x^2 and x and constant");
    scanf("%d %d %d", &a, &b, &c);

    D = b * b - 4 * a * c;
    switch (D == 0)
    {
    case 0:
        switch (D > 0)
        {
        case 0:
            printf("roots are real and imaginary\n");
            break;

        case 1:
            printf("roots are real and distinct\n");
            x = (-b - sqrt(D)) / (2 * a);
            y = (-b + sqrt(D)) / (2 * a);
            printf("Roots  are %f %f\n", x, y);
        }
        break;

    case 1:
        x = -b / (2 * a);
        printf("both roots are equal with %.2f\n", x);
        break;
    }
    return 0;
}