int led[]={6, 7, 8, 9, 10, 11, 12, 13};
int estatled[8];
int temps = 500;
int n=0;
int t=0;
int m=0;
int numero = 0;

void setup(){
  Serial.begin(9600);
  for (n=0; n<8; n++) {
    pinMode (led[n], OUTPUT);
    estatled[n]=0;
  }
}

void sumar1() {
  t=1;
  n=0;
  while(t==1) {
    if (estatled[n]==1) {
      estatled[n]=0;
      digitalWrite(led[n],0);
      n++; }
      else {
        estatled[n]=1;
        digitalWrite(led[n],1);
        t=0;
      }
  }
}

void loop() {
  numero = 0;
    for (m=0; m=255; m++) {
    Serial.println(numero);
    sumar1();
    numero++;
        delay(temps);
  }
}
