SELECT [CódigoDaCategoria], COUNT([CódigoDoProduto]) AS Quantidade
FROM produtos
GROUP BY [CódigoDeCategoria]
HAVING COUNT(CódigoDoProduto)>=10;