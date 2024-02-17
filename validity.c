int	validate_input(char *input)
{
	int	count;
	int	i;

	while(input[i])
	{
		if(input[i] < '1' || input[i] > '4')
			return(0);
		while(input[i] == ' ')
		{
			i++;
			if(input[i] >= '1' && input[i] <= '4')
			{
				count++;
			}
		}
		i++;
	}
	count++;

	return count == 16;
}
