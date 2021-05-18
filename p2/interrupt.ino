#define data 2
volatile int count=0;
long display=0;
void setup(){
    Serial.begin(9600);
    pinMode(data,INPUT);
    attachInterrupt(digitalPinToInterrupt(data), pulse, RISING);
}
void loop(){
    Serial.println("Count = ");
    Serial.println(display);
    Serial.println("/n");
    display=count;
    delay(25);

}

void pulse(){
    count++;
}