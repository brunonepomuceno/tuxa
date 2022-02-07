#include <Adafruit_NeoPixel.h>

int fullPixelsRight = 22;
int halfPixelsRight = 11;

int fullPixelsLeft = 22;
int halfPixelsLeft = 11;

int pinRight = 13;
int pinLeft = 12;

int pixelFormatRight = NEO_GRB + NEO_KHZ800;

int pixelFormatLeft = NEO_GRB + NEO_KHZ800;

int delayVal = 1000000000;

Adafruit_NeoPixel*pixelsRight;
Adafruit_NeoPixel*pixelsLeft;

void setup()
{
  pixelsRight = new Adafruit_NeoPixel(fullPixelsRight, pinRight, pixelFormatRight);
  pixelsRight->begin();
  pixelsRight->setBrightness (255);

  pixelsLeft = new Adafruit_NeoPixel(fullPixelsLeft, pinLeft, pixelFormatLeft);
  pixelsLeft->begin();
  pixelsLeft->setBrightness (255);

  
}

void loop()
{
  // ColorsRight
  uint32_t satan = pixelsRight->Color(255, 13, 10);
  uint32_t prucian_blue = pixelsRight->Color(10, 13, 255);
  uint32_t orange = pixelsRight->Color(225, 52, 5);
  uint32_t yellow = pixelsRight->Color(225, 255, 0);
  uint32_t green = pixelsRight->Color(0x04,0xd9,0x9d);
  uint32_t white = pixelsRight->Color(0xff,0xff,0xff);
  
  uint32_t right = pixelsRight->Color(255, 0, 0);
  uint32_t left = pixelsRight->Color(0, 0, 255);

//Right
 for (int i = 0; i < halfPixelsRight; i++)
  {
    pixelsRight->setPixelColor(i, green); 
    pixelsRight->show();
  }

  for (int i = halfPixelsRight; i < fullPixelsRight; i++)
  {
    pixelsRight->setPixelColor(i, green);
    pixelsRight->show();
  }

//Left
 for (int i = 0; i < halfPixelsLeft; i++)
  {
    pixelsLeft->setPixelColor(i, satan); 
    pixelsLeft->show();
  }

  for (int i = halfPixelsLeft; i < fullPixelsLeft; i++)
  {
    pixelsLeft->setPixelColor(i, satan);
    pixelsLeft->show();
  }
  
  delay(delayVal);
}