int ledR[] = {A3, A1, 13, 11, 9, 7, 5, 3};
int ledG[] = {A4, A2, A0, 12, 10, 8, 6, 4};

//char ktueek[] = {
//  0xFF, 0x18, 0x24, 0x42, 0x81, 0x00,
//  0x80, 0x80, 0xFF, 0x80, 0x80, 0x00,
//  0xFE, 0x01, 0x01, 0x01, 0xFE, 0x00,
//  0xFF, 0x91, 0x91, 0x91, 0x81, 0x00,
//  0xFF, 0x91, 0x91, 0x91, 0x81, 0x00,
//  0xFF, 0x18, 0x24, 0x42, 0x81, 0x00
//};

char arduino[] = {
  0x7F, 0x90, 0x90, 0x90, 0x7F, 0x00,
  0xFF, 0x90, 0x98, 0x94, 0x63, 0x00,
  0xFF, 0x81, 0x81, 0x81, 0x7E, 0x00,
  0xFE, 0x01, 0x01, 0x01, 0xFE, 0x00,
  0x00, 0x00, 0xFF, 0x00, 0x00, 0x00,
  0xFF, 0x20, 0x10, 0x08, 0xFF, 0x00,
  0x7E, 0x81, 0x81, 0x81, 0x7E, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xFF, 0x81, 0x81, 0x81, 0x7E, 0x00,
  0x7F, 0x90, 0x90, 0x90, 0x7F, 0x00,
  0xC0, 0x20, 0x1F, 0x20, 0xC0, 0x00
};

byte *text;
int cnt = 0;
byte buff[255];
unsigned long lastTime = 0;
int len = 66;
int maxLimit = 20;
bool isRedOn = false, isGreenOn = true;

void setup() {
  // put your setup code here, to run once:

  for (int i = 0; i < 8; i++)
  {
    pinMode(ledR[i], OUTPUT);
    pinMode(ledG[i], OUTPUT);
    digitalWrite(ledG[i], HIGH);
    digitalWrite(ledR[i], HIGH);
  }

  text = (byte *)malloc(len);
  //text = ktueek;
  text = arduino;

  attachInterrupt(0, kesme, RISING);

  Serial.begin(9600);
}

bool started = false;
void kesme()
{
  started = true;
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available())
  {
    byte c = Serial.read();

    if (c == '#')
    {
      while (!Serial.available());
      c = (byte)Serial.read();
      int i = 0;

      while (c != '#')
      {
        buff[i++] = c;
        while (!Serial.available());
        c = Serial.read();
      }

      len = i;
      delete(text);
      text = (byte *)malloc(i);
      //strncpy(text, buff, i - 1);
      for (int j = 0; j < i; j++)
      {
        text[j] = buff[j];
      }

    } else if (c == '+') {
      while (!Serial.available());
      c = Serial.read();
      byte val = 0;

      if (c == 'R')
      {
        while (!Serial.available());
        val = Serial.read();
        isRedOn = val;
        Serial.print(isRedOn);
      } if (c == 'G')
      {
        while (!Serial.available());
        val = Serial.read();
        isGreenOn = val;
        Serial.print(isGreenOn);
      }
    }
  }

  if (started)
  {
    for (int i = 0; i < len; i++)
    {
      for (int j = 0; j < 8; j++)
      {
        if (isGreenOn)
          digitalWrite(ledG[j], !bitRead(text[i], j));
        if (isRedOn)
          digitalWrite(ledR[j], !bitRead(text[i], j));
      }
      delayMicroseconds(400);
    }

    started = false;
  }
}

