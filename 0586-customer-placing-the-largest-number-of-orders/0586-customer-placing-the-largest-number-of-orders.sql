# Write your MySQL query statement below
SELECT customer_number FROM Orders 
GROUP BY customer_number 
ORDER BY MAX(order_number) DESC
LIMIT 1;