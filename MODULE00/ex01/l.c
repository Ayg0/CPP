int	main()
{
	float	i;

	i = 3.2;
	char *c;
	c = &i;
	printf("%d\n", c[0]);
	printf("%d\n", c[1]);
	printf("%d\n", c[2]);
	printf("%d\n", c[3]);
}