SELECT [CódigoDaCategoria],
[CódigoDoFornecedor],
COUNT(*) AS QuantidadeDeProdutos
FROM Produtos
GROUP BY [CódigoDaCategoria],
[CódigoDoFornecedor];