# 1st solution
file_name = "student_grade.inp"
def input_data(file_name):
	f = open(file_name, encoding = "UTF-8")
	student_name, student_grade = [], []
	for line in f:
		L = line.split()
		student_name.append(L[0])
		student_grade.append(float(L[1]))
	f.close()
	return student_name, student_grade
student_name, student_grade = input_data(file_name)
for i in range(len(student_name)):
	print(student_name[i], student_grade[i])
# 2nd solution
file_name = "student_grade.inp"
student_name, student_grade = [], []
with open(file_name, encoding = "utf-8") as f:
	for line in f:
		L = line.split()
		student_name.append(L[0])
		student_grade.append(float(L[1]))
for i in range(len(student_name)):
	print(student_name[i], student_grade[i])
# 3rd solution
file_name = "student_grade.out"
student_name = ['An', 'Anh', 'Ân', 'Bình', 'Phát']
student_grade = [8, 9, 8.5, 7, 10]
f = open(file_name, "w", encoding = "UTF-8")
for i in range(len(student_name)):
	print(student_name[i], student_grade[i], file = f)
f.close()