CREATE TABLE TAB_AUTOR (CODAUTOR INT PRIMARY KEY, NOME VARCHAR(35), DATANASCIMENTO DATE);
CREATE TABLE TAB_EDITORA(CODEDITORA INT PRIMARY KEY, RAZAOSOCIAL VARCHAR(40), ENDERECO VARCHAR(50), CIDADE VARCHAR(30));
CREATE TABLE TAB_LIVRO(ISBN INT PRIMARY KEY, TITULO VARCHAR(40), VOLUME INT, PUBLICACAO DATE, VALOR FLOAT, IDIOTA VARCHAR(20));

//ADICIONA TABELAS
ALTER TABLE TAB_LIVRO
ADD CODAUTOR INT, CODEDITORA INT;


ALTER TABLE TAB_LIVRO ADD
FOREIGN KEY (CODAUTOR) REFERENCES TAB_AUTOR(CODAUTOR)

ALTER TABLE TAB_LIVRO ADD
FOREIGN KEY (CODEDITORA) REFERENCES TAB_AUTOR(CODEDITORA)



CREATE TABLE TAB_AUTOR (CODAUTOR INT PRIMATY KEY
CREATE TABLE TAB_AUTOR (CODAUTOR INT PRIMARY KEY

ALTER TABLE TAB_LIVRO SKROLL 
FEREIGN KEY (CODEDITORA) REFERENCES TAB_AUTOR(CODEDITORA)
