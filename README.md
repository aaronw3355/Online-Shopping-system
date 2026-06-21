# Online-Shopping-system
Online Shopping System Project
# GAMETECHMARKET
#### Video Demo: <https://www.youtube.com/watch?v=FhkTRT8sMDQ> 
#### Description:
GAMETECHMARKET is an C++ online shopping system that I created as a project for my college course. In this system there will be three tiers of users. Regular users which will be standard and automatically created when first time guest check out and make their first purchase. Premium users which will offer special discounts and exclusive drops. Then VIP users which will have bigger discounts and early access to product releases. 


Functionality:
This program will allow users to:
View membership tier and status
Add and edit cart
See items in cart with the total amount due
See user contact information
Apply membership discounts

The files I used within these program have two files for each class. The header files {.h} basically has the code for what the class can do and the source files {.cpp} is how the class does it. So my Inventory, Product, Shopping Cart, and User classes all have header and source files. 
Product files include Product ID, Product Name, Product Price, and Stock. These files also include functions to get details from the inventory class to update stock numbers. 
Shopping Cart files include add/remove product and add up total cost functions. Each shopping cart will be connected with individual users and will only add items that were specifically selected by that one user.
User files will have the users contact information and what tier the user is as well as the users shopping cart. For each user tier there will be a different membership code that is applied to their cart.
Inventory files is where we add and track stock numbers and display the products that are in stock for users to add to their carts. 
The add-items-users file is a way for me to create objects such as my users and products. Using the #include statements this file will be able to access the .h files for each class. Once the users and products are entered here the .cpp files will carry out the actual functions. I used this method because it made everything more organized and simpler to find. If I wanted to find a specific user or product I could come to this file and not scroll and flip back and forth between different files. 
