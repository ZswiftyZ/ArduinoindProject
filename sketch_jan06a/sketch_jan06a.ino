/*
 *Progammer: Trent
 *Date: 1.7.20
*/

const int digitPins[4] = {
  4,5,6,7};                 //4 common anode pins of the display
const int clockPin = 11;    //74HC595 Pin 11 
const int latchPin = 12;    //74HC595 Pin 12
const int dataPin = 13;     //74HC595 Pin 14
const int tempPin = A0;     //temperature sensor pin
const byte digit[10] =      //seven segment digits in bits
{
  B00111111, //0
  B00000110, //1
  B01011011, //2
  B01001111, //3
  B01100110, //4
  B01101101, //5
  B01111101, //6
  B00000111, //7
  B01111111, //8
  B01101111  //9
};
