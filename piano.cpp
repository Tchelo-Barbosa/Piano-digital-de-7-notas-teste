//variavel
  int DO = 2;
  int RE = 3;
  int MI = 4;
  int FA = 5;
  int SOL = 6;
  int LA = 7;
  int SI = 8;
  int Buzzer = 11;

  void setup()
{
    
//conectando
  pinMode( DO, INPUT);
  pinMode( RE, INPUT);
  pinMode( FA, INPUT);
  pinMode( MI,INPUT);
  pinMode( SOL, INPUT);
  pinMode( LA, INPUT);
  pinMode( SI,INPUT);
  pinMode(Buzzer, OUTPUT);

}

void loop()
  
{
  
//variavel
  int bot1 = digitalRead(DO);
  int bot2 = digitalRead(RE);
  int bot3 = digitalRead(MI);
  int bot4 = digitalRead(FA);
  int bot5 = digitalRead(SOL);
  int bot6 = digitalRead(LA);
  int bot7 = digitalRead(SI);
  
//codando
  if (bot1 == 1){
  tone(Buzzer,261,100);
  }
  if (bot2 == 1){
  tone(Buzzer,293,100);
  }
  if (bot3 == 1){
  tone(Buzzer,329,100);
  }
  if (bot4 == 1){
  tone(Buzzer,349,100);
  }
  if (bot5 == 1){
  tone(Buzzer,392,100);
  }
  if (bot6 == 1){
  tone(Buzzer,440,100);
  }
  if (bot7 == 1){
  tone(Buzzer,493,100);
  }
  delay(10);
  }
