/**
 * Shop.h
 * Author: Eric Hooks, 2026
 * Purpose: To define the shop and shop related functions.
 */

#include <stdlib.h>

 #ifndef SHOP_H
 #define SHOP_H

 /**
  * Define the shop structure.
  */
 typedef struct shop_t {
	//Variable for the shop's current monetary amount
	int money;

	//Variable for the shop name
	char* shopName;
 } Shop;

 /**
  * Function to create the shop.
  */
 Shop* initShop(char* name);

 #endif
