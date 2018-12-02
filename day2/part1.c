#include<stdio.h>
#include<string.h>

int main(){
	FILE * file = fopen("input", "r");
	char line[256];
	int a = 0;
	int b = 0;
	int num = 1;

	while(fgets(line , sizeof(line), file)) {
		int x;
		int d = 0;
		int t = 0;	
		for(x=0; line[x] != NULL; x++) {
			int y;
			int z = 1;
			for(y=x + 1; line[y] != NULL; y++){
				if(line[y] == line[x]){
					z++;
				}
				if(z == 2 && d != 1){
					printf("%c appears two times in line %i\n", line[x], num);
					a++;
					d = 1;
				}
				if(z == 3 && t != 1){
					printf("%c appears three times in line %i\n", line[x], num);
					b++;
					t = 1;
				}
			}
		}
		num++;
	}
	int prdt = a * b;
	printf("%i is the checksum \n", prdt);
	return 0;
}
