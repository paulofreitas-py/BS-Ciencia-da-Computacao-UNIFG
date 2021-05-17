CREATE TABLE [Retaurants] (
	id integer NOT NULL,
	name string NOT NULL,
	description string NOT NULL,
	delivery_tax float NOT NULL,
	city string NOT NULL,
	street string NOT NULL,
	neighborhood string NOT NULL,
	number string NOT NULL,
	complement string NOT NULL,
	category_id integer NOT NULL,
  CONSTRAINT [PK_RETAURANTS] PRIMARY KEY CLUSTERED
  (
  [id] ASC
  ) WITH (IGNORE_DUP_KEY = OFF)

)
GO
CREATE TABLE [Order] (
	id integer NOT NULL,
	name string NOT NULL,
	phone_number string NOT NULL,
	total_value float NOT NULL,
	status integer NOT NULL,
	restaurant_id integer NOT NULL,
	city string NOT NULL,
	neighborhood string NOT NULL,
	street string NOT NULL,
	number string NOT NULL,
	complement string NOT NULL,
  CONSTRAINT [PK_ORDER] PRIMARY KEY CLUSTERED
  (
  [id] ASC
  ) WITH (IGNORE_DUP_KEY = OFF)

)
GO
CREATE TABLE [orderProducts] (
	id integer NOT NULL,
	quantity integer NOT NULL,
	order_id integer NOT NULL,
	product_id integer NOT NULL,
  CONSTRAINT [PK_ORDERPRODUCTS] PRIMARY KEY CLUSTERED
  (
  [id] ASC
  ) WITH (IGNORE_DUP_KEY = OFF)

)
GO
CREATE TABLE [Products] (
	id integer NOT NULL,
	name string NOT NULL,
	description string NOT NULL,
	price float NOT NULL,
	product_category_id integer NOT NULL,
  CONSTRAINT [PK_PRODUCTS] PRIMARY KEY CLUSTERED
  (
  [id] ASC
  ) WITH (IGNORE_DUP_KEY = OFF)

)
GO
CREATE TABLE [Categories] (
	id integer NOT NULL,
	title string NOT NULL,
  CONSTRAINT [PK_CATEGORIES] PRIMARY KEY CLUSTERED
  (
  [id] ASC
  ) WITH (IGNORE_DUP_KEY = OFF)

)
GO
CREATE TABLE [ProductCategories] (
	id integer NOT NULL,
	title string NOT NULL,
	restaurant_id integer NOT NULL,
  CONSTRAINT [PK_PRODUCTCATEGORIES] PRIMARY KEY CLUSTERED
  (
  [id] ASC
  ) WITH (IGNORE_DUP_KEY = OFF)

)
GO
ALTER TABLE [Retaurants] WITH CHECK ADD CONSTRAINT [Retaurants_fk0] FOREIGN KEY ([category_id]) REFERENCES [Categories]([id])
ON UPDATE CASCADE
GO
ALTER TABLE [Retaurants] CHECK CONSTRAINT [Retaurants_fk0]
GO

ALTER TABLE [Order] WITH CHECK ADD CONSTRAINT [Order_fk0] FOREIGN KEY ([restaurant_id]) REFERENCES [Retaurants]([id])
ON UPDATE CASCADE
GO
ALTER TABLE [Order] CHECK CONSTRAINT [Order_fk0]
GO

ALTER TABLE [orderProducts] WITH CHECK ADD CONSTRAINT [orderProducts_fk0] FOREIGN KEY ([order_id]) REFERENCES [Order]([id])
ON UPDATE CASCADE
GO
ALTER TABLE [orderProducts] CHECK CONSTRAINT [orderProducts_fk0]
GO
ALTER TABLE [orderProducts] WITH CHECK ADD CONSTRAINT [orderProducts_fk1] FOREIGN KEY ([product_id]) REFERENCES [Products]([id])
ON UPDATE CASCADE
GO
ALTER TABLE [orderProducts] CHECK CONSTRAINT [orderProducts_fk1]
GO

ALTER TABLE [Products] WITH CHECK ADD CONSTRAINT [Products_fk0] FOREIGN KEY ([product_category_id]) REFERENCES [ProductCategories]([id])
ON UPDATE CASCADE
GO
ALTER TABLE [Products] CHECK CONSTRAINT [Products_fk0]
GO


ALTER TABLE [ProductCategories] WITH CHECK ADD CONSTRAINT [ProductCategories_fk0] FOREIGN KEY ([restaurant_id]) REFERENCES [Retaurants]([id])
ON UPDATE CASCADE
GO
ALTER TABLE [ProductCategories] CHECK CONSTRAINT [ProductCategories_fk0]
GO

