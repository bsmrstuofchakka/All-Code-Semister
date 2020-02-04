/************************************************************
Mini project on Scientific calculator

This project implements various mathematical operations in C
@author Md. Murad Hossain
************************************************************/

/// list of header files
#include <stdio.h>
#include<conio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
float determinantTerm(float a, float b, float c)
{
    float temp = b*b - 4 * a * c;
    return temp;
}


/*********************************************
calculates the facatorial of given integer
***********************************************/
int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n-1);
}
int matrix_operation(void)
{
    int m,n,a[20][20],b[20][20],i,j,sum[20][20],sub[20][20],opt,tr[20][20],opt1,ch,e,f;
    printf("Addition or Subtraction,Multiplication,transpose of matrices \n\n");
    printf("Enter the no. of rows: ");
    scanf("%d",&m);
    printf("Enter the no. of columns: ");
    scanf("%d",&n);
    printf("Enter the Data Elements of first matrices\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the no. of rows for second matrices: ");
    scanf("%d",&e);
    printf("Enter the no. of columns: ");
    scanf("%d",&f);
    printf("Enter the Data Elements of second matrices\n");
    for(i=0; i<e; i++)
    {
        for(j=0; j<f; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    do
    {
        if(m==e&&n==f)
        {
            printf("Enter 1 for addtion or subtraction of matrices\n");
            if(n==e)
            {
                printf("Enter 2 for multiplication of matrices\n");
            }
            printf("Enter 3 for transpose of first matrices\n");
        }
        else if(m!=n&&n==e)
        {
            printf("Enter 2 for multiplication of matrices\n");
            printf("Enter 3 for transpose of first matrices\n");
        }
        else
        {
            printf("Enter 3 for transpose of first matrices\n");
        }
        scanf("%d",&ch);
        switch(ch)
        {
        case 1 :
            for(i=0; i<m; i++)
            {
                for(j=0; j<n; j++)
                {
                    sum[i][j]=a[i][j]+b[i][j];
                    sub[i][j]=a[i][j]-b[i][j];
                }
            }
            printf("Enter 1 for Addition or 2 for Subtraction: ");
            scanf("%d",&opt);
            switch(opt)
            {
            case 1 :
                printf("The resultant matrices is :\n");
                for(i=0; i<m; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        printf("%3d",sum[i][j]);
                    }
                    printf("\n");
                }
                break;
            case 2 :
                printf("The resultant matrices is :\n");
                for(i=0; i<m; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        printf("%3d",sub[i][j]);
                    }
                    printf("\n");
                }
            }
            break;
        case 2 :
            printf("The resultant matrices is : \n");
            int k;
            for(i=0; i<m; i++)
            {
                for(j=0; j<f; j++)
                {
                    sum[i][j]=0;
                    for(k=0; k<m; k++)
                    {
                        sum[i][j]+=a[i][k]*b[k][j];
                    }
                    printf("%d\t",sum[i][j]);
                }
                printf("\n");
            }
            break;
        case 3 :
            for(i=0; i<m; i++)
            {
                for(j=0; j<n; j++)
                {
                    tr[j][i]=a[i][j];
                }
            }
            printf("The resultant matrices is :\n");
            for(i=0; i<n; i++)
            {
                for(j=0; j<m; j++)
                {
                    printf("%3d",tr[i][j]);
                }
                printf("\n");
            }

            break;
        }
    }
    while(ch>0);
    printf("\npress any key to continue ...");
    getch();
}
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
float cosine (float angle)
{
    int i;
    float radVal,result;
    radVal=angle*M_PI/180.0;
    result=cos(radVal);
    return(result);
}
float tangent(float angle)
{
    int i;
    float radVal,result;
    radVal=angle*M_PI/180.0;
    result=tan(radVal);
    return(result);
}

int base_power(int n)
{
    int i,a,mul=1;
    printf("PLEASE ENTER THE POWER NUMBER:  \n");
    scanf("%d",&a);
    for(i=a; i>0; i--)
        mul=mul*n;
    printf("THE OUTPUT POWER %d OF BASE %d IS :%d   ",a,n,mul);
}
int main()
{
    int n;
    char choice;
    while(1)
    {
        system("cls");
        printf("*******************A Scientific Calculator*******************");
        printf("\nChoose the operations\n\n");
        printf("1. Matrix Operation\n");
        printf("2. Solution of non-linear poly equation\n");
        printf("3. Trigonometric calculation\n");
        printf("4.factorial number \n");
        printf("5.Determine  power of base \n");
        printf("6. Exit\n\n");
        printf("Enter your choice: ");
        choice = getche();
        /// do as the user enter
        switch(choice)
        {
        case '1':
            system("cls");
            matrix_operation();
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
            printf("Enter the angle: \n");
            scanf("%f", &angle);
            printf("\nEnter the choice: \n");
            printf("1. Sine\n");
            printf("2.Cosine\n");
            printf("3.tangent\n");
            achoice = getche();
            switch(achoice)
            {
            case '1':
                result = sine(angle);
                printf("\nThe sine of %f is %f", angle, result);
                printf("\nplease press any key to continue....");
                break;
            case '2':
                result=cosine(angle);
                printf("\nThe cosine of %f is %f", angle, result);
                printf("\nplease press any key to continue....");
                break;

            case '3':
                result=tangent(angle);
                printf("\nThe tangent of %f is %f", angle, result);
                printf("\nplease press any key to continue....");
                break;
            }
            getch();
            break;
        case '4':
            system("cls");
            printf("\nplease press any number of determining of factorial:  ");
            scanf("%d",&n);
            printf("\nvalue of factorial %d :%d\n",n,factorial(n));
            printf("\nplease press any key to continue....");
            getch();
            break;
        case '5':
            system("cls");
            printf("PLEASE ENTETR THE BASE NUMBER: \n");
            scanf("%d",&n);
            base_power(n);
            printf("\nplease press any key to continue....");
            getch();
            break;


        case '6':
            /// exit from the program
            exit(0);
            break;
        default:
            MessageBox(0,"You entered invalid choice, enter only 1 to 5","Warning ",0);
            break;
        }
    }
    return 0;
}

