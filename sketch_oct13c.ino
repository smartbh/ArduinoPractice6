int piezo = 7;
int freqs[] = {262, 294, 330, 349, 392, 440, 494};

void setup() 
{
  // put your setup code here, to run once:
  pinMode(piezo, OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:

  for(int i=0; i<sizeof(freqs)/sizeof(int); i++)
  {
    tone(piezo, freqs[i], 1000);
    delay(1000);
  }
}
