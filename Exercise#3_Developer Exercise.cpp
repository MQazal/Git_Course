// Exercise#3: Developer Exercise
class clsDeveloper : public clsEmployee
{
private:
	string _MainProgrammingLanguage;

public:
	clsDeveloper(int ID, string FirstName, string LastName, string Email, string PhoneNumber
		, string JobTitle, string DepartmentName, float Salary, string MainProgrammingLanguage)
		: clsEmployee(ID, FirstName, LastName, Email, PhoneNumber, JobTitle, DepartmentName,
			Salary)
	{
		_MainProgrammingLanguage = MainProgrammingLanguage;
	}

	void setProgrammingLanguage(string ProgrammingLanguage)
	{
		_MainProgrammingLanguage = ProgrammingLanguage;
	}

	string getProgrammingLanguage()
	{
		return _MainProgrammingLanguage;
	}

	void Print()
	{
		cout << "\nDeveloper Info\n-----------------------\n";
		cout << "ID                       : " << getID() << endl;
		cout << "First Name               : " << getFirstName() << endl;
		cout << "Last Name                : " << getLastName() << endl;
		cout << "Full Name                : " << getFullName() << endl;
		cout << "Email                    : " << getEmail() << endl;
		cout << "Phone Number             : " << getPhoneNumber() << endl;
		cout << "Job Title                : " << getJobTitle() << endl;
		cout << "Department Name          : " << getDepartmentName() << endl;
		cout << "Salary                   : " << getSalary() << endl;
		cout << "Main Programming Language: " << _MainProgrammingLanguage << endl;
		cout << "-----------------------\n";
	}

	~clsDeveloper()
	{
		cout << "\nEnd of Developer Class.\n";
	}
};