#include<stdio.h>
 
int 
Count(char  *str, char  *substr)
{
	int n = 0;
	char *p, *q;
	
	while (*str)
	{
		p = str;
		q = substr;
		while (*q)
		{
			if (*p == *q)
			{
				++p;
				++q;
			}
			else
			{
				break;
			}
			
		}
		if ('\0' == *q)
		{
			++n;
		}
		++str;
	}
	return n;
}
 
int 
main()
{
	char str[8] = { "aabbaa" }, substr[3] = {"aa"};
	int n = Count(str, substr);
	printf("%s在%s出现的次数为：%d", substr, str, n);
	return 0;
}
