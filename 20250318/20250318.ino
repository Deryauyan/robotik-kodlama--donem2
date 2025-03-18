int b=2;
void setup( ) {
  pinMode(b,OUTPUT);

 

}

void loop() {
 tone(b,50);
 delay();
 noTone(b);
 delay(300.);
 

}
