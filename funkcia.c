char* str_cat(char* s1, char* s2)
{
	int N = 0;
	char *q = s1, *w = s2;
	for (; *q; q++) N++; q = s1;
	for (; *w; w++) N++; w = s2

		char* dest = malloc(N + 1), *iter = dest;

	for (; *q; q++, iter++) *iter = *q;
	for (; *w; w++, iter++) *iter = *w;

	*iter = '\0';
	return dest;
}
