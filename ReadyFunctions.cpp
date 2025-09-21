float ReadPositiveNumber(string Message)
{
    float Number;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

int ReadNumberInRange(string Message, int From, int To)
{
    int Number = 0;

    do {
        cout << Message << endl;
        cin >> Number;
    } while ((Number < From) || (Number > To));

    return Number;
}

bool IsPerfectNumber(int Number)
{
    int Sum = 0;

    for (int i = 1; i < Number; i++)
    {
        if (Number % i == 0)
            Sum += i;
    }
    return Number == Sum;
}

string ReadNumber(string Message)
{
    string Number;
    cout << Message << endl;
    cin >> Number;
    return Number;
}

int CountDigitFrequency(short DigitToCheck, int Number)
{
	
    int Remainder = 0, FrequencyNumber = 0;

    while(Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;

        if (DigitToCheck == Remainder)
        {
            FrequencyNumber++;
        }
    }
    return FrequencyNumber;
}

int ReverseNumber(int Number)
{
    int Remainder = 0;
    int Reverse = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Reverse = Reverse * 10 + Remainder;
    }
    return Reverse;
}

void PrintDigits(int Number)
{
    int Remainder = 0;

    while (Number > 0) {
        Remainder = Number % 10;
        Number = Number / 10;
        cout << Remainder << endl;
    }
}

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void ReadElementsInArray(int Array[100], int &Length)
{
    Length = ReadPositiveNumber(" Please enter how many elements do you want to store in array ? ");

    cout << "\nEnter Array Elements \n";

    for (int Counter = 0; Counter <= Length - 1; Counter++)
    {
        cout << "\nElement[" << Counter + 1 << "]: ";
        cin >> Array[Counter];
    }
}

int TimesRepeated(int Array[100], int Length, int NumberToCheck)
{
    int SumFound = 0;

    for (int Counter = 0; Counter <= Length - 1; Counter++)
    {
        if (Array[Counter] == NumberToCheck)
        {
            SumFound++;
        }
    }
    return SumFound;
}

void PrintArray(int Array[100], int Length)
{
    for (int Counter = 0; Counter <= Length - 1; Counter++)
    {
        cout << Array[Counter] << " ";
    }
}

void Swap(int& A, int& B)
{
	int Temp;

	Temp = A;
	A = B;
	B = Temp;
}

void ShuffleArray(int arr[100], int arrLength)
{
	for (int i = 0; i <= arrLength - 1; i++)
	{
		Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
	}
}

short FindNumberPositionInArray(int Array[100], int Length, int NumberToSearch)
{
	for (int i = 0; i <= Length - 1; i++)
	{
		if (Array[i] == NumberToSearch)
		{
			return i;
		}
	}
	return -1;
}

bool IsNumberInArray(int Array[100], int Length, int NumberToSearch)
{
	return FindNumberPositionInArray(Array, Length, NumberToSearch) != -1; // -1 != -1 = F, // 10 != -1
}

void AddArrayElement(int Number, int arrDestination[100], int& arrDestinationLength)
{
// This function is responsible about any empty array and its empty length with initial value = 0
	arrDestinationLength++;
	arrDestination[arrDestinationLength - 1] = Number;
}

int ReadNegativeNumber(string Message)
{
	int NegativeNumber = 0;
	do
	{
		cout << Message;
		cin >> NegativeNumber;

	} while (NegativeNumber >= 0);

	return NegativeNumber;
}

int MyAbs(int Number)
{
	if (Number >= 0)
		return Number;
	else
		return Number * -1;
}

float GetFractionNumber(float Number)
{
	return Number - int(Number); // 10.5 - 10 = .5
}

bool ReadHasOrNo(string Message)
{
    bool Has;
    cout << Message << endl;
    cin >> Has;
    return Has;
}

bool ValidateNumberInRange(int Number, int From, int To)
{
    return (Number >= From && Number <= To);
}

string Tabs(short NumberOfTabs)
{
	string Tab = "";
	for (short i = 1; i <= NumberOfTabs; i++)
	{
		Tab = Tab + "\t";
		cout << Tab;
	}
	return Tab;
}