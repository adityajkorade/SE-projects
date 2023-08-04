int dataPinRow= A1;
int clockPinRow= 13;
int latchPinRow= A0;

int dataPinCol= 3;
int clockPinCol= 5;
int latchPinCol=4;

byte A[1][8]={
  B00111100,
  B01100110,
  B01100110,
  B01111110,
  B01111110,
  B01100110,
  B01100110,
  B01100110};
int timer = 100;
byte gndData=00000001;
byte gndDataFinal=0;


void setup() {
pinMode(dataPinRow,OUTPUT);
pinMode(clockPinRow, OUTPUT);
pinMode(latchPinRow, OUTPUT);

pinMode(dataPinCol, OUTPUT);
pinMode(clockPinCol, OUTPUT);
pinMode(latchPinCol, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
for ( byte i=0; i<1; i++)
{
    for (byte j=0; j<=7; j++)
  {
    byte font=A[i][j];
    byte gndDataFinal = gndData<<j;
    byte RowData=~gndDataFinal;
    digitalWrite(latchPinRow, LOW);
    shiftOut(dataPinRow, clockPinRow, MSBFIRST, RowData);
    digitalWrite(latchPinRow,HIGH);

    
    {
      digitalWrite (latchPinCol, LOW);
      shiftOut(dataPinCol, clockPinCol, MSBFIRST, font);
      digitalWrite (latchPinCol, HIGH);
      
    }
    delay (timer);
  }
}
}
