#include<stdio.h>

void bar1bx(void){
	for(int i=1;i<=17;i++){
		printf(".bar#b%d{\n    margin-left:%dpx;\n}\n",i,55+44*i );
	}
}




void main(void){
	bar1bx();
}