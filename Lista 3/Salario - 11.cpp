#include<stdio.h>
int main (){
	int sa;
	scanf ("%d", &sa);
	if (sa <= 1247)
	{
		sa = sa / 100 * 8;
	}
	else
	{
		if (sa <= 2079)
		{
			sa = sa / 100 * 9;
		}
		else
		{
			if (sa <= 4159)
			{
				sa = sa / 100 * 11;
			}
			else
			{
				sa = sa - sa + 468;
			}
		}
	}
	printf ("%d", sa);
}
