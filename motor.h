//use only when motor functions are required
//contains only port initialisation and delay function

//CHANGE VALUE HERE AS REQUIRED
#define CPORT PORTD


void front(int del){
 
 CPORT = 0b00001010;
 _delay_ms(del);

}

void back(int del){

   CPORT = 0b00000101;
   _delay_ms(del);
}

void left(int del){
  
   CPORT = 0b00000110;
   _delay_ms(del);
}

void right(int del){

   CPORT = 0b00001001;
   _delay_ms(del);

}
