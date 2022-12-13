#define SWP(a, b, c){ c t; t = *a; *a = *b; *b = t;}

int	main()
{
	int a = 0;
	int b = 7;
	SWP(&a, &b, int);
	return (a);
}