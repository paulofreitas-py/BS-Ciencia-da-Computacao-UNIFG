SELECT NomeDoProduto, C√≥digoDoFornecedor, COUNT(*) AS QtdProd
FROM Produtos
GROUP BY NomeDoProduto, C√≥digoDoFornecedor;