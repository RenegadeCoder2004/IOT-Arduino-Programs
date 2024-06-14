int tiltsensor = 34;
  
  void setup()
  {
    pinMode(tiltsensor, INPUT);
    //initialize communication at 9600 bits per second
    Serial.begin(115200);
  }

  void loop()
  {
    int tiltstate= digitalRead(tiltsensor);
    if (tiltstate == 1){
     Serial.println("HIGH");
    }
    else{
     Serial.println("LOW");
    }
//    Serial.println(digitalRead(tiltsensor));
    delay(1000);
  }
