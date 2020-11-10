/*
   TUTORIAL SEVEN SEGMENT PADA ARDUINO
   MENGGUNAKAN CHIP TM1637

   MENAMPILKAN COUNTER COUNTDOWN PER DETIK

   Pinout :
   CLK -> D10
   DIO -> D11

*/

#include <Arduino.h>
#include <TM1637Display.h>

// Module connection pins (Digital Pins)
#define CLK 10
#define DIO 11

#define TEST_DELAY 1000 //1 detik

TM1637Display display(CLK, DIO);

int angka = 60; //variabel counter awal

void setup()
{
  display.setBrightness(0x0f);
}

void loop()
{

  // Menampilkan angka counter rata kanan tanpa didahului angka nol
  display.showNumberDec(angka, false);
  delay(TEST_DELAY);
  angka-- ; //kurang 1

  if (angka == 0) { //kalau mencapai 0 balikkan ke 60
    angka = 60;
  }


}
