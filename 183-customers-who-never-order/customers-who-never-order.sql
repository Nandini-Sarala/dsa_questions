# Write your MySQL query statement below
#select id from Customers - select customerId from Orders;
#select name from Customers where Orders.customerId not in Customers;
#Customers.id not in Orders.customerId
#select c.name as Customers from Customers c,Orders o where c.id!=o.customerId;
select c.name as Customers from Customers c where c.id not in (select CustomerId from Orders);