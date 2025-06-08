// #include <Arduino.h>    /*include Arduino.h library*/
// #include <Wire.h>        /*include Wire.h library*/
// void setup()
// {
//     //On Heltec boards, the OLED is built-in and powered via GPIO 16. 
//     //It must be pulled HIGH before the OLED is usable.
//     pinMode(16, OUTPUT);       // Power control for OLED
//     digitalWrite(16, HIGH);    // Turn on the OLED
//     delay(100);                // Allow time for OLED to power up

//   Wire.begin(4, 15);           /*Wire I2C communication START*/
//   Serial.begin(115200);    /*baud rate set for Serial Communication*/
//   while (!Serial);       /*Waiting for Serial output on Serial Monitor*/
//   Serial.println("\nI2C Scanner");
// }
// void loop()
// {
//   byte err, adr;       /*variable error is defined with address of I2C*/
//   int number_of_devices;
//   Serial.println("Scanning.");
//   number_of_devices = 0;
//   for (adr = 1; adr < 127; adr++ )
//   {
//     Wire.beginTransmission(adr);
//     err = Wire.endTransmission();

//     if (err == 0)
//     {
//       Serial.print("I2C device at address 0x");
//       if (adr < 16)
//         Serial.print("0");
//       Serial.print(adr, HEX);
//       Serial.println("  !");
//       number_of_devices++;
//     }
//     else if (err == 4)
//     {
//       Serial.print("Unknown error at address 0x");
//       if (adr < 16)
//         Serial.print("0");
//       Serial.println(adr, HEX);
//     }
//   }
//   if (number_of_devices == 0)
//     Serial.println("No I2C devices attached\n");
//   else
//     Serial.println("done\n");
//   delay(5000);             /*wait 5 seconds for the next I2C scan*/
// }