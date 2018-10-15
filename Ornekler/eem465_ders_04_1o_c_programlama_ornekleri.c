#include <stdio.h>

int main(int argc, char *argv[]) {

	char a='a';	
	printf("%c: %d adres:%d\n",a,a,&a);
	
	a=0xff;
	printf("%x: %d",a,a);

	return 0;
}

____________


#include <stdio.h>

typedef unsigned char byte;

int main(int argc, char *argv[]) {

	byte a='a';	
	printf("%c: %d adres:%d\n",a,a,&a);
	
	a=0xff;
	printf("%x: %d",a,a);

	return 0;
}

____________


#include <stdio.h>

int main(int argc, char *argv[]) {

	int a=0xabcd;
	
	printf("%d\n",(unsigned char) a);
	
	printf("%d\n",sizeof(unsigned short));
	printf("%x\n",(unsigned short) 0xabcdef7);

	return 0;
}

______________


#include <stdio.h>

int main(int argc, char *argv[]) {

	int i=10, *p1, *p2;
	
	p1=&i;
	
	printf("i degiskeninin adresi: %d\n",&i);
	printf("p isaretcisinin adresi: %d\n",&p1);
	printf("p isaretcisinde saklanan deger: %d\n",p1);
	printf("p isaretcisinin isaret ettigi yerdeki deger: %d\n",*p1);
	
	return 0;
}


_____________


#include <stdio.h>

int main(int argc, char *argv[]) {

	int i=10, *p1, *p2;
	
	p1=&i;
	p2=p1;
	
	printf("i degiskeninin adresi: %d\n",&i);
	printf("i degiskeninde saklanan deger: %d\n",i);
	
	
	printf("p1 isaretcisinin adresi: %d\n",&p1);
	printf("p1 isaretcisinde saklanan deger: %d\n",p1);
	printf("p1 isaretcisinin isaret ettigi yerdeki deger: %d\n",*p1);
	
	printf("p2 isaretcisinin adresi: %d\n",&p2);
	printf("p2 isaretcisinde saklanan deger: %d\n",p2);
	printf("p2 isaretcisinin isaret ettigi yerdeki deger: %d\n",*p2);
	

	return 0;
}



______________

//local değişkenler
#include <stdio.h>
void f1(int a){
	a=10;
}

int main(int argc, char *argv[]) {

	int a=5;
	f1(a);
	printf("a: %d",a);

	return 0;
}

______________


#include <stdio.h>

int main(int argc, char *argv[]) {

	int a[10]={2,4,6,10}, *p;
	
	printf("a[0]: %d\n",a[0]);	
	printf("a[0]in adresi: %d\n",&a[0]);
	printf("a[1]in adresi: %d\n",&a[1]);
	printf("a: %d\n",a);
	
	p=a; //p=&a[0];
	printf("*p: %d\n",*p);
	printf("p: %d\n",p);
	
	printf("*(p+1): %d\n",*(p+1) );
	printf("p+1: %d\n",p+1);

	return 0;
}