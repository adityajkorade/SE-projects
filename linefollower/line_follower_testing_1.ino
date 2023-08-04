void setup()
{
pinMode(10,OUTPUT); 
pinMode(11,OUTPUT); 
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
pinMode(2,INPUT);
pinMode(3,INPUT);

}

void loop() {
  int l=digitalRead(2);//left sensor
  int r=digitalRead(3);//right sensor
  if(l==0  and r==0)
  {
    digitalWrite(13,1);
    digitalWrite(12,0);
    digitalWrite(11,1);
    digitalWrite(10,0);
  }
  else if(l==1 and r==0)
  {
    digitalWrite(13,0);
    digitalWrite(12,1);
    digitalWrite(11,1);
    digitalWrite(10,0);
  }
  else if(l==0 and r==1)
  {
    digitalWrite(13,1);
    digitalWrite(12,0);
    digitalWrite(11,0);
    digitalWrite(10,1);
  }
  else if(l==1 and r==1)//stop
  {
    digitalWrite(13,0);
    digitalWrite(12,0);
    digitalWrite(11,0);
    digitalWrite(10,0);
  }
}
