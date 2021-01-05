int calculator(int a, int b, char c) // 계산기함수 정의
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
