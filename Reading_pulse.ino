const int samples = 125;
float x[samples];
const int Fs = 25;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600)
}

void loop() {
  // put your main code here, to run repeatedly:
  int i = 0;
  while(i < samples) {
    x[i] = analogRead(A0);
    delay(40);  //1/25 = .04 sec
    i ++; 
  }

  for(int i = 0; i < samples; i++) {
    println(x[i]);
  }
}
