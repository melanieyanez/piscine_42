#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void print2dArray(int **tab, int row, int col);
int **createTab(int row, int col);

int column_check(int nb1, int nb2, int nb3, int nb4, int bot1, int bot2, int bot3, int bot4, int **tab)
{
    int	top_view;
	int	top_view2;
	int	top_view3;
	int	top_view4;
	int	bot_view;
	int	bot_view2;
	int	bot_view3;
	int	bot_view4;
	int	i;

	i = 0;
	while (i <4)
	{	
		if (tab[i][0] == 4)
		{
			top_view++;
			break ;
		}
		if (i != 3)
			if (tab[i][0] < tab[i + 1][0])
				top_view++;
		i++;
	}
	i = 0;
	while (i <4)
	{	
		if (tab[i][1] == 4)
		{
			top_view2++;
			break ;
		}
		if (i != 3)
			if (tab[i][1] < tab[i + 1][1])
				top_view2++;
		i++;
	}
	i = 0;
	while (i <4)
	{	
		if (tab[i][2] == 4)
		{
			top_view3++;
			break ;
		}
		if (i != 3)
			if (tab[i][2] < tab[i + 1][2])
				top_view3++;
		i++;
	}
	i = 0;
	while (i <4)
	{	
		if (tab[i][3] == 4)
		{
			top_view4++;
			break ;
		}
		if (i != 3)
			if (tab[i][3] < tab[i + 1][3])
				top_view4++;
		i++;
	}
	// =======================================
	i = 3;
	while (i != -1)
	{	
		if (tab[i][0] == 4)
		{
			bot_view++;
			break ;
		}
		if (i != 0)
			if (tab[i][0] < tab[i - 1][0])
				bot_view++;
		i--;
	}
	i = 3;
	while (i != -1)
	{	
		if (tab[i][1] == 4)
		{
			bot_view2++;
			break ;
		}
		if (i != 0)
			if (tab[i][1] < tab[i - 1][1])
				bot_view2++;
		i--;
	}
	i = 3;
	while (i != -1)
	{	
		if (tab[i][2] == 4)
		{
			bot_view3++;
			break ;
		}
		if (i != 0)
			if (tab[i][2] < tab[i - 1][2])
				bot_view3++;
		i--;
	}
	i = 3;
	while (i != -1)
	{	
		if (tab[i][3] == 4)
		{
			bot_view4++;
			break ;
		}
		if (i != 0)
			if (tab[i][3] < tab[i - 1][3])
				bot_view4++;
		i--;
	}

	if (top_view != nb1 || top_view2 != nb2 || top_view3 != nb3 || top_view4 != nb4)
		return (0);
	if (bot_view != bot1 || bot_view2 != bot2 || bot_view3 != bot3 || bot_view4 != bot4)
		return (0);
	return (1);
}

int line_check(int nb1, int nb2, int nb3, int nb4, int bot1, int bot2, int bot3, int bot4, int *tab)
{
    int	top_view;
	int	top_view2;
	int	top_view3;
	int	top_view4;
	int	bot_view;
	int	bot_view2;
	int	bot_view3;
	int	bot_view4;
	int	i;

	i = 0;
	while (i <4)
	{	
		if (tab[i] == 4)
		{
			top_view++;
			break ;
		}
		if (i != 3)
			if (tab[i] < tab[i + 1])
				top_view++;
		i++;
	}
	i = 0;
	while (i <4)
	{	
		if (tab[i] == 4)
		{
			top_view2++;
			break ;
		}
		if (i != 3)
			if (tab[i] < tab[i + 1])
				top_view2++;
		i++;
	}
	i = 0;
	while (i <4)
	{	
		if (tab[i] == 4)
		{
			top_view3++;
			break ;
		}
		if (i != 3)
			if (tab[i] < tab[i + 1])
				top_view3++;
		i++;
	}
	i = 0;
	while (i <4)
	{	
		if (tab[i] == 4)
		{
			top_view4++;
			break ;
		}
		if (i != 3)
			if (tab[i] < tab[i + 1])
				top_view4++;
		i++;
	}
	// =======================================
	i = 3;
	while (i != -1)
	{	
		if (tab[i] == 4)
		{
			bot_view++;
			break ;
		}
		if (i != 0)
			if (tab[i] < tab[i - 1])
				bot_view++;
		i--;
	}
	i = 3;
	while (i != -1)
	{	
		if (tab[i] == 4)
		{
			bot_view2++;
			break ;
		}
		if (i != 0)
			if (tab[i] < tab[i - 1])
				bot_view2++;
		i--;
	}
	i = 3;
	while (i != -1)
	{	
		if (tab[i] == 4)
		{
			bot_view3++;
			break ;
		}
		if (i != 0)
			if (tab[i] < tab[i - 1])
				bot_view3++;
		i--;
	}
	i = 3;
	while (i != -1)
	{	
		if (tab[i] == 4)
		{
			bot_view4++;
			break ;
		}
		if (i != 0)
			if (tab[i] < tab[i - 1])
				bot_view4++;
		i--;
	}

	if (top_view != nb1 || top_view2 != nb2 || top_view3 != nb3 || top_view4 != nb4)
		return (0);
	if (bot_view != bot1 || bot_view2 != bot2 || bot_view3 != bot3 || bot_view4 != bot4)
		return (0);
	return (1);
}

/*int line_check(int nb1, int nb2, int *tab)
{
    int count1 = 1;
    int count2 = 1;
    int temp = 0;
    int i = 0;

    temp = tab[i];

    while (i < 3)
    {
        if (temp < tab[i + 1])
        {
            count1++;
            temp = tab[i+1];
        }
        i++;
        //printf("Temp : %d", temp);
        //printf("   Count : %d \n", count1);
    }
    i = 3;
    temp = tab[i];
    while (i > 0)
    {
        if (temp < tab[i - 1])
        {
            //printf("NB1 = %d, NB2 = %d TAB %d%d%d%d \n", nb1, nb2, tab[0],tab[1],tab[2],tab[3]);
            count2++;
            temp = tab[i -  1];
        }  
        i--;
    }
    if (count1 == nb1 && count2 == nb2)
    {
        return (1);
    }
    else
    {
        //printf("\nPAS OK NB1 = %d, NB2 = %d TAB %d%d%d%d Count1 %d Count2 %d\n", nb1, nb2, tab[0],tab[1],tab[2],tab[3], count1,count2);
        return (0);
    }
}*/

int checkifcorrect(int **result, int *entry)
{
    int i;
    int j;

    i = 0;
    j = 0;
	
    while (i < 4)
    {
        if (column_check(entry[0], entry[1], entry[2], entry[3], entry[4], entry[5], entry[6], entry[7], result) == 1 && line_check(entry[8], entry[9], entry[10], entry[11], entry[12], entry[13], entry[14], entry[15], result[i]) == 1)
        {
            printf("FINISH");
            return (1);
        }
        else
        {
			printf("ERROR\n");
            return (0);
        }
        i++;
    }
    
    
    
    return (1);
}
int    **permutation(int **result,int *entry)
{
    int all_perm[24][4] ={{4,2,3,1},{4,2,1,3},{4,1,2,3},{4,1,3,2},{4,3,2,1},{4,3,1,2},
    {1,4,3,2},{1,4,2,3},{1,2,4,3},{1,2,3,4},{1,3,4,2},{1,3,2,4},
    {3,4,1,2},{3,4,2,1},{3,1,4,2},{3,1,2,4},{3,2,4,1},{3,2,1,4},
    {2,4,3,1},{2,4,1,3},{2,1,4,3},{2,1,3,4},{2,3,1,4},{2,3,4,1}};
    int j;
    int i;
    int k;
    int l;
    result[0] = all_perm[0];
    result[1] = all_perm[0];
    result[2] = all_perm[0];
    result[3] = all_perm[0];
	print2dArray(result, 4, 4);
	printf("\n==================\n");
    j = 0;
    i = 0;
    while (i < 24)
    {
        while (j < 24)
        {
            while (k < 24)
            {
                while (l < 24)
                {
                    result[0] = all_perm[i];
                    result[1] = all_perm[j];
                    result[2]= all_perm[k];
                    result[3]= all_perm[l];

					//print2dArray(result, 4, 4);

                    if(checkifcorrect(result,entry) == 1)
                    {
                        return (result);
                    }
                    l++;
                }
				l = 0;
                k++;
            }
			k = 0;        
            j++;
        }
		j = 0;
        i++;
    }
	print2dArray(result, 4, 4);
	printf("\n==================\n");
    return (result); //Pas de sol
    
}

void head(int *entry)
{

    int size_entry;
    int i;
    int j;
    int check;
    int nb1;
    int nb2;
    int **result;
    
    printf("\n");
    i = 0;
    j = 0;
    size_entry = 16;
    result = createTab(4,4);
    size_entry = 0;
    check = 1;

    
    permutation(result,entry);
    /*while (i < 4)
    {
        printf("I = %d\n", i);
        nb1 = entry[i+8];
        nb2 = entry[i+12];
        while (j < 24)
        {
            if(line_check(nb1,nb2,all_perm[j]) == 1)
            {
                result[i] = all_perm[j];
            }
            j++;
        }
        j = 0;
        printf("\n---------------------------\n");
        i++;
    }*/
    print2dArray(result, 4,4);
    //checkifcorrect(result, entry);
}
