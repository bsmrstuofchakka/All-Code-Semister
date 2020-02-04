/************************************************************
Mini project on Scientific calculator

This project implements various mathematical operations in C
@author Md. Murad Hossain
************************************************************/

/// list of header files
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

/// list of global variables

struct Complex {
    float real;
    float imag;
};

struct Complex c1, c2, c3;


/// User defined function

/***********************************************
return the determinant term of quadratic equation
@param a highest order coeffcient
@param b lower order coefficient
@param c lowest coefficient
@return determinant term
************************************************/
float determinantTerm(float a, float b, float c)
{
    float temp = b*b - 4 * a * c;
    return temp;
}


/*********************************************
calculates the factorial of given integer
@param n input integer
@return factorial of n
***********************************************/

int factorial(int n){
    if (n == 0)
        return 1;
    else
        return n * factorial(n-1); /// recursive calculation
}


/**********************************************
calculates the sine of a given angle
@param angle given angle
@return sine value of angle
**********************************************/

float sine(float angle)
{
    int i;
    float radVal = angle * M_PI / 180.0;
    float result = 0;
    for (i = 1; i < 10; i++)
    {
        result += pow(-1,i-1) * pow(radVal, 2*i - 1) / factorial(2*i - 1);
    }
    return result;
}

float cosine (float angle){
    return 0; /// delete this
}

int main()
{
    char choice;
    while(1){
        system("cls");
        printf("*******************A Scientific Calculator*******************");
        printf("\nChoose the operations\n\n");
        printf("1. Matrix Operation\n");
        printf("2. Solution of non-linear poly equation\n");
        printf("3. Trigonometric calculation\n");
        printf("4. Solution of simultaneous equations\n");
        printf("5. Complex number operations\n");
        printf("6. Exit\n\n");
        printf("Enter your choice: ");
        choice = getche();

        /// do as the user enter
        switch(choice){
        case '1':
            system("cls"); ///clear the window
            printf("Here you will implement matrix operations");
            getch(); //hold the screen until user presses any key
            break;
        case '2': /// calculate the roots of quadratic equation
            system("cls");
            float a, b, c, dTerm, root1, root2;
            printf("Enter a, b and c: ");
            scanf("%f %f %f", &a, &b, &c);
            dTerm = determinantTerm(a, b, c);
            /// if dTerm is positive, real root
            if(dTerm == 0)
            {
                printf("\nThe given equation has real and equal roots\n");
                printf("Both roots are %f", (-b)/(2*a));
            }
            else if(dTerm > 0)
            {
                root1 = (-b + sqrt(dTerm))/(2*a);
                root2 = (-b - sqrt(dTerm))/(2*a);
                printf("\nThe given equation has distinct real roots");
                printf("\nThe roots of the equations are %f and %f\n", root1, root2);
            }
            /// if dTerm is negative, complex root
            else
            {
                float realTerm = -b / (2.0*a);
                float imagTerm = sqrt(abs(dTerm)) / (2*a);
                printf("\nThe given equation has complex conjugate root");
                printf("\nThe roots are: %f +- %fi", realTerm, imagTerm);

            }
            printf("\npress any key to continue ...");
            getch();
            break;
        case '3':
            system("cls");
            char achoice;
            float angle, result;
            printf("Enter the angle: ");
            scanf("%f", &angle);
            printf("\nEnter the choice: \n");
            printf("1. Sine\n");
            achoice = getche();
            switch(achoice)
            {
                case '1':
                    result = sine(angle);
                    printf("\nThe sine of %f is %f", angle, result);
                    break;
            }
            getch();
            break;
        case '4':
            system("cls");
            printf("Solve simultaneous equations");
            getch();
            break;
        case '5':
            system("cls");
            printf("Complex number operations");
            getch();
            break;
        case '6':
            /// exit from the program
            exit(0);
            break;
        default:
            MessageBox(0,"You entered invalid choice, enter only 1 to 6","Warning ",0);
            break;
        }
    }
    return 0;
}

