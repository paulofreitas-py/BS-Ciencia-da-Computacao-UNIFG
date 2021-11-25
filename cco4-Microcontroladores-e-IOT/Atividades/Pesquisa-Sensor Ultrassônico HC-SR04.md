Na aula do dia 16 foi introduzido no laboratorio um Sensor Ultrassônico modelo HC-SR04, o qual utiliza pulsos sonoros para determinar a distância para determinar a distância para um objetivo, usando o mesmo princípio dos morcegos. Ele oferece uma excelente precisão e leitura estáveis e tudo isso em uma simples plaquinha.

Como pode-se esperar do ultrassons eles não são afetados pela luz (do sol ou ambiente) e nem falha ao colocar um material escuro em sua frente (feito os sensores ópticos, sensor infravermelho Sharp) em compensação material “acústicos” podem dificultar as leituras do sensor.

## **Especificações:**

- Alimentação: 5v (DC);
- Corrente de Trabalho: < 2mA;
- Ângulo Efetivo: < 15° (ângulo que o sensor “enxerga” objetos);
- Distância de Trabalho: 2cm até 500cm;
- Resolução: 0.3 cm;
- Sinal de Saída: 5V de alto nível, 0V nível baixo;
- Sinal de Entrada Trigger: 10us impulso TTL;
- Sinal Echo: saída TTL PWL sinal;
- Peso: 29 g.

![photo_2021-11-16_19-33-24.jpg](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/d674ebbc-8b1d-4d6e-9cc5-50ea1c152cd6/photo_2021-11-16_19-33-24.jpg)

A ligação do sensor ao Arduino no nosso programa vai utilizar, além dos pinos de alimentação, os **pinos digitais 4** para o **Trigger**, e **5** para o **Echo**. A alimentação será feita pelo pino 5V do Arduino:

Como pode-se esperar do ultrassons eles não são afetados pela luz (do sol ou ambiente) e nem falha ao colocar um material escuro em sua frente (feito os sensores ópticos, sensor infravermelho Sharp) em compensação material “acústicos” podem dificultar as leituras do sensor.

Primeiramente é enviado um pulso de 10µs, indicando o início da transmissão de dados. Depois disso, são enviado 8 pulsos de 40 KHz e o sensor então aguarda o retorno (em nível alto/high), para determinar a distância entre o sensor e o objeto, utilizando a equação ***Distância = (Tempo echo em nível alto * velocidade do som) /2***

![Diagrama-tempo-hc-sr04.png](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/3ec832b4-23c1-4d1a-806c-c518564b8e3f/Diagrama-tempo-hc-sr04.png)

## Código Fonte:

![Arduino_HC_SR04_bb.png](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/38ad294c-2764-4857-b67e-cab46e1b9061/Arduino_HC_SR04_bb.png)

![photo_2021-11-16_19-35-01.jpg](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/2f6bb146-6b8e-4617-b633-371797df06c3/photo_2021-11-16_19-35-01.jpg)

```arduino
//Programa: Conectando Sensor Ultrassonico HC-SR04 ao Arduino
//Autor: Paulo Freitas
 
//Carrega a biblioteca do sensor ultrassonico
#include <Ultrasonic.h>
 
//Define os pinos para o trigger e echo
#define pino_trigger 4
#define pino_echo 5
 
//Inicializa o sensor nos pinos definidos acima
Ultrasonic ultrasonic(pino_trigger, pino_echo);
 
void setup()
{
  Serial.begin(9600);
  Serial.println("Lendo dados do sensor...");
}
 
void loop()
{
  //Le as informacoes do sensor, em cm e pol
  float cmMsec, inMsec;
  long microsec = ultrasonic.timing();
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  inMsec = ultrasonic.convert(microsec, Ultrasonic::IN);
  //Exibe informacoes no serial monitor
  Serial.print("Distancia em cm: ");
  Serial.print(cmMsec);
  Serial.print(" - Distancia em polegadas: ");
  Serial.println(inMsec);
  delay(1000);
}
```

ao abrir o Serial Monitor e coloque um obstáculo na frente do sensor ultrassônico. Se tudo deu certo, conforme você variar a distância do obstáculo em relação ao sensor, a distância medida aparecerá no serial monitor, tal como as imagens a seguir.

![photo_2021-11-16_19-58-42.jpg](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/055ee5a6-92b4-4596-b7e6-2672c5f96f8e/photo_2021-11-16_19-58-42.jpg)

### Fontes: