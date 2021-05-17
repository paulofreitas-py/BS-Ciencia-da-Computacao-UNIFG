CREATE TABLE "Retaurants" (
	"id" INT NOT NULL,
	"name" VARCHAR2(255) NOT NULL,
	"description" VARCHAR2(255) NOT NULL,
	"delivery_tax" FLOAT NOT NULL,
	"city" VARCHAR2(255) NOT NULL,
	"street" VARCHAR2(255) NOT NULL,
	"neighborhood" VARCHAR2(255) NOT NULL,
	"number" VARCHAR2(255) NOT NULL,
	"complement" VARCHAR2(255) NOT NULL,
	"category_id" INT NOT NULL,
	constraint RETAURANTS_PK PRIMARY KEY ("id"));

CREATE sequence "RETAURANTS_ID_SEQ";

CREATE trigger "BI_RETAURANTS_ID"
  before insert on "Retaurants"
  for each row
begin
  select "RETAURANTS_ID_SEQ".nextval into :NEW."id" from dual;
end;

/
CREATE TABLE "Order" (
	"id" INT NOT NULL,
	"name" VARCHAR2(255) NOT NULL,
	"phone_number" VARCHAR2(255) NOT NULL,
	"total_value" FLOAT NOT NULL,
	"status" INT NOT NULL,
	"restaurant_id" INT NOT NULL,
	"city" VARCHAR2(255) NOT NULL,
	"neighborhood" VARCHAR2(255) NOT NULL,
	"street" VARCHAR2(255) NOT NULL,
	"number" VARCHAR2(255) NOT NULL,
	"complement" VARCHAR2(255) NOT NULL,
	constraint ORDER_PK PRIMARY KEY ("id"));

CREATE sequence "ORDER_ID_SEQ";

CREATE trigger "BI_ORDER_ID"
  before insert on "Order"
  for each row
begin
  select "ORDER_ID_SEQ".nextval into :NEW."id" from dual;
end;

/
CREATE TABLE "orderProducts" (
	"id" INT NOT NULL,
	"quantity" INT NOT NULL,
	"order_id" INT NOT NULL,
	"product_id" INT NOT NULL,
	constraint ORDERPRODUCTS_PK PRIMARY KEY ("id"));

CREATE sequence "ORDERPRODUCTS_ID_SEQ";

CREATE trigger "BI_ORDERPRODUCTS_ID"
  before insert on "orderProducts"
  for each row
begin
  select "ORDERPRODUCTS_ID_SEQ".nextval into :NEW."id" from dual;
end;

/
CREATE TABLE "Products" (
	"id" INT NOT NULL,
	"name" VARCHAR2(255) NOT NULL,
	"description" VARCHAR2(255) NOT NULL,
	"price" FLOAT NOT NULL,
	"product_category_id" INT NOT NULL,
	constraint PRODUCTS_PK PRIMARY KEY ("id"));

CREATE sequence "PRODUCTS_ID_SEQ";

CREATE trigger "BI_PRODUCTS_ID"
  before insert on "Products"
  for each row
begin
  select "PRODUCTS_ID_SEQ".nextval into :NEW."id" from dual;
end;

/
CREATE TABLE "Categories" (
	"id" INT NOT NULL,
	"title" VARCHAR2(255) NOT NULL,
	constraint CATEGORIES_PK PRIMARY KEY ("id"));

CREATE sequence "CATEGORIES_ID_SEQ";

CREATE trigger "BI_CATEGORIES_ID"
  before insert on "Categories"
  for each row
begin
  select "CATEGORIES_ID_SEQ".nextval into :NEW."id" from dual;
end;

/
CREATE TABLE "ProductCategories" (
	"id" INT NOT NULL,
	"title" VARCHAR2(255) NOT NULL,
	"restaurant_id" INT NOT NULL,
	constraint PRODUCTCATEGORIES_PK PRIMARY KEY ("id"));

CREATE sequence "PRODUCTCATEGORIES_ID_SEQ";

CREATE trigger "BI_PRODUCTCATEGORIES_ID"
  before insert on "ProductCategories"
  for each row
begin
  select "PRODUCTCATEGORIES_ID_SEQ".nextval into :NEW."id" from dual;
end;

/
ALTER TABLE "Retaurants" ADD CONSTRAINT "Retaurants_fk0" FOREIGN KEY ("category_id") REFERENCES "Categories"("id");

ALTER TABLE "Order" ADD CONSTRAINT "Order_fk0" FOREIGN KEY ("restaurant_id") REFERENCES "Retaurants"("id");

ALTER TABLE "orderProducts" ADD CONSTRAINT "orderProducts_fk0" FOREIGN KEY ("order_id") REFERENCES "Order"("id");
ALTER TABLE "orderProducts" ADD CONSTRAINT "orderProducts_fk1" FOREIGN KEY ("product_id") REFERENCES "Products"("id");

ALTER TABLE "Products" ADD CONSTRAINT "Products_fk0" FOREIGN KEY ("product_category_id") REFERENCES "ProductCategories"("id");


ALTER TABLE "ProductCategories" ADD CONSTRAINT "ProductCategories_fk0" FOREIGN KEY ("restaurant_id") REFERENCES "Retaurants"("id");

