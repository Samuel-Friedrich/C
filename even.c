#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

	//printf("%d\n",argc);
	if(argc==2){
		for(int i = 0; i < strlen(argv[1]); i++){
			if(argv[1][i]<'0' || argv[1][i]>'9'){
				printf("only numbers!\n");
				return 0;
			}
		}

		int a = strlen(argv[1]);
		//printf("%c\n",argv[1][a-1]);
		if (((int)argv[1][a-1] % 2) == 0){
			printf("even\n");
			return 0;
		} else{
			printf("odd\n");
			return 0;
		}

		//for(int i = 1; i < argc; i++){
		//	printf(argv[i]);
		//	printf("\n");
		//}
	}
	else{
		printf("1 argument!\n");
		return 0;
	}
}

