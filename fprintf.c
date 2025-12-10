#include<stdio.h>

int main(void) {

	char* string = "0x0";
	short int data = 0x0;

	int  num[6] = { 410, 234, 34, 23, 45,12 };
	FILE* p_file = fopen("nums.txt", "wt");
	if (NULL != p_file) {
		for (int i = 412; i < 431; i++) {
			if (i % 3 == 0) {
				fprintf(p_file, "\n");
			}
			fprintf(p_file, "%d", i);
		}
		
		
		printf("파일 내용을 이렇게 썼어요");
		fclose(p_file);
	}

	return 0;
}