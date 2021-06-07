SELECT NomeDoProduto, CódigoDoFornecedor, COUNT(*) AS QtdProd
FROM Produtos
GROUP BY NomeDoProduto, CódigoDoFornecedor;