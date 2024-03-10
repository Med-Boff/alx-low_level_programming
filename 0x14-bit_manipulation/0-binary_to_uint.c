#include <stdio.h>

unsigned int binary_to_uint(const char *b)
{
unsigned int dec_num = 0; 
int x_2 = 1;

	if (b == NULL)
	{
		return 0;
	}
	else
	{
		while (*b != '\0')
		{
			if (*b != '0' && *b != '1')
			{
				return 0;
			}
			else if (*b == '1')
			{
				dec_num = x_2 + dec_num;
			}
         
			b++;
		 	x_2 = x_2 * 2;
		}
	return dec_num;   
	}
}
