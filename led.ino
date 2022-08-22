//전역변수
int k;
int a,b,c;
int check=0;
//const int ILL = 0; //불량주차시 1의 값받음
  
//주차칸24개에 디지털핀 할당
void setup() {
  for( int i = 22; i < 45; i=i+1)
    {
      pinMode(i, OUTPUT);
    }
  Serial.begin(9600);
}

//5초마다 조건확인
void loop() {
  int m1, m2, m3 = 0;
  long time = millis();
  //a는1배,b는100배,c는10000배곱해서 하나의 변수로 case판단
  a = 1;//통신();
  b = 2;//통신()*100;
  c = 3;//통신()///*1000;
  k = a+b+c;

if (k > 9999) {
  m3 = k/10000;
  m2 = k-(m3*10000);
  m1 = k-(m3*10000+m2*100);
  check = m1;
  swch(m1);
  check = m2;
  swch(m2);
  check = m3;
  swch(m3);
}
else if (99 < k < 10000) {
  m1 = k%100;
  m2 = k/100;
  check = m1;
  swch(m1);
  check = m2;
  swch(m2);
}
else {
  m1 = k;
  check = m1;
  swch(m1);
}
}//loop문의 끝

void swch (int check){
  long time = millis();
  while(check != 0) {
  if (time + 5000 < millis()) {  //0~5초동안 
    digitalWrite(check, HIGH) ;  //출력해라
  }}
  return;}
