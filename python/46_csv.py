import csv

with open('name.csv','r') as csv_file:
   csv_reader = csv.reader(csv_file)

   # skip the first line
   next(csv_reader)
   for line in csv_reader:
      print(line)
