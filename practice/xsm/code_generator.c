#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	FILE *target;
	target = fopen(argv[1],"w");
	fprintf(target,"%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
	fprintf(target,"BRKP\nMOV SP,4096\n");
	fprintf(target,"MOV R4,0\n");
	fprintf(target,"MOV R0,7\nPUSH R4\nPUSH R0\nMOV R0,-1\nPUSH R0\nMOV R0,4096\nPUSH R0\nPUSH R0\nPUSH R0\nINT 6\nPOP R0\nPOP R0\nPOP R0\nPOP R0\nPOP R0\nPOP R4\nMOV R3,[4096]\n");
	fprintf(target,"JZ R3,2102\n");
	fprintf(target,"ADD R4,R3\n");
	fprintf(target,"JMP 2062\n");
	fprintf(target,"MOV R2,5\n");
	fprintf(target,"PUSH R2\n");
	fprintf(target,"MOV R2,-2\n");
	fprintf(target,"PUSH R2\n");
	fprintf(target,"PUSH R4\n");
	fprintf(target,"PUSH R0\n");
	fprintf(target,"PUSH R0\n");
	fprintf(target,"INT 7\n");
	fprintf(target,"POP R0\nPOP R0\nPOP R0\nPOP R0\nPOP R0\n");
	fprintf(target,"MOV R2,10\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\n");
	fprintf(target,"INT 10\n");
	fclose(target);
	return 0;
}
