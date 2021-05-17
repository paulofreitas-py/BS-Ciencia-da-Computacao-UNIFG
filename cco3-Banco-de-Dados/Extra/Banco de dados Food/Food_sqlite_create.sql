CREATE TABLE Retaurants (
	id integer PRIMARY KEY AUTOINCREMENT,
	name string,
	description string,
	delivery_tax float,
	city string,
	street string,
	neighborhood string,
	number string,
	complement string,
	category_id integer
);

CREATE TABLE Order (
	id integer PRIMARY KEY AUTOINCREMENT,
	name string,
	phone_number string,
	total_value float,
	status integer,
	restaurant_id integer,
	city string,
	neighborhood string,
	street string,
	number string,
	complement string
);

CREATE TABLE orderProducts (
	id integer PRIMARY KEY AUTOINCREMENT,
	quantity integer,
	order_id integer,
	product_id integer
);

CREATE TABLE Products (
	id integer PRIMARY KEY AUTOINCREMENT,
	name string,
	description string,
	price float,
	product_category_id integer
);

CREATE TABLE Categories (
	id integer PRIMARY KEY AUTOINCREMENT,
	title string PRIMARY KEY AUTOINCREMENT
);

CREATE TABLE ProductCategories (
	id integer PRIMARY KEY AUTOINCREMENT,
	title string,
	restaurant_id integer
);

