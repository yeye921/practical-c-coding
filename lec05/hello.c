#include <stdio.h>

int main()
{
	signed int siA;
	unsigned int unA;
	signed int sumS;
	unsigned int sumU;

	fscanf(stdin,"%d",&siA);
	fprintf(stdout, "Signed Integer : %d\n", siA);
	unA = siA;
	fprintf(stdout, "unSigned Integer : %u\n", unA);
	fprintf(stdout, "Unsigned Integer percent d : %d\n", unA);
	fprintf(stdout, "Unsigned Integer percent d : %u\n", siA);
	/*
	 * Signed Integer : -1
	 * Unsigned Integer : 4294967295
	 * Unsigned Integer percent d : -1
	 * Signed Integer percent u : 4294967295 
	 */


	fscanf(stdin,"%u",&unA);
	fprintf(stdout, "Unsigned Integer : %u\n", unA);
	siA = unA;
	fprintf(stdout, "Signed Integer : %d\n", siA);

	sumS = siA + unA;
	sumU = siA + unA;

	fprintf(stdout, "sumS %%d %d\n",sumS);
	fprintf(stdout, "sumS %%u %u\n",sumS);
	fprintf(stdout, "sumU %%d %d\n",sumU);
	fprintf(stdout, "sumU %%u %u\n",sumU);
	
}
