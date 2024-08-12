#include "my_getenv.h"
#include <stdio.h>

int main()
{
	const char *var_name = "PATH";

	char *value = _getenv(var_name);


	if (value)
	{
		printf("la valeur de %s est : %s\n", var_name, value);
	}

	else
	{
		printf("Variable %s non trouvée\n", var_name);
	}

	return (0);
}
