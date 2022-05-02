# CCO5 Práticas de Banco de Dados
![License](https://img.shields.io/badge/Code%20License-MIT-green.svg)
![License](https://img.shields.io/badge/-learning-red.svg)
![License](https://img.shields.io/badge/UNIFG-Práticas%20de%20Banco%20de%20Dados-blue.svg)
# Exercícios SQL (Base de dados Sakila)

## Documentação 
[Banco de dados Sakila](https://www.notion.so/paulofreitaspy/Exerc-cios-SQL-Base-de-dados-Sakila-0180189ba2dc4798abf939fddddbe68d)

1. Lista de todos os filmes

```sql
SELECT * 
FROM film;
```

2. Lista do titulo de todos os filmes

```sql
SELECT title 
FROM film;
```

3. Lista de filmes com duração menor do que 60 minutos

```sql
SELECT *
FROM film
WHERE length < 60;
```

4. Lista dos clientes inativos


```sql

SELECT *
FROM customer
WHERE active = 0;

```

5. Lista dos clientes ativos e respectivos endereços


```sql

SELECT first_name, last_name, address
FROM customer c, address a
WHERE active = 1 AND c.address_id = a.address_id;

```

6. Lista dos nomes dos clientes residentes no Brasil.
```sql
SELECT first_name, last_name, a.address, co.country
FROM customer c, address a, city ct, country co
WHERE c.address_id = a.address_id
	AND a.city_id = ct.city_id 
	AND ct.country_id = co.country_id
    AND co.country = "Brazil";
```

7. Relação de filmes e atores que atuaram no mesmo

```sql
SELECT f.title, a.first_name, a.last_name
FROM film f, film_actor fa, actor a
WHERE f.film_id = fa.film_id AND a.actor_id = fa.actor_id

```

8. Relação de filmes e atores que atuaram no mesmo ordenada por filme

```sql

SELECT f.title, a.first_name, a.last_name
FROM film f, film_actor fa, actor a
WHERE f.film_id = fa.film_id AND a.actor_id = fa.actor_id
ORDER BY f.title

```

9. Relação de filmes e atores que atuaram no mesmo ordenada por ator

```sql

SELECT f.title, a.first_name, a.last_name
FROM film f, film_actor fa, actor a
WHERE f.film_id = fa.film_id AND a.actor_id = fa.actor_id
ORDER BY a.first_name

```

10. Relação de filmes com participação de um ator específico.

```sql

SET @ator := "scarlett";

SELECT f.title, a.first_name, a.last_name
FROM film f, film_actor fa, actor a
WHERE f.film_id = fa.film_id AND a.actor_id = fa.actor_id
AND a.first_name = @ator;

```

11. Quantidade total de filmes

```sql

SELECT COUNT(*) qtd_filmes
FROM film;

```

12. Duração média dos filmes

```sql

SELECT AVG(length)
FROM film;

```

13. Lista de filmes por categoria.

```sql
SELECT f.title, c.name 
FROM film f,category c, film_category fc
WHERE f.film_id = fc.film_id
  AND fc.category_id = c.category_id;
```

14. Quantidade de filmes por categoria.

```sql
SELECT c.name, COUNT(*)
FROM film f,category c, film_category fc
WHERE f.film_id = fc.film_id AND fc.category_id = c.category_id
GROUP BY c.name;

```

15. Duração média dos filmes por categoria

```sql

SELECT c.name, AVG(f.length)
FROM film f,category c, film_category fc
WHERE f.film_id = fc.film_id 
  AND fc.category_id = c.category_id
GROUP BY c.name;

```

16. Quantidade de filmes por categoria das categorias com menos de 57 filmes

```sql

SELECT c.name, COUNT(*) qtd
FROM film f,category c, film_category fc
WHERE f.film_id = fc.film_id AND fc.category_id = c.category_id
GROUP BY c.name
HAVING qtd < 57;

```

17. Duração média dos filmes por categoria das categorias com menos de 57 filmes

```sql
SELECT c.name, COUNT(*) qtd, AVG(f.length)
FROM film f,category c, film_category fc
WHERE f.film_id = fc.film_id AND fc.category_id = c.category_id
GROUP BY c.name
HAVING qtd < 57;

```

18. Quantidade de filmes alugados por cliente

```sql

SELECT c.first_name, c.last_name, COUNT(*)
FROM customer c, rental r
WHERE c.customer_id = r.customer_id
GROUP BY (c.customer_id);

```

19. Quantidade de filmes alugados por cliente em ordem decrescente de quantidade de filmes alugados

```sql

SELECT c.first_name, c.last_name, COUNT(*) qtd
FROM customer c, rental r
WHERE c.customer_id = r.customer_id
GROUP BY (c.customer_id)
ORDER BY qtd desc;

```

20. Relação de nomes dos clientes que possuem um filme alugado no momento

```sql
SELECT c.first_name, c.last_name
FROM customer c
WHERE EXISTS (SELECT 1 
	FROM rental r
    WHERE c.customer_id = r.customer_id AND r.return_date IS NOT NULL);

```

21. Relação de nomes dos clientes que não possuem um filme alugado no momento 

```sql

SELECT c.first_name, c.last_name
FROM customer c
WHERE NOT EXISTS (SELECT 1 
	FROM rental r
    WHERE c.customer_id = r.customer_id AND r.return_date IS NOT NULL);

```

