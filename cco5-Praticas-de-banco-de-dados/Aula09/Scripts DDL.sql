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