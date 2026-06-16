#include<stdio.h>

int main()
{
    int arr[3][3] = {
        {0,-20,30},
        {-40,50,-60},
        {70,-80,90}
    };

    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(arr[i][j] > 0)
            {
                printf("Positive : %d\n", arr[i][j]);
                positive_count++;
            }
            else if(arr[i][j] < 0)
            {
                printf("Negative : %d\n", arr[i][j]);
                negative_count++;
            }
            else
            {
                printf("Zero : %d\n", arr[i][j]);
                zero_count++;
            }
        }
    }

    printf("Positive number count = %d\n", positive_count);
    printf("Negative number count = %d\n", negative_count);
    printf("Zero number count = %d\n", zero_count);

    return 0;
}
