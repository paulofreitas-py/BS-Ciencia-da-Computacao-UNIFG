## Unidade 1

* 1.1 – Fundamentos de redes 
Revisão 
* 1. 2 – Teoria da comunicação de 
dados 
* 1.3 – Componentes em transmissão 
de dados 
Modelo OSI e TCP/IP 
* 1.4 –  Introdução ao cabeamento 
estruturado 
Normas / Tipos 

# Introdução


A comunicação é uma das maiores necessidades humanas. Com o desenvolvimento da tecnologia, esse potencial humano foi fortalecido e permitiu a criação de novos meios e formas de comunicação entre as pessoas, transpondo os obstáculos que a distância representava.

Nesta unidade, conheceremos a história e evolução das Redes de Computadores até a criação da Internet, entenderemos como funciona uma comunicação digital e sua diferença da comunicação analógica. Além disso, conheceremos como é feita uma transmissão de informação e analisaremos como as redes são classificadas com base em sua distribuição geográfica, tamanho físico, disposição dos dispositivos intermediários e finais e baseados nos meios de comunicação adotados.

# História e Evolução das Comunicações


A Comunicação é o ato de transmissão de informações de uma pessoa a outra. A necessidade humana de se comunicar com os outros está logo abaixo das nossas necessidades básicas: respirar, beber, comer e se abrigar. É comum encontrarmos na história da humanidade a necessidade do estabelecimento de sistemas de comunicações, principalmente percebido nas grandes conquistas e em momentos de conflitos.

O rápido sucesso da globalização da Internet, maior do que o esperado, coloca a tecnologia como elemento crucial no desenvolvimento dos sistemas de comunicações atuais, ao ponto de percebermos uma nova e inovadora maneira nas interações sociais, comerciais, políticas e pessoais que acompanham as rápidas evoluções e mudanças promovidas pelo desenvolvimento da rede global. As novas ferramentas em desenvolvimento exigirão constantes melhorias nas interligações que formam a Internet e seu desempenho certamente terá papel fundamental nos novos panoramas de comunicação.

Vamos conhecer, então, um pouco da história das tecnologias que influenciaram diretamente a criação e o desenvolvimento da Internet.

# UM BREVE HISTÓRICO DA INTERNET E TCP/IP

* 1967 a ARPA apresenta um projeto chamado ARPANET com uma ideia simples, um computador central com capacidade para entender todos os outros faz a interligação deles, esse computador central foi chamado IMP (Interface Message Processor). A idéia era interligar as Universidades da Califórnia em Los Angelos, Universidade da Califórnia em Santa Barbara, Instituto de Pesquisa de Stanford e Universidade de Utah) e envolver seus alunos na criação dessa rede.

* 1969 ARPANET entra em operação com os quatro IMPs conectados, construídos pela empresa Bolt Beranek and Newman (BBN).

* 1970 lançamento do protocolo NCP (Network Control Program) que foi efetivamente implementado na ARPANET em 1971.

*
*
*
*
*
*
*
*
*
*
*
*

## Evolução dos Sistemas Computacionais
No advento dos sistemas computacionais, os equipamentos produzidos eram grandes e complexos. Devido a isso e ao alto grau de sofisticação para sua programação, eram exigidas pessoas altamente especializadas para operar esses primeiros computadores. Os usuários submetiam suas tarefas ao operador que era o responsável por ordenar e alimentar as tarefas para o computador na década de 1950.

Com a evolução da tecnologia e arquitetura, durante a década de 1960, foi possível aos usuários interagirem diretamente com o computador através dos primeiros terminais interativos. Somado a isso o desenvolvimento de sistemas de tempo compartilhado (time sharing), temos uma melhor utilização dos recursos, pois, naquele momento, várias tarefas, dos diferentes usuários, ocuparam simultaneamente o computador central.

Durante a década de 1970, ocorrem grandes mudanças na área. Com o aparecimento dos mini e microcomputadores, as organizações começam a distribuir o poder computacional, instalando sistemas computacionais em diversas áreas distribuídas dentro da organização.

Surgem novas necessidades, como o compartilhamento de recursos e dispositivos periféricos, a troca de informações e ambientes de trabalho cooperativo, que provocam a interconexão dos sistemas computacionais, formando os primeiros sistemas de comunicação para compartilhar recursos, trocar mensagens e melhor aproveitar os programas.

Neste cenário, em que os ambientes de trabalho exigem cada vez mais a interação entre os diversos usuários, é fortalecido o conceito de redes de computadores e cresce a necessidade de sua implementação.

## Redes de Computadores
O conjunto de sistemas computacionais desenvolvidos para compartilhar recursos e trocar informações por meio de um sistema de comunicação forma o que chamamos de Rede de Computadores 

## Transmissão da Informação
A transmissão da Informação é o fluxo de informações através de um canal de transmissão entre dois ou mais dispositivos (emissor/receptor), de acordo com uma série de regras predefinidas e do conhecimento das entidades envolvidas.

Em transmissão de sinais digitais, define-se banda passante necessária como a largura de banda mínima capaz de garantir que o receptor ainda recupere a informação original; é o intervalo de frequências que compõem o sinal. A largura da banda é o tamanho da banda passante, a diferença entre a maior e a menor frequência que compõem o sinal. Em redes, muitas vezes, utilizamos essa informação para especificar a velocidade do tráfego de rede, ou seja, qual é a capacidade em bits que o canal possui para transmitir ou receber dados por unidade de tempo (geralmente segundos). Por exemplo: 10 Mbps, lê-se 10 mega bits por segundo (bits não bytes).
### Fontes de Distorção 
O sinal recebido por um receptor, em qualquer transmissão, consiste no sinal transmitido modificado por várias distorções inseridas durante a transmissão. Vejamos a seguir quais são as principais distorções e o que afetam no sinal. 
### Ruídos
O ruído é a interferência de sinais indesejáveis. É um dos maiores limitantes do desempenho e podem ser classificados em quatro tipos:

* Ruídos Térmicos: provocados pela agitação dos elétrons nos condutores.
* Ruídos de intermodulação: provocados por defeitos em componentes do sistema ou por sinais com potência muito alta. Esse caso pode acontecer quando existe multiplexação na transmissão do sinal.
* Crosstalk: provocado por uma interferência indesejável entre condutores próximos. Um caso muito comum para observar esse efeito é a famosa linha cruzada em telefonia.
* Ruído Impulsivo: provocado por pulsos irregulares e com grandes amplitudes e podem ser provocados por distúrbios elétricos externos, falhas de equipamentos, etc. Interferências eletromagnéticas provocam esse tipo de ruído, por exemplo: um cabo de rede passando juntamente a cabos elétricos e reatores de lâmpadas fluorescentes.

### Atenuação
Atenuação acontece em qualquer meio físico, é a diminuição da potência do sinal com a distância. Podemos notar que toda tecnologia adota especificações para evitar problemas com a atenuação, assegurando a qualidade no sinal. Um exemplo seria a distância do controle para acionar o fechamento do carro. Em redes, é comum termos especificações que determinam a distância máxima entre um dispositivo final e seu respectivo dispositivo intermediário, como, por exemplo, o ponto de acesso WIFI (dispositivo intermediário) e o notebook, tablet ou smartphone (dispositivo final). A atenuação se dá devido a perdas de energia por calor ou por radiação; nos dois casos, quanto maior a frequência transmitida, maior é a perda. Ela é facilmente contornada através da instalação de repetidores colocados no caminho para regenerar totalmente o sinal original. Deve-se estar atento às distâncias máximas para a instalação adequada dos repetidores, de acordo com as características de atenuação do meio físico.
Eco

### Ecos 
são provenientes das mudanças de impedância numa linha. Toda vez que ocorrem, sinais serão refletidos e voltarão por essa linha, podendo corromper os sinais que estão sendo transmitidos. Um caso típico de eco é a ausência de terminador em redes de computadores que utilizam cabo coaxial. Essa condição faz com que o sinal, ao chegar um final do cabo, retorne pelo mesmo, causando colisão com o sinal transmitido, o que elimina qualquer condição de funcionamento no meio.

## Multiplexação e Modulação
Um meio de comunicação pode ser utilizado para a transmissão de um sinal somente quando sua banda passante for maior ou igual à banda passante exigida para um determinado sinal.

Como geralmente a banda passante disponível em um meio físico é maior do que a banda passante necessária para um sinal, podemos utilizar uma multiplexação para um melhor aproveitamento do meio.

A multiplexação é uma técnica que permite a transmissão de mais de um sinal ao mesmo tempo. Para tanto, é necessário utilizar a técnica de modulação seguinte que está detalhada para um melhor entendimento.

* Modulação: consiste em deslocar a faixa de frequência original de um sinal para outra faixa; o valor de deslocamento corresponde à frequência de uma onda denominada portadora.
* Multiplexação: obtém sinais similares em diferentes frequências deslocadas por modulação, evitando, com isso, a sobreposição dos sinais e a sua transmissão simultânea.

## Comutação
A comutação tem a função de criar um caminho na rede de comunicação. Para isso, é necessário alocar os recursos da rede, possibilitando a transmissão de dados através dos diversos dispositivos conectados. O processo de comutação é como se faz a reserva e a liberação de recursos de uma rede para sua utilização durante uma determinada comunicação.

 > Embora tanto a comutação de pacotes quanto a de circuitos predominem nas redes de telecomunicação de hoje, a tendência é, sem dúvida, a comutação de pacotes. Até mesmo muitas das atuais redes de telefonia de comutação de circuitos estão migrando aos poucos para a comutação de pacotes. Em especial, redes telefônicas usam comutação de pacotes na parte cara de uma chamada telefônica para o exterior (KUROSE, 2013, p. 23).
 
 Existem duas formas de comutação:
 * Comutação de Circuitos: nesse tipo de alocação, os recursos ficam permanentemente alocados até a finalização da transmissão de informação. Faz-se a reserva de recursos do caminho para estender um canal de comunicação fim a fim. Esta comutação é a base para o sistema telefônico tradicional.
 * Comutação de Pacotes: nessa técnica, divide-se a mensagem em pequenas unidades chamadas pacotes. A decisão do caminho a seguir é tomada pelo dispositivo de rede no momento em que o pacote chega. Dessa forma, os pacotes podem ser transmitidos por caminhos diferentes e chegam em ordens diferentes. Essa é a comutação utilizada para a transmissão de dados e a base para Internet e VoIP.

 # Topologias de Redes
As redes de computadores fisicamente são compostas de cabos (fios), placas de rede ou NIC (Network Interface Cards), computadores, switches, hubs, roteadores e todos os demais elementos que permitem que a rede possa funcionar para atender à necessidade de comunicação de seus usuários.

Esses elementos que formam a estrutura física da rede podem ser agrupados em duas categorias: 
* Dispositivos: equipamentos utilizados nas redes de computadores: 
* * Finais: são a origem ou o destino de uma mensagem transmitida pela rede, são os dispositivos de rede a que a maioria das pessoas está familiarizada, dispositivo que o usuário está utilizando em sua comunicação
* * Intermediários: conectam dispositivos finais individuais à rede e podem interconectar redes, fornecem conectividade e asseguram a transferência de dados pela rede; alguns exemplos são Switches, Hubs, Access Point, Modens e Roteadores.
* Meios de Rede: fornecem o canal sobre o qual a mensagem viaja da origem ao destinatário, sendo os principais meios atuais o par trançado (cobre), a fibra ótica e a transmissão sem fio.

A topologia de rede é o arranjo ou relacionamento dos dispositivos de rede e as interconexões entre eles. Porém, antes de tratarmos das topologias, precisamos entender como as infraestruturas de rede podem variar com relação a tamanho de cobertura, número de usuários conectados, números e tipos de serviços disponíveis e área de responsabilidade.

# Redes Locais, Metropolitanas e de Longas Distâncias
Segundo Tanenbaum e Wetheral (2011), um dos critérios que podem ser adotados para classificação de redes é determinado por sua escala. A seguir, há uma classificação de sistemas por seu tamanho físico:





# Material Complementar
* Livro Fique por Dentro da Internet, Editora: Cosac & Naify, Autor: Jerry Glenwright, ISBN: 9788575030370

>Comentário: o livro apresenta a Internet desde seu início até a sua difusão e uso cotidiano, indicando que ela é a maior revolução ocorrida no mundo das comunicações desde a invenção da imprensa.

* Filme Os Estagiários Ano: 2016
>Comentário: esse filme é uma comédia que conta a história do processo de seleção de estagiários para o Google, apresenta as mudanças e inovações que a empresa implementa através da Internet revolucionando os ambientes de trabalho.

# Conclusão

Nesta unidade, vimos a importância da comunicação e de seus elementos, fizemos uma viagem pela história e evolução das redes de computadores até a criação da Internet, aprendemos importantes conceitos de comunicação, diferenciando um sinal analógico de um digital e conhecemos quais são suas fontes de distorção e entendemos como podemos classificar as redes de computadores analisando sua distribuição geográfica e também pela forma com que os dispositivos se inter-relacionam (topologia) em uma rede de computadores.


# Referências Bibliográficas

KUROSE, J.; ROSS, K. W. Redes de Computadores e a Internet: uma abordagem top-down. 6. ed. São Paulo: Pearson, 2013.

MOTA, J. E. Análise de Tráfego em Redes TCP/IP. São Paulo: Novatec, 2013.

SOARES, L. F. G.; LEMOS, G; COLCHER, S. Redes de Computadores: das LANs MANs e WANs às redes ATM. 2. ed. Rio de Janeiro: Campus, 1995.

TANENBAUM, A. S.; WETHERAL, D. Redes de Computadores. 5. ed. São Paulo: Pearson, 2011.
