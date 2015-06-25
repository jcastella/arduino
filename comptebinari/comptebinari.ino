/*****************************************************
**          leds comptar binari
**    
******************************************************/

//  *********   Includes  *******


//  *********   Variables *******
int led[]={13,7,8,9,10,11,12,6}; // declaro la llista de leds
int estatLed[]={0,0,0,0,0,0,0,0};
int temps = 500 ; 
int n = 0;
int t = 0;

//  **********  setup
void setup() {
  for (n=0; n<8;n++){
    pinMode (led[n],OUTPUT);
    pinMode (led[n], estatLed[n]);
  }  
}

void sumar1() {
  t=1;
  n=0;
  while ( t==1){
    if (estatLed[n]) {
      estatLed[n]=0;
      digitalWrite(led[n], estatLed[n]);
      n++;}
     else {
      estatLed[n]=1;
      digitalWrite(led[n], estatLed[n]);
        t=0;
      }
  }
}
   
//  **********  loop
void loop() {
  for (n=0;n>255;n++){
    t=1;
    n=0;
    while ( t==1){
      if (estatLed[n]) {
      estatLed[n]=0;
      digitalWrite(led[n], estatLed[n]);
      n++;}
       else {
      estatLed[n]=1;
      digitalWrite(led[n], estatLed[n]);
        t=0;
    delay(temps);
       }    
  }
 }
}
 
