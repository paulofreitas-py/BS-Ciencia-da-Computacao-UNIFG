SELECT AVG(PRÇOUNITÁRIO) AS MÉDIADEPREÇOS

FROM PRODUTOS

WHERE PREÇOUNITÁRIO>50;

 

 

SELECT COLUNAS(S), EXPRESSÃO, FUNÇÃO (AGREGADA OU NÃO AGREGADA)

FROM TABELA

WHERE CONDIÇÃO(PREDICADOS,EXPRESSÕES, FUNÇÃO NÃO AGREGADA)

GROUP BY COLUNA

 

SELECT COLUNA, FUNÇÃO AGREGADA

FROM TABELA

GRUOUP BY COLUNA


    SELECT PAÍS, COUNT(*) AS QTDCLIENTES

    FROM CLIENTES

    GROUP BY PAÍS

    HAVING COUNT(*)>=9

    ORDER BY 2

Pressione Shift + Tab para acessar o histórico do bate-papo.


