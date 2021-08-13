# SO - Exclusão Mútua | Semáforos | Fila
Representação dinâmica com `javascript`do problema envolvendo exclusão mútua, semáforos da disciplina de sistemas operacionais 2019.1

## Questão
Suponha que uma universidade queira mostrar o quão politicamente correta ela é, aplicando a doutrina “Separado mas igual é inerentemente desigual” da Suprema Corte dos EUA para o gênero, assim como a raça, terminando sua prática de longa data de banheiros segregados por gênero no campus. No entanto, como uma concessão para a tradição, ela decreta que se uma mulher está em um banheiro, outras mulheres podem entrar, mas nenhum homem, e vice-versa. Um sinal com uma placa móvel na porta de cada banheiro indica em quais dos três estados possíveis ele se encontra atualmente:
• Vazio.
• Mulheres presentes.
• Homens presentes.

## Como usar?
Live - https://andrews-felipe.github.io/bthrm-so/

* Apresentações

A interface contém dois botões, adicionar mulheres ou homens. A cada inclusão de um indivíduo no fluxo as verificações
de disponibilidade são efetuadas
![Alt text](files/01.png?raw=true "Fluxo 1")

Ambos os sexos não podem estar ao mesmo tempo no banheiro, enquanto os homens estiverem dentro e não houverem vagas, os outros indivíduos ficarão em uma fila de espera. Também não é possível haver simultaneadade entre homem e mulher, isso quer dizer que se um homem estiver dentro do banheiro e a próxima pessoa da fila seja uma mulher e também existir homens na fila esses homens poderão entrar como preferência.
![Alt text](files/02.png?raw=true "Fluxo 2")

FIFO : Para cada indivíduo na fila, o primeiro que chegou tem a prioridade de usar, interrompendo os anteriores e mais atuais, mesmo quando a disponibilidade é para mulheres ou homens, a priporidade do primeiro indivíduo é válida
![Alt text](files/03.png?raw=true "Fluxo 3")
