void setup () 
{
     Serial.begin(9600);
     while(!Serial) { ; }
}
void loop ()
{
     if( Serial.available()> 0) 
     {
        String str = Serial.readStringUntil('\n'); //Lectura de una cadena
        str.toUpperCase(); //conversion a mayusculas
               
        Serial.println(str); //Envio por el puerto serie
     }
}