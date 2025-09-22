// Project 1: Simple OOP Calculator

class clsCalculator
{
private: // Applying Abstraction Concept by hiding class's complexity and sensitive data if it is there
	bool _NewSession = true;
	void _PrintWelcomeMessage()
	{
		cout << "Welcome in this OOP Calculator Project, made by \"Mr.Key\" with love (:";
		cout << "\n-----------------------\n";
	}
	short _Operation_Number = 0;
	float _UserNumber = 0.0;
	void _setUserNumber(float Number)
	{
		_UserNumber = Number;
	}
	bool _IsZero(float Number)
	{
		return Number == 0;
	}
	string _OperationType;
	bool _IsCalculatorInCustomStatus()
	{
		return _OperationType == "Clearing Calculator" || _OperationType == "Canceling Last Operation";
	}
	float _PreviousOperationResult = 0.0;
	float _OperationResult = 0.0;

public:
	void ClearCalculator()
	{
		_Operation_Number = 0;
		_UserNumber = 0.0;
		_PreviousOperationResult = 0.0;
		_OperationResult = 0.0;
		_OperationType = "Clearing Calculator";
	}

	void Add(float Number)
	{
		_Operation_Number++;
		_PreviousOperationResult = _OperationResult;
		_setUserNumber(Number);
		_OperationResult += Number;
		_OperationType = "Adding";
	}

	void Subtract(float Number)
	{
		_Operation_Number++;
		_PreviousOperationResult = _OperationResult;
		_setUserNumber(Number);
		_OperationResult -= Number;
		_OperationType = "Subtracting";
	}

	void Multiply(float Number)
	{
		_Operation_Number++;
		_PreviousOperationResult = _OperationResult;
		_setUserNumber(Number);
		_OperationResult *= Number;
		_OperationType = "Multiplying";
	}

	void Divide(float Number)
	{
		_Operation_Number++;
		_setUserNumber(Number);
		_PreviousOperationResult = _OperationResult;
		if (_IsZero(Number))
		{
			Number = 1;
		}
		_OperationResult /= Number;
		_OperationType = "Dividing";
	}

	void CancelLastOperation()
	{
		_Operation_Number--;
		_UserNumber = 0.0;
		_OperationResult = _PreviousOperationResult;
		_OperationType = "Canceling Last Operation";
	}

	void PrintResult()
	{
		if (_NewSession)
		{
			_PrintWelcomeMessage();
			_NewSession = false;
		}

		if (_IsCalculatorInCustomStatus())
			cout << "\nResult After " << _OperationType << " is: " << _OperationResult << endl;

		else
			cout << "\nOperation (" << _Operation_Number << ") " << "Result After " << _OperationType << " " << _UserNumber << " is: " << _OperationResult << endl;
	}

	float GetFinalResult()
	{
		return _OperationResult;
	}
};