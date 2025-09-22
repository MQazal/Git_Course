// Super/Base Class:
class clsPerson
{
private:
	void _PrintWelcomeMessage()
	{
		cout << "Welcome Mr.Developer in Person Class (:\n";
	}
	int _ID = 0;
	string _FirstName;
	string _LastName;
	string _Email;
	string _PhoneNumber;

public:
	// fill object by initial values by parametrized constructor
	clsPerson(int ID, string FirstName, string LastName, string Email, string PhoneNumber)
	{
		_PrintWelcomeMessage();
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_PhoneNumber = PhoneNumber;
	}

	int getID()
	{
		return _ID;
	}

	void setFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

	string getFirstName()
	{
		return _FirstName;
	}

	__declspec(property(put = setFirstName, get = getFirstName)) string FirstName;

	void setLastName(string LastName)
	{
		_LastName = LastName;
	}

	string getLastName()
	{
		return _LastName;
	}

	__declspec(property(put = setLastName, get = getLastName)) string LastName;

	string getFullName()
	{
		return FirstName + " " + LastName;
	}

	void setEmail(string Email)
	{
		_Email = Email;
	}

	string getEmail()
	{
		return _Email;
	}

	__declspec(property(put = setEmail, get = getEmail)) string Email;

	void setPhoneNumber(string PhoneNumber)
	{
		_PhoneNumber = PhoneNumber;
	}

	string getPhoneNumber()
	{
		return _PhoneNumber;
	}

	__declspec(property(put = setPhoneNumber, get = getPhoneNumber)) string PhoneNumber;

	void Print()
	{
		cout << "\nPerson Information:\n....................................\n";
		cout << "ID          : " << _ID << endl;
		cout << "FirstName   : " << _FirstName << endl;
		cout << "LastName    : " << _LastName << endl;
		cout << "Full Name   : " << getFullName() << endl;
		cout << "Email       : " << _Email << endl;
		cout << "Phone Number: " << _PhoneNumber << endl;
		cout << "....................................\n";
	}

	// Note: Email's and SMS's parameters are Single use, so, they aren't data members in class
	void SendEmail(string Subject, string Body)
	{
		cout << "\n______________________________________________\n\n";
		cout << "The following message is sent successfully to email: \"" << _Email << "\"\n";
		cout << "Subject: " << Subject << endl;
		cout << "Body   : " << Body << endl;
		cout << "______________________________________________\n";
	}

	void SendSMS(string MessageContent)
	{
		cout << "\n______________________________________________\n\n";
		cout << "The following SMS is sent successfully to phone number: \"" << _PhoneNumber << "\"\n";
		cout << "SMS: " << MessageContent << endl;
		cout << "______________________________________________\n";
	}

	~clsPerson()
	{
		cout << "\nGoodbye form Person Class.\n";
	}
};

// Sub/Derived Class:
class clsEmployee : public clsPerson // Sub Class (clsEmployee) inherits Super Class (clsPerson)
{
private:
	string _JobTitle;
	string _DepartmentName;
	float _Salary = 0.0;

public:

	/*
	Note: This parametrized constructor of Sub Class has 2 sections from by value parameters:
	* 1- Base Class Parameters: they are used to call Base Class and fill it by its initial values.
	* 2- Sub Class Parameters: they are used to fill Sub Class by its initial values.
	*/

	clsEmployee(int ID, string FirstName, string LastName, string Email, string PhoneNumber,
		string JobTitle, string DepartmentName, float Salary)
		: clsPerson(ID, FirstName, LastName, Email, PhoneNumber)
	{
		_JobTitle = JobTitle;
		_DepartmentName = DepartmentName;
		_Salary = Salary;
	}

	void setJobTitle(string JobTitle)
	{
		_JobTitle = JobTitle;
	}

	string getJobTitle()
	{
		return _JobTitle;
	}

	void setDepartmentName(string DepartmentName)
	{
		_DepartmentName = DepartmentName;
	}

	string getDepartmentName()
	{
		return _DepartmentName;
	}

	void setSalary(float Salary)
	{
		_Salary = Salary;
	}

	float getSalary()
	{
		return _Salary;
	}

	void Print()
	{
		cout << "\nPerson Information:\n....................................\n";
		cout << "ID          : " << getID() << endl;
		cout << "FirstName   : " << getFirstName() << endl;
		cout << "LastName    : " << getLastName() << endl;
		cout << "Full Name   : " << getFullName() << endl;
		cout << "Email       : " << getEmail() << endl;
		cout << "Phone Number: " << getPhoneNumber() << endl;
		cout << "Job Title   : " << _JobTitle << endl;
		cout << "Department  : " << _DepartmentName << endl;
		cout << "Salary      : " << _Salary << endl;
		cout << "....................................\n";
	}

	~clsEmployee()
	{
		cout << "\nEnd of Employee Class.\n";
	}
};

// * Applying Multi Level Inheritance Concept:
class clsDeveloper : public clsEmployee
{
private:
	string _MainProgrammingLanguage;

public:
	clsDeveloper(int ID, string FirstName, string LastName, string Email, string PhoneNumber
		, string JobTitle, string DepartmentName, float Salary, string MainProgrammingLanguage)
		: clsEmployee(ID,FirstName,LastName,Email,PhoneNumber,JobTitle,DepartmentName,Salary)
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

class clsDoctor : public clsEmployee
{
private:
	short _ClinicNumber = 0;

public:
	clsDoctor(int ID, string FirstName, string LastName, string Email, string PhoneNumber
		, string Job, string Department, float Salary, short ClinicNumber)
		: clsEmployee(ID, FirstName, LastName, Email, PhoneNumber, Job, Department, Salary)
	{
		_ClinicNumber = ClinicNumber;
	}

	void setClinicNumber(short Number)
	{
		_ClinicNumber = Number;
	}

	short getClinicNumber()
	{
		return _ClinicNumber;
	}

	void Print()
	{
		cout << "\nDoctor Info:\n-----------------------\n";
		cout << "ID             : " << getID() << endl;
		cout << "First Name     : " << getFirstName() << endl;
		cout << "Last Name      : " << getLastName() << endl;
		cout << "Full Name      : " << getFullName() << endl;
		cout << "Email          : " << getEmail() << endl;
		cout << "Phone Number   : " << getPhoneNumber() << endl;
		cout << "Job Title      : " << getJobTitle() << endl;
		cout << "Department Name: " << getDepartmentName() << endl;
		cout << "Salary         : " << getSalary() << endl;
		cout << "Clinic Number  : " << _ClinicNumber << endl;
		cout << "-----------------------\n";
	}

	~clsDoctor()
	{
		cout << "\nEnd of Doctor Class.\n";
	}
};