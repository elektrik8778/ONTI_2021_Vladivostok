//КОД для ПРИЕМНИКА

#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); //RX, TX пины для подключения bluetooth

//код для подключения драйвера

char command;

void setup()
{
  mySerial.begin(9600);  //Set the baud rate to your Bluetooth module.
}

void loop() {
  if (mySerial.available() > 0) {
    command = mySerial.read();
    Stop();

    switch (command) {
      case 'F':
        forward();
        break;
      case 'B':
        back();
        break;
      case 'L':
        left();
        break;
      case 'R':
        right();
        break;
    }
  }
}

void forward()
{
  //код для движения вперед
}

void back()
{
  //код для движения назад
}

void left()
{
  //код для движения влево
}

void right()
{
  //код для движения вправо
}

void Stop()
{
  //код для остановки
}
