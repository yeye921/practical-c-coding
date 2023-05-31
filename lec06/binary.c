#include <stdio.h>

int main()
{
	int i;
	int in_a;
	fscanf(stdin,"%d",&in_a);

	fprintf(stdout,"%d: ",in_a);
	for(i = 31; i>=0; i--)
	{
		fprintf(stdout,"%d", ((in_a>>i) & 1));
		if(i%4 == 0)
			fprintf(stdout," ");
	}
	fprintf(stdout,"\n");
}
