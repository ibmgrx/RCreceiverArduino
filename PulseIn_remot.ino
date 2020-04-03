//Remote Roboboat Undip
int ch1 = 8;
int ch2 = 7;
int ch3 = 6;
int ch4 = 5;
int ch5 = 4;
int ch6 = 3;
unsigned long Channel_1, Channel_2, Channel_3, Channel_4, Channel_5, Channel_6;

void setup()
{
  Serial.begin(57600);
  pinMode(ch2, INPUT);
  pinMode(ch4, INPUT);
  pinMode(ch5, INPUT);
}

void loop()
{
  Channel_2 = pulseIn(ch2, HIGH);
  Channel_4 = pulseIn(ch4, HIGH);
  Channel_5 = pulseIn(ch5, HIGH);
  Serial.print(Channel_2);
  Serial.print(" ");
  Serial.print(Channel_4);
  Serial.print(" ");
  Serial.println(Channel_5);
  delay(50);
  
  int Data_CH2 = (Channel_2-999)*0.245;
  int Data_CH4 = (Channel_4-999)*0.245;
  int Data_CH5 = (Channel_5-999)*0.245;
//  Serial.write(255);  
//  Serial.write(Data_CH2);
//  Serial.write(Data_CH4);
//  Serial.write(Data_CH5);
}
