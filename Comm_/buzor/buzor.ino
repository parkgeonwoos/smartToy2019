int incomingByte = 0;

int piezoPin = 12;

int Do = 262;

int re = 294;

int mi = 330;

int pa = 349;

int sol = 392;

int ra = 440;

int si = 494;

int doo = 523;

int ree = 587;

 
//도레미파솔라시도레 까지 미리 정해진 음을 맞춤
void setup() {

  Serial.begin(9600);

  pinMode(piezoPin, OUTPUT);

 

}

 

void loop() {

 if(Serial.available() > 0){

  

  incomingByte = Serial.read();

  

 

  if (incomingByte == '1')

  {

    tone(piezoPin,Do,500);

  }
//1을 누르면 도
 

  if (incomingByte == '2')

  {

    tone(piezoPin,re,500);

  }
//2를 누르면 레
  if (incomingByte == '3')

  {

    tone(piezoPin,mi,500);
//3을 누르면 미
  }

   if (incomingByte == '4')

  {

    tone(piezoPin,pa,500);

  }
//4를 누르면 파
   if (incomingByte == '5')

  {

    tone(piezoPin,sol,500);

  }
//5를 누르면 솔
    if (incomingByte == '6')

  {

    tone(piezoPin,ra,500);

  }
  //6을 누르면 라

    if (incomingByte == '7')

  {

    tone(piezoPin,si,500);

  }
//7을 누르면 시
   if (incomingByte == '8')

  {

    tone(piezoPin,doo,500);

  }
//8을 누르면 도
  if (incomingByte == '9')

  {

    tone(piezoPin,ree,500);

  }
//9를 누르면 레
   if (incomingByte == '0')

  {

    noTone(piezoPin);

  }
//0을 누를시 
 }

}
