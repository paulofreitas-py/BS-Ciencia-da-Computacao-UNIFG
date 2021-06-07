SELECT c.NomeDaEmpresa, c.País, p.DataDoPedido
FROM Clientes AS c, Pedidos AS p
WHERE c.País = 'Brasil' AND (p.DataDoPedido >= #01/01/1997# AND p.DataDoPedido <= #31/12/1997#);