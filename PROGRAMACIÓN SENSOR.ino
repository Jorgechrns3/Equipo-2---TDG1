void setup()
{
    // Establecer la velocidad de comunicación del monitor serial en 9600
    Serial.begin(9600);
}

void loop()
{
    // Variable para almacenar el valor ADC (0 a 1023)
    int Nivel;
    // La función analogRead devuelve un entero de 10 bits (0 a 1023)
    Nivel = analogRead(0);

    // Imprimir texto en el monitor serial
    Serial.println("Valor Analogico:");
    // Imprimir el valor analógico en el monitor serial
    Serial.println(Nivel);
}