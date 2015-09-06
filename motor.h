//use only when motor functions are required
//contains only port initialisation and delay function

/* The connection to motor is as follows 
    LEFT_MOTOR_FORWARD : PIN2
    LEFT_MOTOR_BACKWARD : PIN1
    RIGHT_MOTOR_FORWARD : PIN4
    RIGHT_MOTOR_BAVKWARD : PIN3
 */
//CHANGE VALUE HERE AS REQUIRED
#define CPORT PORTD

void front(int del){
 //--IMPORTANT-- verify motor connection matches with the program
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
