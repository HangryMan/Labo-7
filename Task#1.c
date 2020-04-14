#include <stdio.h>
#include <stdlib.h>

int n, m;
float *ptr;

void mkArr(void) {
	if (!(ptr=calloc(n*m,sizeof(float)))) {
		puts("ћассив не создан.");
		getch(); exit(0);
	}
}

void vvod(void) {
	puts("¬ведите эл-ты матрицы:");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%f", ptr+i*n+j);
			//*(ptr + i*n + j) = rand()%100;
		}			
	}
}

int findPosStr(void) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (*(ptr+i*m+j) < 0) break;
			if (j == m-1) return(i);
		}
	}
}

float sumStr(int i) {
	float sum=0;
	for (int j = 0; j < m; j++) {
		sum += *(ptr+i*m+j);
	}
	return(sum);
}

void subMatrix(float a) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			*(ptr+i*m+j) -= a;
		}			
	}
}

void vivod(void) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%-4.0f", *(ptr+i*m+j));
		}
		puts("");			
	}
}


void main(void) {
	//–”—— јя Ћќ јЋ№
	system("chcp 1251>nul");	
	
	puts("¬ведите размерность матрицы (N x M):");					
	scanf("%d", &n);	
	scanf("%d", &m);			
    
    mkArr();
    vvod();
    subMatrix(sumStr(findPosStr()));
    vivod();
    getch();
}
