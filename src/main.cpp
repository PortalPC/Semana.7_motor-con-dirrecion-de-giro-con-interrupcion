#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#define F_CPU 16000000UL

volatile uint8_t estado = 0;

int main(void){
DDRD |= ( 1 << PD6)|(1<<PD7);
PORTD &= ~((1<< PD6) | (1<<PD7));

DDRD &= ~((1<<PD2)) | (1<<PD2);
PORTD |= (1<<PD2);

EICRA |= (1<<ISC01);
EIMSK |= (1<<INT0);

sei();

while(1){
  switch (estado){
    case 0:

    PORTD &= ~((1<<PD6)|(1<<PD7));
    break;
    case 1:
  }
}
}