/*****************************************************
**          leds intermitens 
**    
******************************************************/

//  *********   Includes  *******


//  *********   Variables *******
int led[]={6,7,8,9,10,11,12,13}; // declaro la llista de leds
int temps = 50 ; 
int n = 0;


//  **********  setup
void setup() {
  for (n=0; n<8;n++){
    pinMode (led[n],OUTPUT);
  }  
}


//  **********  loop
void loop() {
  for (n=0;n<8;n++){
    digitalWrite(led[n], HIGH);
    delay (temps);
    digitalWrite(led[n], LOW);
    delay (temps);
    }
   
  for (n=7;n<=0;n--){
    digitalWrite(led[n], HIGH);
    delay (temps);
    digitalWrite(led[n], LOW);
    delay (temps);  
  }
 }

