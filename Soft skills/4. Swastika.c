#include <stdio.h>

void swastika(int row, int col)
{
for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {

    if (i < row / 2) {

        if (j < col / 2) {

            if (j == 0)
                printf("*");
            else
                printf("  ");
        }

        else if (j == col / 2)
            printf(" *");
        else
        {
            if (i == 0)
                printf(" *");
        }
    }
    else if (i == row / 2)
        printf("* ");
    else {

        if (j == col / 2 || j == col - 1)
        printf("* ");

        else if (i == row - 1) {

        //if (j <= col / 2 || j == col - 1)
        if (j < col / 2)
            printf("* ");
        else
            printf("  ");
        }
        else
        printf("  ");
    }
    }
    printf("\n");
}
}

int main()
{

   int row = 9, col = 7;
   swastika(row, col);

   return 0;
}
