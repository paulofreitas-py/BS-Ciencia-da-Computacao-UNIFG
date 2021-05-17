CREATE TABLE "Retaurants" (
	"id" serial NOT NULL,
	"name" VARCHAR(255) NOT NULL,
	"description" VARCHAR(255) NOT NULL,
	"delivery_tax" FLOAT NOT NULL,
	"city" VARCHAR(255) NOT NULL,
	"street" VARCHAR(255) NOT NULL,
	"neighborhood" VARCHAR(255) NOT NULL,
	"number" VARCHAR(255) NOT NULL,
	"complement" VARCHAR(255) NOT NULL,
	"category_id" integer NOT NULL,
	CONSTRAINT "Retaurants_pk" PRIMARY KEY ("id")
) WITH (
  OIDS=FALSE
);



CREATE TABLE "Order" (
	"id" serial NOT NULL,
	"name" VARCHAR(255) NOT NULL,
	"phone_number" VARCHAR(255) NOT NULL,
	"total_value" FLOAT NOT NULL,
	"status" integer NOT NULL,
	"restaurant_id" integer NOT NULL,
	"city" VARCHAR(255) NOT NULL,
	"neighborhood" VARCHAR(255) NOT NULL,
	"street" VARCHAR(255) NOT NULL,
	"number" VARCHAR(255) NOT NULL,
	"complement" VARCHAR(255) NOT NULL,
	CONSTRAINT "Order_pk" PRIMARY KEY ("id")
) WITH (
  OIDS=FALSE
);



CREATE TABLE "orderProducts" (
	"id" serial NOT NULL,
	"quantity" integer NOT NULL,
	"order_id" integer NOT NULL,
	"product_id" integer NOT NULL,
	CONSTRAINT "orderProducts_pk" PRIMARY KEY ("id")
) WITH (
  OIDS=FALSE
);



CREATE TABLE "Products" (
	"id" serial NOT NULL,
	"name" VARCHAR(255) NOT NULL,
	"description" VARCHAR(255) NOT NULL,
	"price" FLOAT NOT NULL,
	"product_category_id" integer NOT NULL,
	CONSTRAINT "Products_pk" PRIMARY KEY ("id")
) WITH (
  OIDS=FALSE
);



CREATE TABLE "Categories" (
	"id" serial NOT NULL,
	"title" serial(255) NOT NULL,
	CONSTRAINT "Categories_pk" PRIMARY KEY ("id")
) WITH (
  OIDS=FALSE
);



CREATE TABLE "ProductCategories" (
	"id" serial NOT NULL,
	"title" VARCHAR(255) NOT NULL,
	"restaurant_id" integer NOT NULL,
	CONSTRAINT "ProductCategories_pk" PRIMARY KEY ("id")
) WITH (
  OIDS=FALSE
);



ALTER TABLE "Retaurants" ADD CONSTRAINT "Retaurants_fk0" FOREIGN KEY ("category_id") REFERENCES "Categories"("id");

ALTER TABLE "Order" ADD CONSTRAINT "Order_fk0" FOREIGN KEY ("restaurant_id") REFERENCES "Retaurants"("id");

ALTER TABLE "orderProducts" ADD CONSTRAINT "orderProducts_fk0" FOREIGN KEY ("order_id") REFERENCES "Order"("id");
ALTER TABLE "orderProducts" ADD CONSTRAINT "orderProducts_fk1" FOREIGN KEY ("product_id") REFERENCES "Products"("id");

ALTER TABLE "Products" ADD CONSTRAINT "Products_fk0" FOREIGN KEY ("product_category_id") REFERENCES "ProductCategories"("id");


ALTER TABLE "ProductCategories" ADD CONSTRAINT "ProductCategories_fk0" FOREIGN KEY ("restaurant_id") REFERENCES "Retaurants"("id");

