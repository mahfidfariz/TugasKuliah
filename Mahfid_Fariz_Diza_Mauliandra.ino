int LED = 13;
int Tombol = 2;
boolean LEDHIDUP = false;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(Tombol, INPUT_PULLUP);
}

void loop() {
  int kondisi = digitalRead(Tombol);

  if(kondisi==LOW)
  {
    delay(50);
    LEDHIDUP =! LEDHIDUP;
    digitalWrite(LED, LEDHIDUP);
  }
  
}
