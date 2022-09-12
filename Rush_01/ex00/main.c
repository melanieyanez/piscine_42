#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	**ft_init_tab(int *str, int size);
int **myinit_tab(int row, int col);
int **solver(int size, int **result_tab, int *entry_tab);
void print_tab(int size, int **tab);
int **easyFill(int *entry_tab, int **result_tab, int size);
int **comb(int **comb_tab,int *tab, int cn, int size);
void print2dArray(int **tab, int row, int col);
int **createTab(int row, int col);
int line_check(int nb1, int nb2, int *tab);
int checkifcorrect(int **result, int *entry);
void head(int *entry);
int **allPerm();

int main(int argc, char **argv)
{
	int size = 4;
	int* entry_tab = (int*)malloc(16 * sizeof(int));
	//int** result_tab = ft_init_tab("wqqw", size);
	int i;
	int j;
	int **tab;

	if(argc != 2)
	{
		write(1, "Error", 5);
	}
	else
	{
		i = 0;
		j = 0;
		
		while (argv[1][i])
		{
			if(argv[1][i] >= '0' && argv[1][i] <= '9')
			{
				entry_tab[j] = (argv[1][i] - '0');
				printf("%d", entry_tab[j]);
				j++;
			}
			i++;
		}


		tab = createTab(4, 4);
		tab[1][1] = 5;
		tab[2][2] = 6;
		tab[3][3] = 9;
		//print2dArray(tab,4,4);
		int **comb_tab = createTab(24,4);
		int **testtab = createTab(24,4);
		int tab[] = {2,3,1,4};
		//int result[][] = {{1,2,3,4},{2,3,4,1},{3,4,1,2},{4,1,2,3}};
		/*testtab = comb(comb_tab, tab, 0, size);*/
		
		printf("-----TestTab----\n");
		//printf("%d",line_check(4,1, tab));
		head(entry_tab);

		//checkifcorrect(result, entry_tab);
		//print2dArray(testtab,24,4);
		//print_tab(testTab, size);
		//result_tab = init_tab(size);
		//print_tab(size, result_tab);
		
		//print_tab(size, result_tab);
		//easyFill(entry_tab, result_tab, size);
		//print_tab(size, result_tab);
		

		printf("\n");

		//solver(size, result_tab, entry_tab);
		//print_result(size, result_tab);
		//entry_tab = NULL;
		//free(entry_tab);
		/*comb_tab = NULL;
		free(comb_tab);
		printtab = NULL;
		free(printtab);*/
	}

	//free(tab);
	//tab = NULL;
	
	return (0);
}

