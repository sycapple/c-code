#include <stdio.h>
#define NUM 10
int main()
{
    int candyType[NUM] = {1, 1, 2, 2, 3, 3};
    printf("%d\n", distributeCandies(candyType, 6));
    system("pause");
    return 0;
}
int distributeCandies(int *candyType, int candyTypeSize)
{
    int CandyNum = candyTypeSize / 2; 
    int CandyTypeNum[NUM] = {0};      
    int m = 0;                        
    for (int i = 0; i<candyTypeSize; i++)
    {
        CandyTypeNum[*(candyType + i)]++; 
        if (CandyTypeNum[*(candyType + i)] == 1)
            m++;
    }
    if ((CandyNum / m) < 1)
        return CandyNum;
    else
        return m;
}