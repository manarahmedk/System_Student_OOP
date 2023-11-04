#include "../repo/Repository.cpp"
#include "../validation/Validation.cpp"

/////////////////////////////  Student \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// interface StudentService
class StudentService {
	public:
		virtual int addStudent(Student student) = 0;

};

// Class StudentServiceImpl
class StudentServiceImpl {
	private:
		StudentRepositoryImpl studentRepository;
		StudentValidation studentValidation;
	public:
		int addStudent(Student student) {
			if(studentValidation.validateStudent(student)==1){
				return studentRepository.addStudent(student);
			}
			else{
			    return -1;
			}
		}
};

/////////////////////////////  Course \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// interface CourseService
class CourseService {
	public:
		virtual int addCourse(Course course) = 0;
};
// Class CourseServiceImpl
class CourseServiceImpl {
	private:
		CourseRepositoryImpl courseRepository;
		CourseValidation courseValidation;
	public:
		int addCourse(Course course) {
			if(courseValidation.validateCourse(course)==1){
				return courseRepository.addCourse(course);
			}else{
				return -1;	
			}
		}
};
/////////////////////////////  Teacher \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// interface TeacherService
class TeacherService {
	public:
		virtual int addTeacher(Teacher teacher) = 0;
};
// Class TeacherRepositoryImpl
class TeacherServiceImpl {
	private:
		TeacherRepositoryImpl teacherRepository;
		TeacherValidation teacherValidation;
	public:
		int addTeacher(Teacher teacher) {
			if(teacherValidation.validateTeacher(teacher)==1){
				return teacherRepository.addTeacher(teacher);
			}
			return -1;
		 }
};
