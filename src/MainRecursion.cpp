#include "stdafx.h"
#include <stdlib.h>

#include "FunctionHeaders.h"

int main(){
	
	//Check Maze Sample Code
	/*
	int maze[4][3] = {
		{ 0, 0, 1 },
		{ 1, 1, 1 },
		{ 1, 0, 1 },
		{ 1, 0, 1 }
	};

	int m = 4, n = 3;
	int x1 = 3, y1 = 0, x2 = 0, y2 = 2;

	int check=path_exists(&maze[0][0], m, n, x1, y1, x2, y2);
	printf("%d\n", check);
	*/

	//Check NSnipers

	/*
	int n = 4;
	int board[4][4];
	int i = 0, j = 0;
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			board[i][j] = 0;
		}
	}

	if (solve_nsnipers(&board[0][0], n) == 0)
	{
		printf("Solution does not exist");
		return false;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf(" %d ", board[i][j]);
		printf("\n");
	}
	*/

	//Check CountPairs Sample Code 
	/*
	printf("%d\n", count_pairs_wrapper("zzzaz", 5));
	*/

	//Check Steps Sample Code
	/*
	printf("%d\n", get_steps(7));
	*/

	//Check Spiral Sample Code
	
	/*
	int **input_array = (int **)malloc(2 * sizeof(int *));
	for (int i = 0; i < 2; i++)
		input_array[i] = (int *)malloc(2 * sizeof(int));
	
	input_array[0][0] = 3;
	input_array[0][1] = 4;
	input_array[1][0] = 5;
	input_array[1][1] = 6;

	
	int *arr = spiral(2, 2, (int **)input_array);

	for (int i = 0; i < 4; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	*/
	return 0;
}