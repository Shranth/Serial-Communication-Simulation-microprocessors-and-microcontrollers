#include<reg51.h>

#define lcd P2

sbit rs=P1^0;
sbit rw= P1^1;
sbit en= P1^2;

void delay_ms(unsigned int time){
	int i,j;
	for(i=0;i<time;i++);
	for(j=0;j<123;j++);
	
}


		void lcd_cmd(unsigned char m){
			lcd=m;
			rs=0;
			rw=0;
			en=1;
			delay_ms(1);
			en=0;
		}
		
		
		void lcd_data( unsigned char m){
			lcd=m;
			rs=1;
			rw=0;
			en=1;
			delay_ms(1);
			en=0;
			
		}
		
		void lcd_init(void){
			lcd_cmd(0x38);
			delay_ms(1);
			
			lcd_cmd(0x10);
			delay_ms(1);
			
			lcd_cmd(0x01);
			delay_ms(1);
			
			lcd_cmd(0x06);
			delay_ms(1);
			
			lcd_cmd(0x0e);
			delay_ms(1);
		}
		
		
		int main(){
			char ch;

			lcd_init();
			lcd_cmd(0x80);
			
			SCON=0x50;
			TMOD=0x20;
				TH1=253;
			TR1=1;
			
			
while(1){
        
        while(RI == 0);
        ch = SBUF;
        RI = 0; 
        lcd_data(ch);
	
	/*SBUF=ch;
	while(TI==0);
	TI=0;
	*/
	
	
        
   

    }

				
			
		}
			
			
		
		
