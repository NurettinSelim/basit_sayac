int but = 7;
int durum = 0;
int sayac = 0;
int ilk_sayi;
int son_sayi;

void setup() {
  pinMode(but,INPUT);
  Serial.begin(9600);
}

void loop() {
  durum = digitalRead(but);
  
  ilk_sayi = sayac;
  if(durum == 1){
    sayac = sayac + 1;
    while(durum == 1){
      durum = digitalRead(but);       
    }
  }
  son_sayi = sayac;
  
  if (son_sayi != ilk_sayi)Serial.println(sayac);
  
}
