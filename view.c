#define GRID_SIZE 4

void parse_views(char *input, int up[GRID_SIZE], int down[GRID_SIZE], int left[GRID_SIZE], int right[GRID_SIZE]) 
{
	int	index;
	int	i;
	
	index  = 0;
	i = 0;
	while(i < GRID_SIZE)
	{
		up[i] = input[index] - '0';
		index += 2;
		i++;
		
	}
	
	i = 0;
	
	while(i < GRID_SIZE)
	{
		down[i] = input[index] - '0';
		index += 2;
		i++;
		
	}
	
	i = 0;
	
	while(i < GRID_SIZE)
	{
		left[i] = input[index] - '0';
		index += 2;
		i++;
		
	}
	
	i = 0;

	while(i < GRID_SIZE)
	{
		right[i] = input[index] - '0';
		index += 2;
		i++;
		
	}
}
