CREATE SCHEMA Aula09;
USE Aula09;

CREATE TABLE cliente (
codCli int primary key,
nomeCli varchar(30),
Endereco varchar(80),
cidade varchar(30),
uf varchar(2),
cgc varchar(30),
cep bigint unsigned,
ie  int
);
    
-- Criar tabela vendedor 
CREATE TABLE vendedor (
codVend int primary key,
nome varchar(30),
faixaComissao char(1),
salarioFixo decimal(8,2) 
);
    
-- Criar tabela produto 
CREATE TABLE produto (
codProd int primary key,
nome varchar(30),
descricao varchar(3),
valorUnitario decimal(8,2)
);
    
-- Criar tabela pedido 
CREATE TABLE pedido (
codPedido int primary key,
prazoEntrega int,
codCli int,
codVend int
);
    
-- Criar tabela itempedido 
CREATE TABLE itempedido (
qtd int,
codPedido int,
codProd int,

CONSTRAINT pkItempedido primary key (codPedido, codProd)
);
    
-- Adicionar chaves estrangeiras nas tabelas pedido e itempedido via ALTER TABLE
ALTER TABLE pedido add constraint FK_pedido_cliente foreign key (codCli) references cliente(codCli); 
ALTER TABLE pedido add constraint FK_pedido_vendedor foreign key (codVend) references vendedor(codVend); 
    
ALTER TABLE itempedido add constraint FK_itempedido_pedido foreign key (codPedido) references pedido(codPedido);
ALTER TABLE itempedido add constraint FK_itempedido_produto foreign key (codProd) references produto(codProd); 

# Inserts para tabela cliente
insert into cliente (codCli, nomeCli, Endereco, cidade, uf, cgc, cep, ie) values (720, 'Ana', 'Rua 17 n. 19',
'Niterói', 'RJ','12113231/0001-34', 24358310, 2134);
insert into cliente (codCli, nomeCli, Endereco, cidade, uf, cgc, cep, ie) values (870, 'Flávio', 'Av. Pres. Vargas 10',
'São Paulo', 'SP','22534126/9387-09', 22763931, 4631);
insert into cliente (codCli, nomeCli, Endereco, cidade, uf, cgc, cep, ie) values (110, 'Jorge', 'Rua Caiapo 13',
'Curitiba', 'PR','14512764/9834-09', 30078500, null);
insert into cliente (codCli, nomeCli, Endereco, cidade, uf, cgc, cep, ie) values (222, 'Lúcia', 'Rua Itabira 123',
'Belo Horizonte', 'MG','28315213/9348-08', 22124391, 2985);
insert into cliente (codCli, nomeCli, Endereco, cidade, uf, cgc, cep, ie) values (830, 'Maurício', 'Av. Paulista 1236',
'São Paulo', 'SP','32816985/7465-06', 3012683, 9343);
insert into cliente (codCli, nomeCli, Endereco, cidade, uf, cgc, cep, ie) values (130, 'Edmar', 'Rua da Praia s/n',
'Salvador', 'BA','23463284/0234-09', 30079300, 7121);
insert into cliente (codCli, nomeCli, Endereco, cidade, uf, cgc, cep, ie) values (410, 'Rodolfo', 'Largo da Lapa 27',
'Rio de Janeiro', 'RJ','12835128/2346-09', 30078900, 7431);
insert into cliente (codCli, nomeCli, Endereco, cidade, uf, cgc, cep, ie) values (20, 'Beth', 'Av. Climério n. 45',
'São Paulo', 'SP','32485126/7326-08', 25679300, 9280);
insert into cliente (codCli, nomeCli, Endereco, cidade, uf, cgc, cep, ie) values (157, 'Paulo', 'Tv. Moraes c/3',
'Londrina', 'PR','32848223/0324-02', null, 1923);
insert into cliente (codCli, nomeCli, Endereco, cidade, uf, cgc, cep, ie) values (180, 'Lívio', 'Av. B. Mar n. 1256',
'Florianópolis', 'SC','12113231/0001-34', 30077500, null);
insert into cliente (codCli, nomeCli, Endereco, cidade, uf, cgc, cep, ie) values (260, 'Susana', 'Rua Lopes Mendes 12',
'Niterói', 'RJ','12736571/2347-04', 30046500, 2530);
insert into cliente (codCli, nomeCli, Endereco, cidade, uf, cgc, cep, ie) values (290, 'Renato', 'Rua Meireles n. 123',
'São Paulo', 'SP','21763571/0232-09', 30225900, 1820);
insert into cliente (codCli, nomeCli, Endereco, cidade, uf, cgc, cep, ie) values (390, 'Sebastião', 'Rua da Igreja 10',
'Uberaba', 'MG','32176547/0213-03', 30438700, 9071);
insert into cliente (codCli, nomeCli, Endereco, cidade, uf, cgc, cep, ie) values (234, 'José', 'Quadra 3 Bl. 3',
'Brasília', 'DF','21763576/1232-03', 22841650, 2931);

# Inserts para tabela vendedor
insert into vendedor (codVend, nome, faixaComissao, salarioFixo) values (209, 'José', 'C', 1800);
insert into vendedor (codVend, nome, faixaComissao, salarioFixo) values (111, 'Carlos', 'A', 2490);
insert into vendedor (codVend, nome, faixaComissao, salarioFixo) values (11, 'João', 'C', 2780);
insert into vendedor (codVend, nome, faixaComissao, salarioFixo) values (240, 'Antônio', 'C', 9500);
insert into vendedor (codVend, nome, faixaComissao, salarioFixo) values (720, 'Felipe', 'A', 4600);
insert into vendedor (codVend, nome, faixaComissao, salarioFixo) values (213, 'Jonas', 'A', 2300);
insert into vendedor (codVend, nome, faixaComissao, salarioFixo) values (101, 'João', 'C', 2650);
insert into vendedor (codVend, nome, faixaComissao, salarioFixo) values (310, 'Josias', 'B', 870);
insert into vendedor (codVend, nome, faixaComissao, salarioFixo) values (250, 'Maurício', 'B', 2930);

# Inserts para tabela pedido
insert into pedido (codPedido, prazoEntrega, codCli, codVend) values (121, 20, 410, 209);
insert into pedido (codPedido, prazoEntrega, codCli, codVend) values (97, 20, 720, 101);
insert into pedido (codPedido, prazoEntrega, codCli, codVend) values (101, 15, 720, 101);
insert into pedido (codPedido, prazoEntrega, codCli, codVend) values (137, 20, 720, 720);
insert into pedido (codPedido, prazoEntrega, codCli, codVend) values (148, 20, 720, 101);
insert into pedido (codPedido, prazoEntrega, codCli, codVend) values (189, 15, 870, 213);
insert into pedido (codPedido, prazoEntrega, codCli, codVend) values (104, 30, 110, 101);
insert into pedido (codPedido, prazoEntrega, codCli, codVend) values (203, 30, 830, 250);
insert into pedido (codPedido, prazoEntrega, codCli, codVend) values (98, 20, 410, 209);
insert into pedido (codPedido, prazoEntrega, codCli, codVend) values (143, 30, 20, 111);
insert into pedido (codPedido, prazoEntrega, codCli, codVend) values (105, 15, 180, 240);
insert into pedido (codPedido, prazoEntrega, codCli, codVend) values (111, 20, 260, 240);
insert into pedido (codPedido, prazoEntrega, codCli, codVend) values (103, 20, 260, 11);
insert into pedido (codPedido, prazoEntrega, codCli, codVend) values (91, 20, 260, 11);
insert into pedido (codPedido, prazoEntrega, codCli, codVend) values (138, 20, 260, 11);
insert into pedido (codPedido, prazoEntrega, codCli, codVend) values (108, 15, 290, 310);
insert into pedido (codPedido, prazoEntrega, codCli, codVend) values (119, 30, 390, 250);
insert into pedido (codPedido, prazoEntrega, codCli, codVend) values (127, 10, 410, 11);
insert into pedido (codPedido, prazoEntrega, codCli, codVend) values (300, 15, 410, 11);

# Inserts para tabela produto
insert into produto (codProd, nome, descricao, valorUnitario) values (25, 'Queijo', 'Kg', 0.97);
insert into produto (codProd, nome, descricao, valorUnitario) values (31, 'Chocolate', 'BAR', 0.37);
insert into produto (codProd, nome, descricao, valorUnitario) values (78, 'Vinho', 'L', 2.00);
insert into produto (codProd, nome, descricao, valorUnitario) values (22, 'Linho', 'M', 0.11);
insert into produto (codProd, nome, descricao, valorUnitario) values (30, 'Açúcar', 'SAC', 0.30);
insert into produto (codProd, nome, descricao, valorUnitario) values (53, 'Linha', 'M', 1.80);
insert into produto (codProd, nome, descricao, valorUnitario) values (13, 'Ouro', 'G', 6.18);
insert into produto (codProd, nome, descricao, valorUnitario) values (45, 'Madeira', 'M', 0.25);
insert into produto (codProd, nome, descricao, valorUnitario) values (87, 'Cano', 'M', 1.97);
insert into produto (codProd, nome, descricao, valorUnitario) values (77, 'Papel', 'M', 1.05);
insert into produto (codProd, nome, descricao, valorUnitario) values (98, 'Carne', 'Kg', 30.50);

# Inserts para tabela itempedido
insert into itempedido (qtd, codPedido, codProd) values (10, 121, 25);
insert into itempedido (qtd, codPedido, codProd) values (35, 121, 31);
insert into itempedido (qtd, codPedido, codProd) values (20, 97, 77);
insert into itempedido (qtd, codPedido, codProd) values (9, 101, 31);
insert into itempedido (qtd, codPedido, codProd) values (18, 101, 78);
insert into itempedido (qtd, codPedido, codProd) values (5, 101, 13);
insert into itempedido (qtd, codPedido, codProd) values (5, 98, 77);
insert into itempedido (qtd, codPedido, codProd) values (8, 148, 45);
insert into itempedido (qtd, codPedido, codProd) values (7, 148, 31);
insert into itempedido (qtd, codPedido, codProd) values (3, 148, 77);
insert into itempedido (qtd, codPedido, codProd) values (10, 148, 25);
insert into itempedido (qtd, codPedido, codProd) values (30, 148, 78);
insert into itempedido (qtd, codPedido, codProd) values (32, 104, 53);
insert into itempedido (qtd, codPedido, codProd) values (6, 203, 31);
insert into itempedido (qtd, codPedido, codProd) values (45, 189, 78);
insert into itempedido (qtd, codPedido, codProd) values (20, 143, 31);
insert into itempedido (qtd, codPedido, codProd) values (10, 143, 78);
insert into itempedido (qtd, codPedido, codProd) values (10, 105, 78);
insert into itempedido (qtd, codPedido, codProd) values (10, 111, 25);
insert into itempedido (qtd, codPedido, codProd) values (70, 111, 78);
insert into itempedido (qtd, codPedido, codProd) values (37, 103, 53);
insert into itempedido (qtd, codPedido, codProd) values (40, 91, 77);
insert into itempedido (qtd, codPedido, codProd) values (10, 138, 22);
insert into itempedido (qtd, codPedido, codProd) values (35, 138, 77);
insert into itempedido (qtd, codPedido, codProd) values (18, 138, 53);
insert into itempedido (qtd, codPedido, codProd) values (17, 108, 13);
insert into itempedido (qtd, codPedido, codProd) values (40, 119, 77);
insert into itempedido (qtd, codPedido, codProd) values (6, 119, 13);
insert into itempedido (qtd, codPedido, codProd) values (10, 119, 22);
insert into itempedido (qtd, codPedido, codProd) values (43, 119, 53);
insert into itempedido (qtd, codPedido, codProd) values (8, 137, 13);
insert into itempedido (qtd, codPedido, codProd) values (2, 300, 98);

DELIMITER //
CREATE PROCEDURE RELATORIO(OUT MAIOR_VALOR DECIMAL (6,2), OUT MENOR_VALOR DECIMAL (6,2), OUT QUANTIDADE INT)
  BEGIN
      SELECT MAX(P.VALORUNITARIO) INTO MAIOR_VALOR FROM PRODUTO P;
    SELECT MIN(P.VALORUNITARIO) INTO MENOR_VALOR FROM PRODUTO P;
        SELECT COUNT(P.CODPROD) INTO QUANTIDADE FROM PRODUTO P;
    END//
DELIMITER ;

CALL RELATORIO(@MAXIMO, @MINIMO, @QTD);
SELECT @MAXIMO, @MINIMO, @QTD;

-- Exercicio 2
DELIMITER //
CREATE TRIGGER AJUSTE_PEDIDO BEFORE INSERT
  ON ITEMPEDIDO
  FOR EACH ROW
    BEGIN
      DECLARE VAR INT;
            SELECT COUNT(I.CODPROD) INTO VAR FROM ITEMPEDIDO I
            WHERE I.CODPROD = NEW.CODPROD AND I.CODPEDIDO = NEW.CODPEDIDO;
            IF VAR >= 1
        THEN SIGNAL SQLSTATE '45000' SET MESSAGE_TEXT = 'PEDIDO JÁ EXISTENTE';
      END IF;
        END//
DELIMITER ;

INSERT INTO ITEMPEDIDO (QTD, CODPEDIDO, CODPROD)
VALUES (40, 91, 77);