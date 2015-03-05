#define FETGATEa 10 
#define FETGATEb 2 
#define FETGATEc 3 
#define FETGATEd 4 
#define FETGATEe 5 
#define FETGATEf 6 
#define FETGATEg 7 
#define FETGATEh 8 
#define FETGATEi 9

const int switchPin = 12;
int switchState = 0;


void setup() {
  // put your setup code here, to run once:
 
 Serial.begin( 9600 ); 
 
 pinMode(FETGATEa, OUTPUT);
 pinMode(FETGATEb, OUTPUT);
 pinMode(FETGATEc, OUTPUT);
 pinMode(FETGATEd, OUTPUT);
 pinMode(FETGATEe, OUTPUT);
 pinMode(FETGATEf, OUTPUT);
 pinMode(FETGATEg, OUTPUT);
 pinMode(FETGATEh, OUTPUT);
 pinMode(FETGATEi, OUTPUT);
 
 
 pinMode(switchPin, INPUT);
 
 //center cursol
 //digitalWrite( FETGATEe, HIGH );

 
 }

void loop() {
  // put your main code here, to run repeatedly:
  
  
  ////danndann Osoku Naru
 
 ////////////

switchState = digitalRead(switchPin);


if (switchState == HIGH){

 
digitalWrite( FETGATEa, HIGH );

//3
delay(300);

digitalWrite( FETGATEa, LOW);
digitalWrite( FETGATEb, HIGH );

//7
delay(400);

digitalWrite( FETGATEb, LOW);
digitalWrite( FETGATEc, HIGH );

//12
delay(500);

digitalWrite( FETGATEc, LOW);
digitalWrite( FETGATEd, HIGH );

//18
delay(600);

digitalWrite( FETGATEd, LOW);
digitalWrite( FETGATEe, HIGH );

//25
delay(700);

digitalWrite( FETGATEe, LOW);
digitalWrite( FETGATEf, HIGH );

//34
delay(900);

digitalWrite( FETGATEf, LOW);
digitalWrite( FETGATEg, HIGH );


//34 
delay(1200);

digitalWrite( FETGATEg, LOW);
digitalWrite( FETGATEh, HIGH );


//34 
delay(1400);

digitalWrite( FETGATEh, LOW);
digitalWrite( FETGATEi, HIGH );


//34 
delay(1600);

digitalWrite( FETGATEi, LOW);

 }
  else {
   
 digitalWrite( FETGATEa, LOW );
 digitalWrite( FETGATEb, LOW );
 digitalWrite( FETGATEc, LOW );
 digitalWrite( FETGATEd, LOW );
 digitalWrite( FETGATEe, LOW );
 digitalWrite( FETGATEf, LOW );
 digitalWrite( FETGATEg, LOW );
 digitalWrite( FETGATEh, LOW );
 digitalWrite( FETGATEi, LOW );
    
  }

 
}
