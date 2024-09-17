-- Names and cities of all salespeople in London with commission above 0.12

SELECT sname, city, comm FROM salesperson WHERE COMM > 0.12 AND city = 'london';