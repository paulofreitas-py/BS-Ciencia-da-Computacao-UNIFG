# cco3-banco-de-dados
repositorio academico da cadeira Banco de Dados do Terceiro periodo de Ciência da Computação 
<img src="https://paulofreitasdev.files.wordpress.com/2021/05/cco-github.png"  align="center" valign="center"/> 


![License](https://img.shields.io/badge/Code%20License-MIT-green.svg)
![License](https://img.shields.io/badge/SQL-learning-green.svg)
![License](https://img.shields.io/badge/UNIFG-Banco%20de%20Dados-green.svg)

### CCO3P - Banco de Dados I
 - [Modelagem](modelagem)
 - [Normalização](normalizacao)
 - [Álgebra e cálculo relacional](algebra_e_calculo)
 - [SQL: aulas](sql/aulas)
 - [SQL: exercícios](sql/exercicios)
 
---


## Noções Básicas 
### Linguagens SQL
- **DDL** (Linguagem de Definição de Dados), que lida com esquemas e descrições de banco de dados.
- **DML** (Linguagem de Manipulação de Dados), que lida com a manipulação de dados e inclui instruções SQL mais comuns, como SELECT, INSERT, UPDATE, DELETE etc.
- **DCL** (Linguagem de Controle de Dados), que inclui comandos como GRANT, e principalmente relacionado com direitos, permissões e outros controles do sistema de banco de dados.

### Tipos de Dados
- [Cheat Sheet](https://gist.github.com/janikvonrotz/6e27788f662fcdbba3fb#datatypes)


### SQL Joins
<img src="https://paulofreitasdev.files.wordpress.com/2021/05/sql_join.png" width="80%" height="80%" align="center" valign="center"/> 

<br/>

---

## **Bancos de Dados Distribuidos**
#### Transações
É qualquer execução única de um programa usuário que exerce uma série de operações.

#### Propriedades
Todo banco de dados RELACIONAL deve possuir as propriedades ACID:
- ATOMICIDADE: todas as operações de uma transação são realizadas.
- CONSISTENCIA: leva o DB de um estado consistente para outro estado consistente.
- INDEPENDENCIA: o processamento de transações não deve interferir em outras transações.
- DURABILIDADE: resultados de operações confirmadas não devem interferir em outras transações.

#### Controle de transações
Controle de transações serve para garantir as caracteristicas fundamentais de uma transação (ACID).

#### Escalonamento de transações
- com lock
- otimista

#### Protocolo 2phase commit
- Preparação: um dos participantes é eleito coordenador e envia a cada nodo uma solicitação para preparar para o commit.
- Commit: se todos os nodos participantes estão prontos, o coordenador envia um sinal de commit para cada participante e depois executa
  - Se um nodo falhar na preparação do coomit, o coordenador manda um sinal de rollback para todos.
  - Se o nodo coordenador cair: haverá um backup que será eleito. Em seguida por broadcast, os outros nodos são avisados da mundança.

#### Deadlocks
...

---

### Otimização de Consultas
É sempre necessário levar em conta:
- replicação dos dados
- reconstrução das relações a partir de fragmentos
- tempo de recuperação
- tempo de processamento
- transmissão pela rede

#### Fragmentação de Dados
Um dado ou relação será fragmentado e armazenado em diferentes nodos.<br>
A fragmentação pode ser de 2 formas:
- Horizontal: os fragmentos são definidos por SELEÇÃO
- Vertical: os fragmentos são definidos por PROJEÇÃO

---

### Livros de Referência
- [Sistemas de Banco de Dados - Elmasri e Navathe - 6ª Edicao](https://github.com/brunocampos01/banco-de-dados/blob/master/livros/Sistemas%20de%20Banco%20de%20Dados%20navathe%206%C2%AA%20Edicao.pdf)
- [Sistemas de Gerenciamento de Banco de Dados - Ramakrishnan e Gehrke - 6ª Edicao](https://github.com/brunocampos01/banco-de-dados/blob/master/livros/Sistemas%20de%20Gerenciamento%20de%20Banco%20de%20Dados%20-%203%C2%AA%20Ed.pdf)
- [Use a cabeca - SQL](https://github.com/brunocampos01/banco-de-dados/blob/master/livros/Use%20a%20Cabeca%20-%20SQL.pdf)

---

<p  align="left">
<br/>
<a href="mailto:Paulofreitas.cco@gmail.com" target="_blank"><img src="" alt="Email Academico" width="30">
</a>
</a>
<a rel="license" href="http://creativecommons.org/licenses/by-sa/4.0/"><img alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by-sa/4.0/88x31.png",  align="right" /></a><br/>
</p>