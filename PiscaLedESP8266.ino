/* Pinagem ESP8266 
 * 
 *  A0----ADC0      |----------------| D0----GPIO16 (LED NORMAL)
 *  RSV----RESERVED |----------------| D1----GPIO05
 *  RSV----RESERVED |----------------| D2----GPI04
 *  SD3----GPIO10   |----------------| D3----GPIO0
 *  SD2----GPIO9    |----------------| D4----GPIO2 (LED INVERTIDO) --- TXD1
 *  SD1----MOSI     |----------------| 3.3V
 *  CMD---CS        |----------------| GND
 *  SD0----MISO     |----------------| D5----GPIO14
 *  CLK----SCLK     |----------------| D6----GPIO12
 *  GND             |----------------| D7----GPIO13 --- RXD2
 *  3.3V            |----------------| D8----GPIO15 --- TXD2
 *  EN              |----------------| RX----GPIO3 --- RXD0
 *  RST             |----------------| TX----GPIO1 --- TXD0
 *  GND             |----------------| GND
 *  Vin             |----------------| 3.3V
 */


const byte LED = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);

}

void loop() {
  digitalWrite(LED, HIGH); //Liga o LED
  delay(1000); //Espera 1s
  digitalWrite(LED, LOW); //Apaga o LED
  delay(1000); //Espera 1s
 
}
