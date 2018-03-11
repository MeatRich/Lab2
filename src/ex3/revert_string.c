void Swap(char *left, char *right)
{
    char a = *left;
	*left = *right;
	*right = a;
}

void RevertString(char *str)
{
	int a = strlen(str);
	for (int i = 0; i < a/2; i++){
	    Swap(str + i, str + a - i - 1);
	}
}