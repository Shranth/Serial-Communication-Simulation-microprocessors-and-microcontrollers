#include<reg51.h>

sbit sw1 = P1^0;
sbit sw2 = P1^1;
sbit sw3 = P1^2;
char arr[20]=" Message 1";
char arr1[20]=" Message 2";
char arr2[20]=" Message 3";


void delay(unsigned int n) {
    unsigned int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j <= 123; j++)
{
}	
    }
}

int main() {
    int i=0;
	SCON = 0x50;    // 8bit UART mode, variable baud rate
    TMOD = 0x20;    // Timer 1, mode 2, 8bit reload
    TH1 = 253;      // Load divisor for baud rate (9600 bps)
    TR1 = 1;        // Start Timer1

    while(1) {
        if(sw1==0){
			for(i=0;i<10;i++){
        SBUF = arr[i];
        while(TI == 0);   //transmissioninterrupt
        TI = 0;  
delay(500);				
			}
		}
				
		
		    if(sw2==0){
			for(i=0;i<10;i++){
        SBUF = arr1[i];         
        while(TI == 0);     
        TI = 0;  
delay(500);				
			}
		}
				
		
		  if(sw3==0){
			for(i=0;i<10;i++){
        SBUF = arr2[i];
        while(TI == 0);  
        TI = 0;  
delay(500);				
			}
		}
			break;
        		
        
        
         
			
    }

   
}
