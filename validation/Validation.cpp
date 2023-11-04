#include <bits/stdc++.h>
class StudentValidation{
	public:
		int validateStudent(Student student){
			if(student.getName().size()==0 ||student.getName().size()>7||student.getName().size()<5){
				cout<<"Invalid Name !"<<endl;
			}else if(student.getAge()>=30 ||student.getAge()<=18 ){
				cout<<"Invalid Age !"<<endl;
			}else if(student.getPhoneNumber()[0]!='0'||
				     (
						(student.getPhoneNumber()[1]+student.getPhoneNumber()[2]) != ('1'+'1') &&
				        (student.getPhoneNumber()[1]+student.getPhoneNumber()[2]) != ('1'+'2') &&
				        (student.getPhoneNumber()[1]+student.getPhoneNumber()[2]) != ('1'+'5') &&
				        (student.getPhoneNumber()[1]+student.getPhoneNumber()[2]) != ('1'+'0')
					 ) || student.getPhoneNumber().size() != 11
					  ){
				cout<<"Invalid Phone Number !"<<endl;
			}else if(student.getGpa()>=10 ||student.getGpa()<0 ){
				cout<<"Invalid GPA !"<<endl;
			}else{
				return 1;
			}
			return -1;
		}
};

class CourseValidation{
	public:
		int validateCourse(Course course){
			if(course.getName().size()==0 ||course.getName().size()<4){
				cout<<"Invalid Name !"<<endl;
			}if(course.getHour()<5 ||course.getHour()>15){
				cout<<"Invalid Hours !"<<endl;
			}else{
				return 1;
			}
			return -1;
		}
};

class TeacherValidation{
	public:
		int validateTeacher(Teacher teacher){
			if(teacher.getName().size()==0 ||teacher.getName().size()>7||teacher.getName().size()<5){
				cout<<"Invalid Name !"<<endl;
			}else if(teacher.getAge()> 60 ||teacher.getAge()<30 ){
				cout<<"Invalid Age !"<<endl;
			}else if(teacher.getPhoneNumber()[0]!='0'||
				     (
						(teacher.getPhoneNumber()[1]+teacher.getPhoneNumber()[2]) != ('1'+'1') &&
				        (teacher.getPhoneNumber()[1]+teacher.getPhoneNumber()[2]) != ('1'+'2') &&
				        (teacher.getPhoneNumber()[1]+teacher.getPhoneNumber()[2]) != ('1'+'5') &&
				        (teacher.getPhoneNumber()[1]+teacher.getPhoneNumber()[2]) != ('1'+'0')
					 ) || teacher.getPhoneNumber().size() != 11
					  ){
				cout<<"Invalid Phone Number !"<<endl;
			}else if(teacher.getSalary()<5000 ||teacher.getSalary()>15000 ){
				cout<<"Invalid Salary !"<<endl;
			}else{
				return 1;
			}
			return -1;
		}
};