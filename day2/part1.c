#include<stdio.h>
#include<string.h>


int main(){
	char line[256];
	int dbl = 0;
	int trpl = 0;
	int lnum = 1;

	FILE * file = fopen("input" , "r");
	while(fgets(line , sizeof(line), file)) {
		int *seen = (int *)malloc(26 * sizeof(int));
		memset(seen, 0 , 26 * sizeof(int));
		int a;
		int dbls_seen = 0;
		int trpls_seen = 0;
		for(a=0; line[a] != NULL; a++){
			char letter = line[a];
			switch(letter) {
				case 'a':
					seen[0]++;
					break;
				case 'b':
					seen[1]++;
					break;
				case 'c':
					seen[2]++;
					break;
				case 'd':
					seen[3]++;
					break;
				case 'e':
					seen[4]++;
					break;
				case 'f':
					seen[5]++;
					break;
				case 'g':
					seen[6]++;
					break;
				case 'h':
					seen[7]++;
					break;
				case 'i':
					seen[8]++;
					break;
				case 'j':
					seen[9]++;
					break;
				case 'k':
					seen[10]++;
					break;
				case 'l':
					seen[11]++;
					break;
				case 'm':
					seen[12]++;
					break;
				case 'n':
					seen[13]++;
					break;
				case 'o':
					seen[14]++;
					break;
				case 'p':
					seen[15]++;
					break;
				case 'q':
					seen[16]++;
					break;
				case 'r':
					seen[17]++;
					break;
				case 's':
					seen[18]++;
					break;
				case 't':
					seen[19]++;
					break;
				case 'u':
					seen[20]++;
					break;
				case 'v':
					seen[21]++;
					break;
				case 'w':
					seen[22]++;
					break;
				case 'x':
					seen[23]++;
					break;
				case 'y':
					seen[24]++;
					break;
				case 'z':
					seen[25]++;
					break;
				default:
					break;
			};
		}
		int b;
		for(b=0; b < 26;b++){
			if(seen[b] == 2){
				dbls_seen++;
			}
			if(seen[b] == 3){
				trpls_seen++;
			}
		}
		if(dbls_seen > 0)dbl++;
		if(trpls_seen > 0)trpl++;
		free(seen);
	}
	int prdt;
	prdt = dbl * trpl;
	printf("There is %i lines with doubles\n", dbl);
	printf("There is %i lines with triples\n", trpl);
	printf("%i x %i = %i", dbl, trpl, prdt);
	printf(" is the checksum \n", prdt);
	return 0;
}
