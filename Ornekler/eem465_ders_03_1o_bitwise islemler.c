#include <stdint.h>

int main(void){
	
	uint32_t a = 0x12345678;
	uint32_t b = 0x1;
	uint32_t c = 0x0;
	
	int m=20,n=15;
	
	// a degiskeninin 15. bitini, diger bitlerini degistirmeden
	// 1 yapan kod:
	a = a | (b<<15);
	
	// a degiskeninin 20. bitini diger bitlerini degistirmeden
	// 0 yapan kod:
	a = a & ~(b<<20);
	
	
	// a degiskeninin 25. bitini diger bitlerini degistirmeden
	// tersleyen kod:
	a = a ^ (b<<25);
	
	// a degiskeninin 15. ve 20. bitleri arasina (dahil) 0x0A sayisini
	// yazan kod
	b = 0x0A;
	c = 0x3F;
	
	a = (a  & ~(c << 15)); // bu islem a'nin 15. ve 20. bitleri arasini 0 yapar
	a = a | (b << 15); 
	
	// m > n olmak uzere a degiskeninin m ile n bitleri arasini (dahil)
// 1 yapan kod
	b = 0x0;
	b = ~b; //tum bitleri 1 olan sayi
	b = (b >> n) << n; //sag taraftaki n biti 0 yapar.
	b = (b << (31-m)) >> (31-m); //sol taraftaki kismi 0 yapar.
	a = a | b;
	
	return 1;
}
