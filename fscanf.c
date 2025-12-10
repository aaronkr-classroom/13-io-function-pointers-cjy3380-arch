#include<stdio.h>

int main(void) {
	int temp;
	FILE* p_file = fopen("nums.txt", "rt");

	if (NULL != p_file) {
		printf("파일이 열렸습니다.");

		while (EOF != fscanf_s(p_file, "%d", &temp)) {
			if (temp % 3 == 0) {
				printf("\n");
			}
			
			printf("%d", temp);

		}
		printf("\n");
	}

	printf("파일의 내용을 읽었습니다");
	fclose(p_file);
	printf("파일이 닫혓습니다");


	return 0;
}