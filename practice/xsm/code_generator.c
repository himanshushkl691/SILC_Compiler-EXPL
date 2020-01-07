#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	FILE *target;
	target = fopen(argv[1],"w");
	fclose(target);
	return 0;
}
