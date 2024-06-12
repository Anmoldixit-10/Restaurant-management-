#include <iostream>

using namespace std;

int main()
{
   int n;
   cout << "enter 1 for check the menu :";
   cin >> n;
   int price = 0;
re_order:
   if (n == 1)
   {
      cout << "Here is your menu :" << endl;
      cout << "Press 2 for order :    small pizza its cost 110 " << endl;
      cout << "Press 3 for order :    medium pizza its cost 180 " << endl;
      cout << "Press 4 for order :    large pizza its cost  220 " << endl;
      cout << "Press 5 for order :     extra cheez burger its cost 280 " << endl;
      cout << "Press 6 for order :     Special thali include(4 chapati , rice , curd ,salad : its cost 70)" << endl;
      cout << "Press 7 for order :     chole bhature its cost 90" << endl;
      cout << "press 8 for order :     Half plate shai paneer its cost 110 " << endl;
      cout << "Press 9 for order :     Full plate sahi paneer its cost 210  " << endl;
      cout << "Press 10 for order :     Half plate kadhai paneer its cost 180 " << endl;
      cout << "Press 11 for order :     Full plate kadhai paneer its cost 300 " << endl;

      int order;
      cout << "Enter number for your order " << endl;
      cin >> order;

      int quantity;
      cout << "enter the food quantity :";
      cin >> quantity;
      if (order == 2)
      {
         cout << "you order small pizza  thankyou : " << endl;
         int smallpizza = 110;
         price += smallpizza * quantity;
         cout << "price =" << price << endl;
      }
      if (order == 3)
      {
         cout << "you order medium size pizza thankyou :)" << endl;
         int mediumpizza = 180;
         price += mediumpizza * quantity;
         cout << "price =" << price << endl;
      }
      if (order == 4)
      {
         cout << "you order a large size pizza thankyou ::)" << endl;
         int largepizza = 220;
         price += largepizza * quantity;
         cout << "price =" << price << endl;
      }
      if (order == 5)
      {
         cout << "you order extra cheez burger thankyou :))" << endl;
         int extracheez = 280;
         price += extracheez * quantity;
         cout << "price =" << price << endl;
      }
      if (order == 6)
      {
         cout << " you order a special thali :" << endl;
         int specialthali = 70;
         price += specialthali * quantity;
         cout << "price =" << price << endl;
      }
      if (order == 7)
      {
         cout << "you order chole bhature :" << endl;
         int cholebhature = 90;
         price += cholebhature * quantity;
         cout << "price =" << price << endl;
      }
      if (order == 8)
      {
         cout << "you order half plate sahi paneer :";
         int halfplate = 110;
         price += halfplate * quantity;
         cout << "price =" << price << endl;
      }
      if (order == 9)
      {
         cout << "you order full plate of sahi paneer :";
         int fullplate = 210;
         price += fullplate * quantity;
         cout << " Total price =" << price << endl;
      }
      if (order == 10)
      {
         cout << "you order kadhai panner :)";
         int halfplate = 180;
         price += halfplate * quantity;
         cout << " Total price =" << price << endl;
      }

      if (order == 11)
      {
         cout << "you order a full plate of kadhai paneer :";
         int fullplate = 300;
         price += fullplate * quantity;
         cout << "Total price =" << price << endl;
      }
      cout << "Anything else you want type yes or no " << endl;
      char z;
      cin >> z;
      if (z == 'y')
      {
         goto re_order;
      }
      if (z == 'n')
      {
         cout << "Thanks" << endl;
      }

      //   price+=order;
      float gst = (float)0.08 * (float)(price);
      cout << "GST : " << gst << endl;
      cout << "Final price =" << price << " + " << gst << "=" << price + gst << endl;

      cout << "visit again :) " << endl;
   }
   return 0;
}