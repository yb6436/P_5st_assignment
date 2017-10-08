#include <stdio.h>

int main()
{
	int A[5][2] = { 0 }, B[2][3] = { 0 };  // 두 행렬
	int C[3][4] = { 0 }, D[4][3] = { 0 };  
	int E[3][2] = { 0 }, F[2][3] = { 0 };
	int G[5][3] = { 0 };
	int i, j, k, w;  // 반복문
				  // 입력
	printf("A행렬 입력\n");
	for (i = 0; i<5; i++)
	{
		for (j = 0; j<2; j++)
		{
			printf("[%d][%d] => ", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	printf("B행렬 입력\n");
	for (i = 0; i<2; i++)
	{
		for (j = 0; j<3; j++)
		{
			printf("[%d][%d] => ", i, j);
			scanf("%d", &B[i][j]);
		}
	}
	printf("C행렬 입력\n");
	for (i = 0; i<3; i++)
	{
		for (j = 0; j<4; j++)
		{
			printf("[%d][%d] => ", i, j);
			scanf("%d", &C[i][j]);
		}
	}
	printf("D행렬 입력\n");
	for (i = 0; i<4; i++)
	{
		for (j = 0; j<3; j++)
		{
			printf("[%d][%d] => ", i, j);
			scanf("%d", &D[i][j]);
		}
	}
	printf("E행렬 입력\n");
	for (i = 0; i<3; i++)
	{
		for (j = 0; j<2; j++)
		{
			printf("[%d][%d] => ", i, j);
			scanf("%d", &E[i][j]);
		}
	}
	printf("F행렬 입력\n");
	for (i = 0; i<2; i++)
	{
		for (j = 0; j<3; j++)
		{
			printf("[%d][%d] => ", i, j);
			scanf("%d", &F[i][j]);
		}
	}
	
	// 행렬의 곱
	for (i = 0; i<5; i++)
	{
		for (j = 0; j<3; j++)
		{
			for (k = 0; k<2; k++)
			{
				for (w = 0; w < 4; w++)
				{
					G[i][j] = G[i][j] + (A[i][k] * B[k][j] * C[j][w] * D[w][j] * E[j][k] * F[k][j]);// D[i][j] = D[i][j] + (A[i][k] * B[k][j])
				}
				  
			}
		}
	}
	// 결과출력
	printf("A행렬\n");
	for (i = 0; i<5; i++)
	{
		for (j = 0; j<2; j++)
		{
			printf("%2d ", A[i][j]);
		}
		printf("\n");
	}
	printf("B행렬\n");
	for (i = 0; i<2; i++)
	{
		for (j = 0; j<3; j++)
		{
			printf("%2d ", B[i][j]);
		}
		printf("\n");
	}
	printf("C행렬\n");
	for (i = 0; i<3; i++)
	{
		for (j = 0; j<4; j++)
		{
			printf("%2d ", C[i][j]);
		}
		printf("\n");
	}
	printf("D행렬\n");
	for (i = 0; i<4; i++)
	{
		for (j = 0; j<3; j++)
		{
			printf("%2d ", D[i][j]);
		}
		printf("\n");
	}
	printf("E행렬\n");
	for (i = 0; i<3; i++)
	{
		for (j = 0; j<2; j++)
		{
			printf("%2d ", E[i][j]);
		}
		printf("\n");
	}
	printf("F행렬\n");
	for (i = 0; i<2; i++)
	{
		for (j = 0; j<3; j++)
		{
			printf("%2d ", F[i][j]);
		}
		printf("\n");
	}
	
	printf("행렬의 곱\n");
	for (i = 0; i<5; i++)
	{
		for (j = 0; j<3; j++)
		{
			printf("%2d ", 18*G[i][j]);
		}
		printf("\n");
	}
	return 0;
}
