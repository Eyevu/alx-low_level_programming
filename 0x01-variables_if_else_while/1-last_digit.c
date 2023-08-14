n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
			n, n % 10);
	}

	return (0);

}
