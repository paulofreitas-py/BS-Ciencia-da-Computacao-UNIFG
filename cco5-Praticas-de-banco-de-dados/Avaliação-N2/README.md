# N2 - CCO5 Práticas de Banco de Dados
![License](https://img.shields.io/badge/Code%20License-MIT-green.svg)
![License](https://img.shields.io/badge/Avaliação-N2-red.svg)
![License](https://img.shields.io/badge/UNIFG-Práticas%20de%20Banco%20de%20Dados-blue.svg)

## PROVA 2 - Parte Teórica
[Prova Pratica de BD - Teórica](https://www.notion.so/paulofreitaspy/N2-14-06-22-d157abe6a61143fe80256db758b7fec3#84b6a3b47347450d968dd669db50f45e)

Gabarito   | Resposta
--------- | ------
Exemplo 1 | B
Exemplo 2 | E
Exemplo 3 | C
Exemplo 4 | A
Exemplo 5 | E

## PROVA 2 - Parte Prática
![UML](https://www.notion.so/image/https%3A%2F%2Fs3-us-west-2.amazonaws.com%2Fsecure.notion-static.com%2Fc3b9bd4f-6c55-4fa9-a2c2-980862073471%2Fimage1.png?table=block&id=31621614-8a15-4a7c-9de4-3cbd1e16bf0f&spaceId=0160e3d7-f64c-4703-9546-c82f4c335a71&width=2000&userId=f502dd5d-b5d2-4453-bf51-6ebe19e7ad0f&cache=v2)

[MySQL Data Base](cco5-Praticas-de-banco-de-dados\Avaliação-N2\mysqlsampledatabase.sql)
## Questão 1 (Procedures - 1,5 pontos).  
Altere a tabela customers incluindo o campo full name. Escreva um procedimento que  para um dado código (customerNumber) irá inserir o nome completo do contato no novo  campo criado na tabela, baseado em seu primeiro e último nome (contactFirstName e  contactLastName). 
DICA: Usar a função CONCAT ( ) para fazer a junção dos nomes. 
~~~sql
Esta é uma linha de código
~~~
## Questão 2 (Triggers - 1,5 pontos).  
Escreva um trigger que automaticamente atualize a quantidade de produtos no estoque  (tabela products) para toda vez que um novo pedido for realizado (tabela orderdetails),  devendo decrementar a quantidade pedida de um produto do total contido em estoque. 
DICA: O trigger deve ser AFTER INSERT na tabela orderdetails. 
~~~sql
DELIMITER //
CREATE PROCEDURE SP_ATUALIZAESTOQUE('ID_PROD' INT, 'QUANTIDADECOMPRADA' INT, VALORUNIT DECIMAL(9,2))
BEGIN
  DECLARE CONTADOR INT(11);
    SELECT COUNT(*) INTO CONTADOR FROM PRODUCTS WHERE PRODUCTCODE = ID_PROD;
    
    IF CONTADOR > 0 THEN
    UPDATE PRODUCTS SET QUANTITYINSTOCK = QUANTITYINSTOCK + QUANTIDADECOMPRADA, BUYPRICE = VALORUNIT
        WHERE PRODUCTCODE = ID_PROD;
  ELSE 
    INSERT INTO PRODUCTS (PRODUCTCODE, QUANTITYINSTOCK, BUYPRICE) 
        VALUES (ID_PROD, QUANTIDADECOMPRADA, VALORUNIT);
  END IF;
END //
DELIMITER ;

DELIMITER //
CREATE TRIGGER TRG_ENTRADAPRODUTO AFTER INSERT ON ORDERDETAILS
FOR EACH ROW
BEGIN
  CALL SP_ATUALIZAESTOQUE (NEW.ID_PROD, NEW.QUANTIDADECOMPRADA, NEW.VALORUNIT);
END //
DELIMITER ;
~~~
## Questão 3 (Functions - 2,0 pontos). 
Escreva uma function que para um dado cliente e pedido, retorna o total a pagar para o  pedido especificado. 
DICA: Usar sum ( ) para fazer o somatório e junção de tabelas.
~~~sql
Esta é uma linha de código
~~~

## Docs

[Scripts Prova Prática]()

[Notion - Documentação](https://paulofreitaspy.notion.site/N2-14-06-22-d157abe6a61143fe80256db758b7fec3)

