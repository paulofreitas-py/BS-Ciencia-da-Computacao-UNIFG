SELECT (PreçoUnitário * Quantidade) AS TotalGasto, CódigoDoProduto, Frete
FROM [Detalhes do Pedido], Pedidos;