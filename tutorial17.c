#include <stdio.h>

int main()
{
    // label:
    // printf("we are inside label");
    // goto end;
    // printf("Hello World\n");
    // goto label;
    // end:
    // printf("we ate at the end of label");
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("enter the number . entet 0 to exit\n");
            scanf("%d", &num);
            if (num == 0)
            {
               goto end;
            }
        }
    }
end:
    return 0;
}

// some thing we are going to discuss in this place to understatnt and go to there and have some space to underastatd and go to there to have some fun thanks your.int