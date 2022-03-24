#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *tmp=NULL;
    int heightmap[3][6] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            int a = 0;
            if ((a = getchar()) != '\n')
                heightmap[i][j] = a - 48;
        }
    }
    printf("可以接住的雨水数量为%d\n",trapRainWater(&heightmap));
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 6; j++)
    //     {
    //         int a = 0;
    //         printf("%d ", heightmap[i][j]);
    //     }
    //     printf("\n");
    // }
    system("pause");
    return 0;
}
int trapRainWater(int **heightMap/*, int heightMapSize, int *heightMapColSize*/)
{
    heightMap = (int **)malloc(sizeof(int *) * 3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            int a = 0;
            printf("%d ", heightMap[i][j]);
        }
        printf("\n");
    }
    free(heightMap);
}