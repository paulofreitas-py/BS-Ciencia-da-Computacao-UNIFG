SELECT c.NomeDaCategoria, dp.Quantidade
FROM Categorias AS c, [Detalhes do Pedido] AS dp
WHERE dp.Quantidade > 10