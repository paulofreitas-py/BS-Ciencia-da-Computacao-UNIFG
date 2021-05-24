SELECT COLUNA(S), EXPRESSÃO, FUNÇÃO

FROM TEBELA(S)

WHERE CONDIÇÕES JUNÇÕES

GROUP BY COLUNA(S)

HAVING CRITICA GROUP BY

ORDER BY COLUNA(S)

 

SELECT COLUNA1_x, COLUNA2_Y

FROM TABELA_x AS X, TABELA_y AS Y

WHERE PK.X = FK.Y 

 

SELECT NOMEDOPRODUTO, NOMEDAEMPRESA, PAÍS

FROM PRODUTOS AS P, FORNECEDORES AS F

WHERE F.CÓDIGODOFONECEDOR=P.CÓDIGODOFORNECEDOR

AND PAÍS LIKE “???????????” 

 

SELECT ped.NÚMERODOPEDIDO, ped.DATADOPEDIDO, prod.NOMEDOPRODUTO, det.QUANTIDADE

FROM PRODUTOS as prod, PEDIDOS as ped , [DETALHES DO PEDIDO] as det

WHERE ped.NÚMERODOPEDIDO=det.NÚMERODOPEDIDO AND prod.CÓDIGODOPRODUTO=det.CÓDIGODOPRODUTO

ORDER BY 1

 

SELECT MAX(CÓDIGODOPRODUTO) FROM PRODUTOS;

 



SELECT NOMEDOPRUDTO, (UNIDADESEMESTOQUE + UNIDADESPEDIDAS) * PREÇO UNITÁRIO

FROM PRODUTOS

 

SELECT MIN(PREÇOUNITÁRIO) AS MENORPREÇO, MAX(PREÇOUNITÁRIO) AS MAIORPREÇO, AVG(PREÇOUNITÁRIO) AS MÉDIA, CAT.CÓDIGODACATEGORIA, CAT.NOMEDACATEGORIA

FROM PRODUTOS AS PROD, CATEGORIAS AS CAT

 WHERE CAT.CÓDIGODACATEGORIA= PROD.CÓDIGODACATEGORIA

AND CAT.NOMEDACATEGORIA LIKE ‘C*’

GROUP BY CAT.CÓDIGODACATEGORIA, CAT.NOMEDACATEGORIA

HAVING AVG(PREÇOUNITÁRIO) >50;


--SUBCONSULTA

SELECT COLUNAS...

FROM TABELAS

WHERE COLUNA = (SELECT COLUNA(S) FROM TABELA(S) WHERE.....)

 

SELECT * FROM PRODUTOS

WHERE PREÇOUNITÁRIO = (SELECT MAX(PREÇOUNIÁRIO) FROM PRODUTOS)

 

ANY

EXISTS

> OU < ALL

 