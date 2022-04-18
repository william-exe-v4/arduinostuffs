#define red 14
#define green 15
#define blue 16
#define time 10
int R;
int B;
int G;
void setup() {
  pinMode(red, OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  analogWrite(red, HIGH);
  analogWrite(green, LOW);
  analogWrite(blue, LOW);
}

void loop() {
  R = 255;
  G = 0;
  B = 0;
  for (int i = 0; i < 255; i += 1) {
    R -= 1;
    G += 1;
    analogWrite(red, R);
    analogWrite(green, G);
    delay(time);
  }
  R = 0;
  G = 255;
  B = 0;
  for (int i = 0; i < 255; i += 1) {
    G -= 1;
    B += 1;
    analogWrite(green, G);
    analogWrite(blue, B);
    delay(time);
  }
  R = 0;
  G = 0;
  B = 255;
  for (int i = 0; i < 255; i += 1) {
    B -= 1;
    R += 1;
    analogWrite(blue, B);
    analogWrite(red, R);
    delay(time);
  }
}