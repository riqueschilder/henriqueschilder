#define led_vermelho 4
#define led_amarelo 6
#define led_azul 7
#define led_verde 5
#define ldr 15
#define buzzer 18
#define button 16
#define button2 17

int func0() {tone(buzzer, 100);return 0;}int func1() {tone(buzzer, 200);digitalWrite(led_vermelho, HIGH);delay(150);digitalWrite(led_vermelho, LOW);return 0;}int func2() {tone(buzzer, 300);digitalWrite(led_verde, HIGH);delay(150);digitalWrite(led_verde, LOW);return 0;}int func3() {tone(buzzer, 400);digitalWrite(led_vermelho, HIGH);digitalWrite(led_verde, HIGH);delay(150);digitalWrite(led_verde, LOW);digitalWrite(led_vermelho, LOW);return 0;}int func4() {tone(buzzer, 500);digitalWrite(led_amarelo, HIGH);delay(150);digitalWrite(led_amarelo, LOW);return 0;}int func5() {tone(buzzer, 600);digitalWrite(led_amarelo, HIGH);digitalWrite(led_vermelho, HIGH);delay(150);digitalWrite(led_amarelo, LOW);digitalWrite(led_vermelho, LOW);return 0;}int func6() {tone(buzzer, 700);digitalWrite(led_amarelo, HIGH);digitalWrite(led_verde, HIGH);delay(150);digitalWrite(led_amarelo, LOW);digitalWrite(led_verde, LOW);return 0;}int func7() {tone(buzzer, 800);digitalWrite(led_amarelo, HIGH);digitalWrite(led_verde, HIGH);digitalWrite(led_vermelho, HIGH);delay(150);digitalWrite(led_amarelo, LOW);digitalWrite(led_verde, LOW);digitalWrite(led_vermelho, LOW);return 0;}int func8() {tone(buzzer, 900);digitalWrite(led_azul, HIGH);delay(150);digitalWrite(led_azul, LOW);return 0;}int func9() {tone(buzzer, 1000);digitalWrite(led_azul, HIGH);digitalWrite(led_vermelho, HIGH);delay(150);digitalWrite(led_azul, LOW);digitalWrite(led_vermelho, LOW);return 0;}int func10() {tone(buzzer, 1100);digitalWrite(led_azul, HIGH);digitalWrite(led_verde, HIGH);delay(150);digitalWrite(led_azul, LOW);digitalWrite(led_verde, LOW);return 0;}int func11() {tone(buzzer, 1200);digitalWrite(led_azul, HIGH);digitalWrite(led_verde, HIGH);digitalWrite(led_vermelho, HIGH);delay(150);digitalWrite(led_azul, LOW);digitalWrite(led_verde, LOW);digitalWrite(led_vermelho, LOW);return 0;}int func12() {tone(buzzer, 1300);digitalWrite(led_azul, HIGH);digitalWrite(led_amarelo, HIGH);delay(150);digitalWrite(led_azul, LOW);digitalWrite(led_amarelo, LOW);return 0;}int func13() {tone(buzzer, 1400);digitalWrite(led_azul, HIGH);digitalWrite(led_amarelo, HIGH);digitalWrite(led_vermelho, HIGH);delay(150);digitalWrite(led_azul, LOW);digitalWrite(led_amarelo, LOW);digitalWrite(led_vermelho, LOW);return 0;}int func14() {tone(buzzer, 1500);digitalWrite(led_azul, HIGH);digitalWrite(led_amarelo, HIGH);digitalWrite(led_verde, HIGH);delay(150);digitalWrite(led_azul, LOW);digitalWrite(led_amarelo, LOW);digitalWrite(led_verde, LOW);return 0;}int func15() {tone(buzzer, 1600);digitalWrite(led_azul, HIGH);digitalWrite(led_amarelo, HIGH);digitalWrite(led_verde, HIGH);digitalWrite(led_vermelho, HIGH);delay(150);digitalWrite(led_azul, LOW);digitalWrite(led_amarelo, LOW);digitalWrite(led_verde, LOW);digitalWrite(led_vermelho, LOW);return 0;}
void setup() {Serial.begin(115200);pinMode(led_amarelo, OUTPUT);pinMode(led_vermelho, OUTPUT);pinMode(led_azul, OUTPUT);pinMode(led_verde, OUTPUT);pinMode(ldr, INPUT);pinMode(buzzer, OUTPUT);pinMode(button, INPUT_PULLUP);pinMode(button2, INPUT_PULLUP);}
int static pos = 0;
int static tam = 0;
void loop() {
  int  vetor[1000];
  int  ldr_read = analogRead(ldr);
  int resultado = (ldr_read / 273);
  tone(buzzer, 0);
  if (digitalRead(button) == LOW) {
    tam += 1;
    for (int i = 0; i <= 15; i = i + 1) {
      if (resultado == i){
        if (i == 0) {func0();}if (i == 1) {func1();}if (i == 2) {func2();}if (i == 3) {func3();}if (i == 4) {func4();}if (i == 5) {func5();}if (i == 6) {func6();}if (i == 7) {func7();}if (i == 8) {func8();}if (i == 9) {func9();}if (i == 10) {func10();}if (i == 11) {func11();}if (i == 12) {func12();}if (i == 13) {func13();}if (i == 14) {func14();}if (i == 15) {func15();}
        vetor[pos] = (i+1);
        pos += 1;
        Serial.println(resultado);
        Serial.println(vetor[(pos-1)]);}}}
  if (digitalRead(button2) == LOW) {
    for (int i = 0; i < tam; i = i + 1) {
      for (int j = 1; j <= 16; j = j + 1) {
      if (vetor[i] == (j)){
        if (j == 1) {func0();}if (j == 2) {func1();}if (j == 3) {func2();}if (j == 4) {func3();}if (j == 5) {func4();}if (j == 6) {func5();}if (j == 7) {func6();}if (j == 8) {func7();}if (j == 9) {func8();}if (j == 10) {func9();}if (j == 11) {func10();}if (j == 12) {func11();}if (j == 13) {func12();}if (j == 14) {func13();}if (j == 15) {func14();}if (j == 16) {func15();}
        Serial.println(vetor[i]);
        vetor[i] = 0;}}}}}
