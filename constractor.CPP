#include<iostream.h>
#include<conio.h>
class employee
{
	public:
	int eid,salary;
	char ename[10],dept[10];
	employee(int id,char name,char dep,int sal)
	{
		eid=id;
		ename=name;
		dept=dep;
		salary=sal;
	}
// method to print employee details
	void printemp()
	{
		cout<<"enter id :"<<eid;
		cout<<"enter name :"<<ename;
		cout<<"enter department :"<<dept;
		cout<<"enter salary:"<<salary;
	}
//getter method for employee name
	string getname()
	{
		return ename;
	}
};
int main() {
    // Input 5 employee data using constructor
    Employee employees[5];
    for (int i = 0; i < 5; i++) {
        int id;
        string name, department;
        double salary;
        cout << "Enter employee " << i + 1 << " details:" << endl;
        cout << "ID: ";
        cin >> id;
        cout << "Name: ";
        cin >> name;
        cout << "Department: ";
        cin >> department;
        cout << "Salary: ";
        cin >> salary;
        employees[i] = Employee(id, name, department, salary);
    }

    // Print employee data using constructor
    for (int i = 0; i < 5; i++) {
        cout << "Employee " << i + 1 << " details:" << endl;
        employees[i].printEmployee();
        cout << endl;
    }

    // Implement searching employee record based on employee name
    string searchName;
    cout << "Enter employee name to search: ";
    cin >> searchName;
    for (int i = 0; i < 5; i++) {
        if (employees[i].getName() == searchName) {
            cout << "Employee found:" << endl;
            employees[i].printEmployee();
            break;
        }
    }

    return 0;
}