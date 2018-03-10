#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("This is a basic calculator which only evaluates two numbers.\nUse the following syntax:\n + for addition\n - for subtraction\n * or x or X for multiplication\n / for division\nNOTE: Program will crash if format isn't maintained please use the format (number)(operator)(number)\n");
    char c='0';
    double x,y;
    do
    {

        char slist='0';
        printf("Calculator is Ready for input\a\n");
        scanf(" %lf", &x);
        scanf(" %c", &c);
        scanf(" %lf", &y);
        switch(c)
        {
        case '+' :
            printf("%.2lf\n", x+y);
            break;
        case '-' :
            printf("%.2lf\n", x-y);
            break;
        case '*' :
            printf("%.2lf\n", x*y);
            break;
        case '/' :
            printf("%.2lf\n", x/y);
            break;
        default :
            printf("ERORR!\nPlease use given syntax. To see list again press l. Press c to continue.\n");
            scanf(" %c", &slist);

            if (slist == 'l')
                {
                    printf("This is a basic calculator\nUse:\n + for addition\n - for subtraction\n * or x or X for multiplication\n / for division\n");
                    slist='0';
                }
        }
    }while (1==1);
    return 0;
}
