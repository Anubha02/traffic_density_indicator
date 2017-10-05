#include<avr/io.h>
#include<util/delay.h>

#define R1 PC0
#define Y1 PC1
#define G1 PC2

#define R2 PC3
#define Y2 PC4
#define G2 PC5

#define R3 PD0
#define Y3 PD1
#define G3 PD2

#define R4 PD3
#define Y4 PD4
#define G4 PD5

int main(void)
{
	
DDRC=0XFF;
DDRD=0XFF;
DDRB=0X00;

PORTC=0X00;
PORTD=0X00;

while(1)
{
if(PINB==0b00000001)
{
	PORTC|=(1<<G1);
	PORTC|=(1<<Y2);
	PORTD|=(1<<R3);
	PORTD|=(1<<R4);
}

else if(PINB==0b00000010)
{
	PORTC|=(1<<R1);
	PORTC|=(1<<G2);
	PORTD|=(1<<Y3);
	PORTD|=(1<<R4);
}
else if(PINB==0b00000100)
{
	PORTC|=(1<<R1);
	PORTC|=(1<<R2);
	PORTD|=(1<<G3);
	PORTD|=(1<<Y4);
}
else if(PINB==0b00001000)
{
	PORTC|=(1<<Y1);
	PORTC|=(1<<R2);
	PORTD|=(1<<R3);
	PORTD|=(1<<G4);
}
else if((PINB==0b00000001)&&(PINB==0b00010000))
{
	PORTC|=(1<<G1);
	PORTC|=(1<<Y2);
	PORTD|=(1<<R3);
	PORTD|=(1<<R4);
	_delay_ms(100000);
}

else if((PINB==0b00000010)&&(PINB==0b00100000))
{
	PORTC|=(1<<R1);
	PORTC|=(1<<G2);
	PORTD|=(1<<Y3);
	PORTD|=(1<<R4);
	_delay_ms(100000);
}

else if((PINB==0b00000100)&&(PINB==0b01000000))
{
	PORTC|=(1<<R1);
	PORTC|=(1<<R2);
	PORTD|=(1<<G3);
	PORTD|=(1<<Y4);
	_delay_ms(100000);
}
else if((PINB==0b00001000)&&(PINB==0b10000000))
{
	PORTC|=(1<<Y1);
	PORTC|=(1<<R2);
	PORTD|=(1<<R3);
	PORTD|=(1<<G4);
	_delay_ms(100000);
}
else
{  
	PORTC=0X00;
	PORTD=0X00;
	PORTC|=(1<<G1);
	PORTC|=(1<<Y2);
	PORTD|=(1<<R3);
	PORTD|=(1<<R4);
	_delay_ms(50000);

  PORTC=0X00;
  PORTD=0X00;
  PORTC|=(1<<R1);
  PORTC|=(1<<G2);
  PORTD|=(1<<Y3);
  PORTD|=(1<<R4);
  _delay_ms(50000);
  
     PORTC=0X00;
     PORTD=0X00;
	PORTC|=(1<<R1);
	PORTC|=(1<<R2);
	PORTD|=(1<<G3);
	PORTD|=(1<<Y4);
	_delay_ms(50000);
 
	 PORTC=0X00;
	 PORTD=0X00;
	PORTC|=(1<<Y1);
	PORTC|=(1<<R2);
	PORTD|=(1<<R3);
	PORTD|=(1<<G4);
	_delay_ms(50000);
}
	
}
}
