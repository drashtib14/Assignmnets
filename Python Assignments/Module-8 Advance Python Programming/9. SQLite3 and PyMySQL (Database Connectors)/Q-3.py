# Write a Python program to connect to an SQLite3 database, create a table, insert data, and fetch data.

import sqlite3

# connect to database or create one if it doesn't exist
connection = sqlite3.connect("example.db")

# create a cursor object to execute SQL queries
cursor = connection.cursor()

# create a table if it doesn't already exist
cursor.execute("""
CREATE TABLE IF NOT EXISTS students (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    name VARCHAR(20) NOT NULL,
    age INTEGER NOT NULL,
    grade VARCHAR(1) NOT NULL
)
""")
print("Table created successfully")

# insert data into the table
students_data = [
    ("Alice", 20, "A"),
    ("Bob", 22, "B"),
    ("Charlie", 19, "A"),
]
cursor.executemany("INSERT INTO students (name, age, grade) VALUES (?, ?, ?)", students_data)
print("Data inserted successfully.")

# fetch data from table
cursor.execute("SELECT * FROM students")
rows = cursor.fetchall()

# display fetched data
print("\nFetched Data:")
for row in rows:
    print(f"ID: {row[0]}, Name: {row[1]}, Age: {row[2]}, Grade: {row[3]}")

# commit the changes and close the connection
connection.commit()
connection.close()
print("\nDatabase connection closed.")