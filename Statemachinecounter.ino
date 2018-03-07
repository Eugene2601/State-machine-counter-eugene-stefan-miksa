#define F_CPU 8000000UL
#include <avr/io.h>
#include <stdio.h>

#include <util/delay.h>


enum State
{
  S_ZERO,
  S_ONE,
  S_TWO,
  S_THREE
  };
  
enum Event
{
  E_COUNT_U,
  E_COUNT_D 
  };
  int state;
  int event;

int countupdown(int state);
int main(void)
{
  

  DDRB = 0b00001111; //Setting port 0-3 as outputs
  PORTB = 0b00000000;
  int countupdown(int state);
  
  state = S_ZERO;
    
    while (1)
    {
      if(state == S_ZERO){
        PORTB = 0b00000000;
        
      }
      else if(state == S_ONE){
      PORTB = 0b00000001;}
      
    
    else if(state == S_TWO){
      PORTB = 0b00000010;}
      
    
    else if(state == S_THREE){
      PORTB = 0b00000011;}

if(digitalRead(12)!= true && state <= 3)
  {_delay_ms(250);
    state = state+1;}

else if(digitalRead(13) != true && state >= 0){
  _delay_ms(250);
  state = state-1;
  }

    }
}


/***************************************************************************
 */


