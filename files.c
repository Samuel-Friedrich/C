#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

//	printf("%d\n",argc);
	
//	printf("%s\n",argv[1]);

	char path[255] = "/home/user/C/";
	strcat(path, argv[1]);

	FILE *pF = fopen(path, "r");
	char buffer[255];
	
	if (pF == NULL){
		perror("invalid file");
		return 1;
	}else{
		while(fgets(buffer, 255, pF) != NULL){
			printf("%s", buffer);
		}
	}

	fclose(pF);

	return 0;

}
