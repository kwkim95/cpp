int calculator(int a, int b, char c) // �����Լ� ����
{
	int calc;

	if (c == '+')
	{
		calc = a + b;
	}

	else if (c == '-')
	{
		calc = a - b;
	}

	else if (c == '*')
	{
		calc = a * b;
	}

	else if (c == '/')
	{
		calc = a / b;
	}

	return calc;
}
