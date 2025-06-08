// ///////////////Connections of lora//////////////////
// // NodeMCU esp8266 Pins                     SX1278 Pins
// // GND                                       GND
// // 3.3V                                      VCC
// // D8                                        NSS
// // D7                                        MOSI
// // D6                                        MISO
// // D5                                        SCK
// // D0                                        RST
// // D2                                        DIO0
// /////////////////////////////////////////////////


// #include <SPI.h>                // Include the SPI library for SPI communication
// #include <Wire.h>               // Include the Wire library for I2C communication
// #include <Adafruit_GFX.h>       // Include the Adafruit GFX library for graphics
// #include <Adafruit_SSD1306.h>   // Include the Adafruit SSD1306 library for OLED display



// //setup the display
// #define i2c_Address 0x3c //initialize with the I2C addr 0x3C Typically eBay OLED's
// #define SCREEN_WIDTH 128 // OLED display width, in pixels
// #define SCREEN_HEIGHT 64 // OLED display height, in pixels
// // Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
// #define OLED_RESET     -1  // Reset pin # (or -1 if sharing Arduino reset pin)
// TwoWire twi = TwoWire(1); // create our own TwoWire instance for I2C communication
// Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &twi, OLED_RESET);


// void setup() {
//   Serial.begin(115200); // Initialize serial communication for debugging
//   twi.begin(4, 15); // Needs to come before display.begin() is used
//   Serial.println("LoRa Receiver");

//   // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
//   if(!display.begin(SSD1306_SWITCHCAPVCC, i2c_Address)) {
//   Serial.println(F("SSD1306 allocation failed"));
//   for(;;); // Don't proceed, loop forever
//   }
//   Serial.println("Display Initialized OK!");
  

//   display.clearDisplay();           // clear the display
//   display.setTextSize(2);          // set text size to 2
//   display.setTextColor(SSD1306_WHITE); // set text color to white
//   display.setCursor(0,0);          // set cursor to top left corner
//   display.print("Waiting!"); // print "Lora init OK!" on the display
//   display.display();               // update the display
// }

// void loop() {
//   // Nothing to do here, as we are just initializing the display
//   // and waiting for LoRa data to be received.
//   // You can add your LoRa receiving code here later.
  
//   // For demonstration, we will just print a message every 5 seconds
//   delay(5000);
//   display.clearDisplay();           // clear the display
//   display.setCursor(0,0);          // set cursor to top left corner
//   display.print("Still Waiting!"); // print "Still Waiting!" on the display
//   display.display();               // update the display
// }