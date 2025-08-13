// 7 segment pin dizisi: a, b, c, d, e, f, g
const int segmentPins[7] = {2, 3, 4, 5, 6, 7, 8};

// Rakamların segment karşılıkları (common cathode)
// 1 = segment yanar, 0 = segment sönük
const byte digits[10][7] = {
  {1,1,1,1,1,1,0}, // 0
  {0,1,1,0,0,0,0}, // 1
  {1,1,0,1,1,0,1}, // 2
  {1,1,1,1,0,0,1}, // 3
  {0,1,1,0,0,1,1}, // 4
  {1,0,1,1,0,1,1}, // 5
  {1,0,1,1,1,1,1}, // 6
  {1,1,1,0,0,0,0}, // 7
  {1,1,1,1,1,1,1}, // 8
  {1,1,1,1,0,1,1}  // 9
};

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(segmentPins[i], OUTPUT);
    digitalWrite(segmentPins[i], LOW); // Başlangıçta kapalı
  }
}

void loop() {
  for (int number = 0; number < 10; number++) {
    for (int seg = 0; seg < 7; seg++) {
      digitalWrite(segmentPins[seg], digits[number][seg] ? HIGH : LOW);
    }
    delay(1000); // 1 saniye bekle
  }
}


