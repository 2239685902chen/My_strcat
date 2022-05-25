#include <stdio.h>
#include <assert.h>
void My_strcat(char* q, char* w)
{
	assert(*q && *w);
	while (*q)
	{
		q++;
	}
	while (*w)
	{
		*q = *w;
		q++;
		w++;
	}
	*q = *w;
}
int main()
{
	char q[256] = "chensongyuan";
	char w[] = "nihao";
	My_strcat(q, w);
	printf("%s\n", q);
	return 0;
}