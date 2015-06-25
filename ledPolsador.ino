/*****************************************************
**          ledPolsador
** posador connectat a pin 4 obre i tanca led connectat
** pin 2
******************************************************/

//  *********   Includes  *******


//  *********   Variables *******


//  **********  setup
void setup() {
  pinMode(2, OUTPUT);
  pinMode(4, INPUT);
}  


//  **********  loop
void loop() {
  if(digitalRead(4)) {
    digitalWrite(2, HIGH);
  }else{
     digitalWrite(2, LOW);
  } 
} 
