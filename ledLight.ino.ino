int ledLight = 13;
int speaker = 2;
int leftButton = 4;
int rightButton = 7;
void setup() {
  // put your setup code here, to run once:
  //pinMode(pin_number,mode(what_you_want_it_to_do))
  pinMode(ledLight,OUTPUT);
  pinMode(speaker,OUTPUT);
  pinMode(leftButton, INPUT);
  pinMode(rightButton, INPUT);
  //This will display what is going on
  //The 9600 is boardrate
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //This is where you give your code some functionality
  //Program needs to read the buttons so as to use it to control things
  int leftButtonRead = digitalRead(leftButton);
  int rightButtonRead = digitalRead(rightButton);
  
  Serial.print("left button value = ");
  Serial.println(leftButtonRead);

  Serial.print("right button value = ");
  Serial.println(rightButtonRead);

  if(leftButtonRead == 1){
    digitalWrite(ledLight,HIGH);
    digitalWrite(speaker, HIGH);
    //delay(200);
    }

  if(rightButtonRead == 1){
  digitalWrite(ledLight,LOW);
  digitalWrite(speaker, LOW);
  //delay(200);
  }
}
