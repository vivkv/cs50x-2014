cs50x-2014
==========


#include<cs50.h>
#include<stdio.h>
int main(void)
{
	int height, i, j, k;
	do{
	here: printf("Height: ");
		height = GetInt();
		if (height>23)
		{
			goto here;
		}
		else
	
	{

			for (i = 0; i<height; i++)
			{
				for (j = 0; j <= (height - (i + 2)); j++)
				{
					printf(" ");
				}
				for (k = 0; k <= i + 1; k++)
				{
					printf("#");
				}

				printf("\n");
			}
		}
	} while (!(height >= 0) && (height <= 23));
}
