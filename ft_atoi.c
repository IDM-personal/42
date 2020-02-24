int ft_atoi(char *str)
{
	int i = 0;
}

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

char *cadgen(char *str)
{
	int i = 0;
	int neg = 0;
	int pos = 0;
	int org = 0;;

	if(str[0] == 32)
		while(str[i] == 32)
			i++;
	if(str[i] == 43 || str[i] == 45)
		while(str[i] == 43 || str[i] == 45)
		{
			if(str[i] == '-')
				neg++;
			if(str[i] == '+')
				pos++;
			i++;
		}
	org = i;
	while(str[i] != '\0')
	{
		if(str[i] < '0' || str[i] > '9')
		{
			str[i] = '\0';
			break;
		}
		i++;
	}
	return (&str[org]);
}

int main()
{
	char str[50] ="          ---++++++++---2136465af48787956464";
	printf("%s",ft_atoi(str));
}

