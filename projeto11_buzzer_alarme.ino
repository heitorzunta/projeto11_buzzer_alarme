/*
 * Projeto 11 -- Alarme com sonorizador buzzer
 * Heitor Batistela Zunta
 * 23/01/2019
 * heitor.zunta@gmail.com
 */
 #define pi 3.1416 //definicao de pi em C++
 float valorSeno;
 int valorTom;
 const byte pinoBuzzer = 1;

 void setup(){
  pinMode(pinoBuzzer, OUTPUT);
 }

 void loop(){
  for(int i=0; i<180; i++) {//pegando valores positivos do seno de i
    
    //convertendo graus em radianos e obtendo o seno
    valorSeno = sin(i*(pi/180));

    //gerar frequencia por meio do seno de i
    valorTom = 2000+((int)(valorSeno*1000));
    tone(pinoBuzzer, valorTom);
    delay(2);
  }
 }
