int tiltsensor = 34;
int buzzer = 5;
int x = 0;
  void setup()
  {
    pinMode(tiltsensor, INPUT);
    pinMode(buzzer, OUTPUT);
    //initialize communication at 9600 bits per second
    Serial.begin(115200);
  }

  void loop()
  {
    x = analogRead(tiltsensor);
    Serial.println( x );
    delay(700);
    if( x>600)
    {
      tone(buzzer,200,1000);
      delay(1000);
    }
    else{
      noTone(buzzer);       
    }
  }
