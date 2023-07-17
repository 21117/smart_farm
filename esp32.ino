const int relay1=25;
const int relay2=26;

void setup() {
  Serial.begin(115200);
    pinMode(relay1, OUTPUT);

  Serial.begin(115200);
    pinMode(relay2, OUTPUT);
}

void loop(){
  digitalWrite(relay1,HIGH);
  Serial.println("Current Flowing");
  delay(5000);
  digitalWrite(relay1,LOW);
  Serial.println("current not Flowing");
  delay(5000);

  digitalWrite(relay2,HIGH);
  Serial.println("Current Flowing");
  delay(5000);
  digitalWrite(relay2,LOW);
  Serial.println("current not Flowing");
  delay(5000);
}
