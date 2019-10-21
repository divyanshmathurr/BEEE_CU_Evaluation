

void setup(){
  int i;
  for(i=0;i<6;++i)
  {
    pinMode(i,OUTPUT);
    digitalWrite(i,HIGH);
  }

  pinMode(6, INPUT);
}

void loop(){
int i, button_val;
  button_val=digitalRead(6);
  if(button_val== HIGH)
  {
    for(i=0;i<6;++i)
    {
      digitalWrite(i,HIGH);
    }
    delay(500);
    for(i=0;i<6;++i)
    {
      digitalWrite(i,LOW);
    }
  }
  else
  {
    for(i=0;i<6;++i)
    {
      digitalWrite(i,HIGH);
    }
    delay(1000);
    for(i=0;i<6;++i)
    {
      digitalWrite(i,LOW);
    }
  }

  
  
}