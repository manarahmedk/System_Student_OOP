#include <bits/stdc++.h>
#include "controller/Controller.cpp"
using namespace std;

int process;
int id;

void displaySystem(){
	
	cout<<"\t\t************  Management System ************"<<endl;
	cout<<"1 - About Students"<<"\t\t"<<"2 - About Cources"<<endl;
	cout<<"3 - About Teachers"<<"\t\t"<<"4 - Exit"<<endl;
}
void showList(string value){
	cout<<"\t\t************ "<<value<<" Management System ************"<<endl;
	cout<<"1 - Add "<<value<<"\t\t"<<"1 - Remove "<<value<<endl;
	cout<<"3 - Edit "<<value<<"        "<<"4 - Show "<<value<<endl;
	cout<<"5 - Exit"<<endl;
}
void addStudent(){
	cout<<"Please Enter Student Data :"<<endl;
	string name;
	double gpa;
	int age;
	string phoneNumber;
	Student student;
	cout<<"Enter Student Name :";
	cin>>name;
	student.setName(name);
	cout<<"Enter Student Age :";
	cin>>age;
	student.setAge(age);
	cout<<"Enter Student PhoneNumber :";
	cin>>phoneNumber;
	student.setPhoneNumber(phoneNumber);
	cout<<"Enter Student GPA :";
	cin>>gpa;
	student.setGpa(gpa);
	
	StudentController studentController;
    id =studentController.addStudent(student);
	if(id != -1){
	   cout<<"success added with id : "<<id<<endl;	
	}
}
void addCourse(){
	Course course;
	cout<<"Please Enter Course Data :"<<endl;
	cout<<"Enter Course Name :";
	string name;
	cin>>name;
	course.setName(name);
	cout<<"Enter Course hours :";
	double hour;
	cin>>hour;
	course.setHour(hour); 
	
	CourseController courseController;
	id=courseController.addCourse(course);
	
	if(id!=-1){
		cout<<"success added with id : "<<id<<endl;
	}
	
}
void addTeacher(){
	Teacher teacher;
	cout<<"Please Enter Teacher Data :"<<endl;
	string name;
	int age;
	string phoneNumber;
	double salary;
	cout<<"Enter Teacher Name :";
	cin>>name;
	teacher.setName(name);
	cout<<"Enter Teacher Age :";
	cin>>age;
	teacher.setAge(age);
	cout<<"Enter Teacher PhoneNumber :";
	cin>>phoneNumber;
	teacher.setPhoneNumber(phoneNumber);
	cout<<"Enter Teacher Salary :";
	cin>>salary;
	teacher.setSalary(salary);
	
	TeacherController teacherController;
	id=teacherController.addTeacher(teacher);
	if(id!=-1){
		cout<<"success added with id : "<<id<<endl;
	}
}

int main(){
	int flag=0;
	while(true){
		displaySystem();
		cin>>process;
		switch(process){
			case 1:
				showList("Student");
				int process;
				cin>>process;
				switch(process){
					case 1:
						addStudent();
						break;
					case 2:
						break;
					case 3:
						break;
					case 4:
						break;
					case 5:
						break;
					default:
						cout<<"Invalid Choose"<<endl;
				}
				break;
			case 2:
				showList("Course");
				cin>>process;
				switch(process){
					case 1:
						addCourse();
						break;
					case 2:
						break;
					case 3:
						break;
					case 4:
						break;
					case 5:
						break;
					default:
						cout<<"Invalid Choose"<<endl;
				}
				break;
			case 3:
				showList("Teacher");
				cin>>process;
				switch(process){
					case 1:
						addTeacher();
						break;
					case 2:
						break;
					case 3:
						break;
					case 4:
						break;
					case 5:
						break;
					default:
						cout<<"Invalid Choose"<<endl;
				}
				break;
			case 4:
				flag=1;
				break;
			default:
				cout<<"Invalid Choose"<<endl;
		}
		if(flag == 1){
			break;
		}
	
	}
}
	

