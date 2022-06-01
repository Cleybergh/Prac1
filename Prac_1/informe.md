# Práctica 1 

El objetivo de la práctica es conseguir un parpadeo periódico en un led.

```
#include <Arduino.h>

 #define PIN 16

  void setup() {
  // put your setup code here, to run once:
pinMode(PIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN, HIGH);
  Serial.println("ON");
  delay(1000);
  // turn the LED off by making the voltage LOW
  digitalWrite(PIN, LOW);
  Serial.println("OFF");
  delay(1000);
}
```

Se puede ver como nombramos al pin 16 que es el encargado de mandarle el señal al led de que se apague y se encienda cada segundo.

El tiempo libre que tiene el procesador es el delay que hay hasta que tiene que volver a apagar o a encender el led. Asi que està 1 segundo en reposo, apaga el led, otro segundo en reposo y lo enciende.

La duración del loop es de 2 segundos.

## Diagrama de flujos

![DF](PlatformIO\Projects\Prac_1/../../../DF.png)

---
## Diagrama de tiempo

![DT](Documents\PlatformIO\Projects\Prac_1/../../../../DT.PNG)





