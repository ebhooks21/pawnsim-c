/**
 * Shop.c
 * Author: Eric Hooks
 * Purpose: To implement shop functionality.
 */

 #include "HEADER/SHOP.H"

 /**
  * Function to create the shop.
  */
 Shop* initShop(char* name) {
	Shop* s = malloc(sizeof(Shop));

	s->shopName = name;
	s->money = 0;
 }
