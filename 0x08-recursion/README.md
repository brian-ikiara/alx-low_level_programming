int rec_func(int par)
{
	if (par < 0)
	{
		return (0);
	}
	printf("Recursion!!! %d\n", par);
	par--;

	return (par);
}

int main(void)
{
	int num = 69;

	rec_func(num);

	return (0);
}