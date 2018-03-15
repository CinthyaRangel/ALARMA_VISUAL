#include "LowPower.h" //Libreria para disminuir consumo

int contacto = 2;//Pin asignado al reed switch
int led = 13;//Pin asignado al LED
//------------------------------------
//Funcion principal
//------------------------------------
void setup()// Se ejecuta cada vez que el Arduino se inicia
{
pinMode(contacto,INPUT);//El reed switch como una entrada
pinMode(led, OUTPUT);//El LED como una salida
}
//------------------------------------
//Funcion ciclicla
//------------------------------------
void loop()// Esta funcion se mantiene ejecutando
{
//  cuando este energizado el Arduino
// Si el iman se acerca al reed switch
if(digitalRead(contacto)==LOW){
//Ciclo for que va de 0 a 50, el contador esta
//  en la variable a, se repite mientras a sea
//  menor a 50
for(int a = 0; a < 50; a++){
digitalWrite(led,HIGH);//Prende el LED
delay(25);//Tiempo
digitalWrite(led,LOW);//Apaga el LED
delay(25);//Tiempo
}// Si el iman esta lejos del reed switch
}else{
digitalWrite(led,LOW);//Mantiene apagado el LED
LowPower.powerDown(SLEEP_4S,ADC_OFF,BOD_OFF); //Cuando no recibe información disminuye consumo
} //Fin del if
} 


