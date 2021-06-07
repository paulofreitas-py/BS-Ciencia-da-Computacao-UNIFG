SELECT (od.UnitPrice*od.Quantity)*(1-od.Discount) AS 'Total Expense', o.Freight, c.CompanyName AS 'Customer'
FROM order details AS od
JOIN orders AS o
ON o.OrderID = od.OrderID
JOIN customers AS c
ON c.CustomerID = o.CustomerID
ORDER BY (od.UnitPrice*od.Quantity)*(1-od.Discount) DESC
LIMIT 1;