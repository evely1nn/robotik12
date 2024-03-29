// C++ code
//
void setup()
{
for (int i=2;i<=8;i++) pinMode(i, OUTPUT);
}

void loop()
{
  sifir(); delay(1000);
 
}

void sifir() {
digitalWrite(2, 1); //a
digitalWrite(3, 0); //b
digitalWrite(4, 0); //c
digitalWrite(5, 0); //d
digitalWrite(6, 1); //e
digitalWrite(7, 1); //f
digitalWrite(8, 0); //
}