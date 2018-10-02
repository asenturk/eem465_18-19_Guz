#include "Board_LED.h"                  // ::Board Support:LED

void delay(void){
int i;
	for(i=0;i<1000000;i++);
}

int main(void){
int i;

LED_Initialize();

for(;;){
	for(i=0;i<4;i++){
		LED_On(i);
		delay();
		LED_Off(i);
		delay();
	}
}

	return 1;
}

___________________


#include "Board_LED.h"                  // ::Board Support:LED

void delay(void){
int i;
	for(i=0;i<1000000;i++);
}

int main(void){
int i;

LED_Initialize();

for(;;){	
	for(i=0;i<4;i++){
		LED_On(i);
		delay();
		LED_Off(i);
		//delay();
	}
}

	return 1;
}

___________________


#include "Board_LED.h"                  // ::Board Support:LED

void delay(void){
int i;
	for(i=0;i<1000000;i++);
}

int main(void){
int i;

LED_Initialize();

	for(;;){
		
		LED_On(0);
		LED_On(2);
		delay();
		LED_Off(0);
		LED_Off(2);
		
		LED_On(1);
		LED_On(3);
		delay();
		LED_Off(1);
		LED_Off(3);
	}

	return 1;
}

___________________


#include "Board_LED.h"                  // ::Board Support:LED
#include "Board_Buttons.h"              // ::Board Support:Buttons

int main(void){
	LED_Initialize();
	Buttons_Initialize();
	while(1){
		if(Buttons_GetState()){
			LED_On(3);
		}else{
			LED_Off(3);
		}
}
	
	return 1;
}


___________________


#include "Board_LED.h"                  // ::Board Support:LED
#include "Board_Buttons.h"              // ::Board Support:Buttons


void delay(void){
	int i;
	for(i=0;i<1000000;i++);
}

int main(void){
	LED_Initialize();
	Buttons_Initialize();
	while(1){
		if(Buttons_GetState()==1){	
			LED_On(3);
			delay();
			LED_Off(3);
			delay();
		}
}
	
	return 1;
}
#include "Board_LED.h"                  // ::Board Support:LED
#include "Board_Buttons.h"              // ::Board Support:Buttons


void delay(void){
	int i;
	for(i=0;i<1000000;i++);
}

int main(void){
	LED_Initialize();
	Buttons_Initialize();
	while(1){
		if(Buttons_GetState()==1){	
			LED_On(3);
			delay();
			LED_Off(3);
			delay();
		}
}
	
	return 1;
}

___________________