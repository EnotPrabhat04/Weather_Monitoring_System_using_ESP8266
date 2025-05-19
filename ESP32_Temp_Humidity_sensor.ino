#include<OakOLED.h> //OLED library
#include<DHT.h>    //DHT library 
OakOLED oled;
DHT dht(D4,DHT11);  //Object constructor

void setup() 
{
// put your setup code here, to run once:
Serial.begin(9600);
dht.begin();
oled.begin();//D1->SCL,D2->SDA we need to initialize the OLED object using the begin() function.
oled.clearDisplay();//clear all text
oled.setTextSize(1);//Sets the size of text that follows. The default size is “1”. Each change in size increases the text by 10 pixels in height.
oled.setTextColor(1);//set the text color
oled.setCursor(0,0); //set the coordinates to start writing text
oled.println("Weather Monitoring"); //prints the message
oled.display(); //calls this method to display character on the screen
delay(5000);
}
void loop()
{

int temp=dht.readTemperature();
int hum=dht.readHumidity();
Serial.print("temperature=");
Serial.println(temp);
Serial.println(" ");
Serial.print("humidity=");
Serial.println(hum);
oled.clearDisplay();
oled.setTextSize(1);
oled.setTextColor(1);
oled.setCursor(2,0); 
oled.print("Temperature=");
oled.print(temp); 
oled.println(" ");
oled.print("Humidity=");
oled.print(hum);
oled.display(); 
delay(1000);
}