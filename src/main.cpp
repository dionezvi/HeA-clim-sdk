#include <Arduino.h>

#ifndef PINO_DHT
#define PINO_DHT -1
#endif
#ifndef PINO_PORTA
#define PINO_PORTA -1
#endif

void setup()
{
    Serial.begin(115200);
    delay(100);
    Serial.println("HeA-clim-sdk minimal main.cpp");
#ifdef ARQUITETURA_ESP32
    Serial.println("Arquitetura: ESP32");
#endif
#ifdef ARQUITETURA_NRF52
    Serial.println("Arquitetura: NRF52");
#endif
#ifdef ARQUITETURA_MILKV
    Serial.println("Arquitetura: MILKV");
#endif
#ifdef ARQUITETURA_ESP32C3
    Serial.println("Arquitetura: ESP32C3");
#endif
    Serial.print("PINO_DHT=");
    Serial.println(PINO_DHT);
    Serial.print("PINO_PORTA=");
    Serial.println(PINO_PORTA);
}

void loop()
{
    delay(1000);
}
