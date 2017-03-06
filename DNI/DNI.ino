/**********************************************************************************
**                                                                               **
**                               Challenge 005                                   **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 06 / 03 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

long dni=39508097;
int lletra;

//********** VARIABLES ************************************************************

//********** SETUP ****************************************************************
void setup() 
{                // S'executa un sol cop
 Serial.begin(9600);
  Serial.println ("Escriu els numeros del teu DNI");
  Serial.print ("El teu dni es: ");
  Serial.print (dni);
  Serial.print ("-");

    lletra = dni % 23;

    
  if (lletra == 0){
    Serial.println ("T");
  }
  
  else if (lletra == 1){
    Serial.println ("R");
  }
  
  else if (lletra == 2){
    Serial.println ("W");
  }
  
  else if (lletra == 3){
    Serial.println ("A");
  }
  
  else if (lletra == 4){
    Serial.println ("G");
  }
  
  else if (lletra == 5){
    Serial.println ("M");
  }
  
  else if (lletra == 6){
    Serial.println ("Y");
  }
  
  else if (lletra == 7){
    Serial.println ("F");
  }
  
  else  if (lletra == 8){
    Serial.println ("P");
  }
  
  else  if (lletra == 9){
    Serial.println ("D");
  }
  
  else  if (lletra == 10){
    Serial.println ("X");
  }
  
  else  if (lletra == 11){
    Serial.println ("B");
  } 
   
  else  if (lletra == 12){
    Serial.println ("N");
  }
  
  else  if (lletra == 13){
    Serial.println ("J");
  }
  
  else   if (lletra == 14){
    Serial.println ("Z");
  }
  
  else if (lletra == 15){
    Serial.println ("S");
  }
  
  else if (lletra == 16){
    Serial.println ("Q");
  }
  
  else if (lletra == 17){
    Serial.println ("V");
  }
  
  else if (lletra == 18){
    Serial.println ("H");
  }
  
  else if (lletra == 19){
    Serial.println ("L");
  }
  
  else if (lletra == 20){
    Serial.println ("C");
  }
  
  else  if (lletra == 21){
    Serial.println ("K");
  }
  
  else if (lletra == 22){
    Serial.println ("E");
  }
  
}

//********** LOOP *****************************************************************
void loop() 
{                // S'executa repetidament 
}
//********** FUNCIONS *************************************************************
