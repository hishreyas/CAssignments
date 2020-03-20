/*to store info of person as pancard number or aadhaar card number using union, ask user choice betn the two*/

#include <stdio.h>
#include <string.h>

typedef union card{
	char aadhaarno[12], pancardno[10];
}card;

void main(){
	int ch;
	card ca;
	printf("Enter your choice:\n1. Aadhaar Card\n2. Pan Card\n");
	scanf("%d", &ch);
	getchar();
	switch(ch){
		case 1:
		puts("Enter Aadhaar Card no.:");
		gets(ca.aadhaarno);
		break;
		case 2:
		puts("Enter Pan Card no.:");
		gets(ca.pancardno);
		break;
	}
}
