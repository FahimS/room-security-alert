
Int pir = 7;
Int buzzer = 8;
Int state;
Void setup()
{
pinMode (pir,INPUT);
pinMode (buzzer,OUTPUT);
}
void loop()
{
state = digital Read (pir);
digitalWrite (buzzer,State);
}



