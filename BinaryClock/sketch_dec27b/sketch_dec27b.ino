//minutes 
int minute=0 ; 
int oneM= 6;
int twoM=5; 
int fourM=4; 
int eightM=3; 
int sixteenM=2 ; 
int thirtytwoM= 1; 

//hours; 
int hour= 0; 
int oneH=13;
int twoH=12; 
int fourH=11; 
int eightH=10; 

void setup() {
  // put your setup code here, to run once:
  //minute initialization 
  pinMode(oneM, OUTPUT);
  pinMode(twoM, OUTPUT);
  pinMode(fourM, OUTPUT);
  pinMode(eightM, OUTPUT);
  pinMode(sixteenM, OUTPUT);
  pinMode(thirtytwoM, OUTPUT);

  //Hour initialization 
  pinMode(oneH, OUTPUT);
  pinMode(twoH, OUTPUT);
  pinMode(fourH, OUTPUT);
  pinMode(eightH, OUTPUT);
}

void convertMinuteToBin(int number){
  if (number >= 32){
    number-= 32; 
    digitalWrite(thirtytwoM, HIGH); 
    }  
   else{
    digitalWrite(thirtytwoM, LOW);
      }
      
  if (number >= 16){
    number -= 16; 
    digitalWrite(sixteenM, HIGH);
    }
  else{
    digitalWrite(sixteenM, LOW);
      }
  if (number >= 8){
    number-= 8; 
    digitalWrite(eightM, HIGH); 
    }
  else{
    digitalWrite(eightM, LOW);
    }
    
  if (number >= 4){
    number -= 4; 
    digitalWrite(fourM, HIGH); 
    }
  else{
    digitalWrite(fourM, LOW);   
      }
      
  if (number >=2){
    number -=2; 
    digitalWrite(twoM, HIGH); 
    }
  else{
        digitalWrite(twoM, LOW); 
    }
  if (number == 1){
    digitalWrite(oneM,HIGH); 
    }
  else{
    digitalWrite(oneM,LOW); 

    }
}
void convertHourToBin(int number){
  if (number >= 8){
    number-= 8; 
    digitalWrite(eightH, HIGH); 
    }
  else{
    digitalWrite(eightH, LOW); 
      }

      
  if (number >= 4){
    number -= 4; 
    digitalWrite(fourH, HIGH); 
    }
    else{
          digitalWrite(fourH, LOW); 

      }
    
  if (number >=2){
    number -=2; 
    digitalWrite(twoH, HIGH); 
    }
   else{
        digitalWrite(twoH, LOW); 
    }
    
  if (number == 1){
    digitalWrite(oneH,HIGH); 
    }
  else{
     digitalWrite(oneH,LOW); 

      }
  }

void loop() {
  
  delay(60000);
  minute ++; 
  if (minute >=60){
    minute= 0; 
    hour++ ; 
    }
  convertMinuteToBin(minute); 
  convertHourToBin(hour);  
  
  // put your main code here, to run repeatedly:

}
