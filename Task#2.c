#include <stdio.h>
#include <stdlib.h>

char str[];

void rmSpace(void) {
	int len=strlen(str);
	int first=0;
	int last=0;
	
	for (int i=0;i<len;i++) {
		if (str[i] != 32) {
			first = i;
		}
	}
	for (int i=len-1;i>=0;i--) {
		if (str[i] != 32) {
			last = i;
		}
	}
	for (int i=last;i<=first;i++) {
		printf("%c", str[i]);
	}
}

void main(void) {
	//ÐÓÑÑÊÀß ËÎÊÀËÜ
	system("chcp 1251>nul");
	
	gets(str);
	rmSpace();
	getch();
}
