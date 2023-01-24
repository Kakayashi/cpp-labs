/*
 * GccApplication5.c
 *
 * Created: 2022-05-10 08:26:49
 * Author : Student
 */ 

#include <avr/io.h>
#include  <util/delay.h> 

void count(){
	if(TIFR & (1<<TOV0)){ //sprawdzanei flagi przerwa?
		TCCR0 &= ~((1<<CS02)|(1<<CS01)|(1<<CS00)); //zatrzymanie timera
	}
	PORTA = TCNT0; 
}

int main(void)
{
    /* Replace with your application code */
	DDRB = 0x00; 
	PORTB = 0x01;
	
	DDRA = 0xFF; /*ustawienie pinów steruj?cych diodami na zapis*/
	PORTA = 0x00;
	
	TCCR0 |= ((1<<CS02)|(1<<CS01)|(1<<CS00)); //tryb pracy narastaj?ce zbocze
	
	TCNT0 = 250; //aktualny stan licznika ustawiony na 250
    while (1) 
    {
		_delay_ms(200);
		count();  //wywo?anie funkcji count()
    }
}