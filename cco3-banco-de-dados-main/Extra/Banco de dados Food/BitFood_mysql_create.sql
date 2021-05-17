CREATE TABLE `Retaurants` (
	`id` INT NOT NULL AUTO_INCREMENT,
	`name` VARCHAR(255) NOT NULL,
	`description` VARCHAR(255) NOT NULL,
	`delivery_tax` FLOAT NOT NULL,
	`city` VARCHAR(255) NOT NULL,
	`street` VARCHAR(255) NOT NULL,
	`neighborhood` VARCHAR(255) NOT NULL,
	`number` VARCHAR(255) NOT NULL,
	`complement` VARCHAR(255) NOT NULL,
	`category_id` INT NOT NULL,
	PRIMARY KEY (`id`)
);

CREATE TABLE `Order` (
	`id` INT NOT NULL AUTO_INCREMENT,
	`name` VARCHAR(255) NOT NULL,
	`phone_number` VARCHAR(255) NOT NULL,
	`total_value` FLOAT NOT NULL,
	`status` INT NOT NULL,
	`restaurant_id` INT NOT NULL,
	`city` VARCHAR(255) NOT NULL,
	`neighborhood` VARCHAR(255) NOT NULL,
	`street` VARCHAR(255) NOT NULL,
	`number` VARCHAR(255) NOT NULL,
	`complement` VARCHAR(255) NOT NULL,
	PRIMARY KEY (`id`)
);

CREATE TABLE `orderProducts` (
	`id` INT NOT NULL AUTO_INCREMENT,
	`quantity` INT NOT NULL,
	`order_id` INT NOT NULL,
	`product_id` INT NOT NULL,
	PRIMARY KEY (`id`)
);

CREATE TABLE `Products` (
	`id` INT NOT NULL AUTO_INCREMENT,
	`name` VARCHAR(255) NOT NULL,
	`description` VARCHAR(255) NOT NULL,
	`price` FLOAT NOT NULL,
	`product_category_id` INT NOT NULL,
	PRIMARY KEY (`id`)
);

CREATE TABLE `Categories` (
	`id` INT NOT NULL AUTO_INCREMENT,
	`title` VARCHAR(255) NOT NULL AUTO_INCREMENT,
	PRIMARY KEY (`id`)
);

CREATE TABLE `ProductCategories` (
	`id` INT NOT NULL AUTO_INCREMENT,
	`title` VARCHAR(255) NOT NULL,
	`restaurant_id` INT NOT NULL,
	PRIMARY KEY (`id`)
);

ALTER TABLE `Retaurants` ADD CONSTRAINT `Retaurants_fk0` FOREIGN KEY (`category_id`) REFERENCES `Categories`(`id`);

ALTER TABLE `Order` ADD CONSTRAINT `Order_fk0` FOREIGN KEY (`restaurant_id`) REFERENCES `Retaurants`(`id`);

ALTER TABLE `orderProducts` ADD CONSTRAINT `orderProducts_fk0` FOREIGN KEY (`order_id`) REFERENCES `Order`(`id`);

ALTER TABLE `orderProducts` ADD CONSTRAINT `orderProducts_fk1` FOREIGN KEY (`product_id`) REFERENCES `Products`(`id`);

ALTER TABLE `Products` ADD CONSTRAINT `Products_fk0` FOREIGN KEY (`product_category_id`) REFERENCES `ProductCategories`(`id`);

ALTER TABLE `ProductCategories` ADD CONSTRAINT `ProductCategories_fk0` FOREIGN KEY (`restaurant_id`) REFERENCES `Retaurants`(`id`);

