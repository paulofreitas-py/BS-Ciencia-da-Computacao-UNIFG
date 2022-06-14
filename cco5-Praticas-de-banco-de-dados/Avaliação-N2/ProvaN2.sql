CREATE SCHEMA ProvaN2;
USE ProvaN2

######Avaliação N2 - Prática######
#Disciplina: Prática de Banco de Dados
#Docente: Jonathan Bandeira
#Grupo: 	Diego Leonardo da Silva França (202002543);
#			Ortiz Ulisses Araujo Silva (202003865);
#			Paulo Montenegro Campos (202000095);
#			Paulo Emanuel Madeira de Freitas (202003566);
#			Rodrigo Fernandes de Carvalho (202003014);
#			Yago Guierone Pereira Ribeiro (202004132);

USE CLASSICMODELS;

#1 Questão: Altere a tabela customers incluindo o campo full name. Escreva um procedimento que
#para um dado código (customerNumber) irá inserir o nome completo do contato no novo
#campo criado na tabela, baseado em seu primeiro e último nome (contactFirstName e
#contactLastName).
#DICA: Usar a função CONCAT ( ) para fazer a junção dos nomes.
create procedure sp_customer (user_customer_id int)
 select concat('full name: ', contactFirstName,' ', contactLastName)
    as CustomerName
    from customers
    where customerNumber = user_customer_id;

call sp_customer (103);

#2 Questão: Escreva um trigger que automaticamente atualize a quantidade de produtos no estoque
#(tabela products) para toda vez que um novo pedido for realizado (tabela orderdetails),
#devendo decrementar a quantidade pedida de um produto do total contido em estoque.
#DICA: O trigger deve ser AFTER INSERT na tabela orderdetails.
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

#3 QUESTÃO: Escreva uma function que para um dado cliente e pedido, retorna o total a pagar para o
#pedido especificado.
#DICA: Usar sum ( ) para fazer o somatório e junção de tabelas.
create function pedido_especifico(id int)
returns char(20), int
return
(
  SELECT concat(c.contactFirstName,' ',c.contactLastName) as fullname, SUM(od.priceEach) as total
  FROM customers as c
  INNER JOIN orders as o
  ON c.customerNumber = o.customerNumber
  inner join orderdetails as od
  ON od.orderNumber = o.orderNumber
  where od.orderNumber = id
  group by fullname
)