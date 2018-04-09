const int echo_Pin = 9;
const int trig_pin = 10;

void setup(){
  //Initialize connection between the Serial port and the arudino.
  Serial.begin(9600);
  // Set output mode for the Sonic sensor. Echo and Trig, I/O.
  pinMode(trig_pin, OUTPUT);
  pinMode(echo_Pin, INPUT);
}

void loop(){
  int distance, duration;
  digitalWrite(trig_pin,LOW);
  delayMicroseconds(2);
  digitalWrite(echo_Pin, HIGH);
  delayMicroseconds(5);
  
  duration = pulseIn(echo_Pin, HIGH);
  distance = (duration/2) / 0.5;
  
  Serial.print("\n Distance: ");
  Serial.print(distance);
}

