//minutes 
int oneM= 6;
int twoM=5; 
int fourM=4; 
int eightM=3; 
int sixteenM=2 ; 
int thirtytwoM= 1; 

//hours; 
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
  if (number > 32){
    number-= 32; 
    digitalWrite(thirytwoM, HIGH); 
    }  
  if (number > 16){
    number -= 16; 
    digitalWrite(sixteenM, HIGH);
    }
  if (number > 8){
    number-= 8; 
    digitalWrite(eightM, HIGH); 
    }
  if (number > 4){
    number -= 4; 
    digitalWrite(fourM, HIGH); 
    }
  if (number >2){
    number -=2; 
    digitalWrite(twoM, HIGH); 
    }
  if (number == 1){
    digitalWrite(oneM,HIGH); 
    }
  }

void converHourToMinute(int number){
  if (number > 8){
    number-= 8; 
    digitalWrite(eightH, HIGH); 
    }
  if (number > 4){
    number -= 4; 
    digitalWrite(fourH, HIGH); 
    }
  if (number >2){
    number -=2; 
    digitalWrite(twoH, HIGH); 
    }
  if (number == 1){
    digitalWrite(oneH,HIGH); 
    }
  }

void loop() {
  // put your main code here, to run repeatedly:

}
