#pragma once
#include<iostream>
#include<string>
using namespace std;

class clsRead
{

private:

	enum enOperatorType { Add = 1, Sub = 2, Mul = 3, Div = 4, Mode = 5 };
	enum enLevel { EasyLevel = 1, MedLevel = 2, HardLevel = 3 };
	int _IntNumber = 0;

protected:

	//Abstract class
	static int ReverseNum(int Number)
	{
		int Remainder = 0;
		int Reversed = 0;
		while (Number > 0)
		{
			Remainder = Number % 10;
			Number = Number / 10;
			Reversed = Reversed * 10 + Remainder;
		}
		return Reversed;
	}
	static short ReverseNum(short Number)
	{
		short Remainder = 0;
		short Reversed = 0;
		while (Number > 0)
		{
			Remainder = Number % 10;
			Number = Number / 10;
			Reversed = Reversed * 10 + Remainder;
		}
		return Reversed;
	}

	static bool IsOdd(int Number)
	{
		if (Number % 2 != 0)
			return 1;
		else
			return 0;
	}
	bool IsOdd()
	{
		return clsRead::IsOdd(_IntNumber);
	}

	static bool IsEven(int Number)
	{
		if (Number % 2 == 0)
			return 1;
		else
			return 0;
	}
	bool IsEven()
	{
		return clsRead::IsEven(_IntNumber);
	}

	static bool IsPrime(int Number)
	{
		int M = round(Number / 2);
		for (int counter = 2; counter <= M; counter++)
			if (Number % counter == 0)
				return 0;
		return 1;
	}
	bool IsPrime()
	{
		return clsRead::IsPrime(_IntNumber);
	}

	static bool IsPalindrome(int Number)
	{
		return (Number == clsRead::ReverseNum(Number));
	}
	bool IsPalindrome()
	{
		return clsRead::IsPalindrome(_IntNumber);
	}

	static bool IsPerfect(int Number)
	{
		int Sum = 0;
		for (int i = 1; i < Number; i++)
			if (Number % i == 0)
				Sum += i;
		return Number == Sum;
	}
	bool IsPerfect(int Number)
	{
		return clsRead::IsPerfect(_IntNumber);
	}

	//================================== Verify Numbers =============================================
	static short VerifyNum(short Number)
	{
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "Invalid Number, Enter a valid one:" << endl;
			cin >> Number;
		}
		return Number;
	}
	static int VerifyNum(int Number)
	{
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "Invalid Number, Enter a valid one:" << endl;
			cin >> Number;
		}
		return Number;
	}
	static float VerifyNum(float Number)
	{
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "Invalid Number, Enter a valid one:" << endl;
			cin >> Number;
		}
		return Number;
	}
	static double VerifyNum(double Number)
	{
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "Invalid Number, Enter a valid one:" << endl;
			cin >> Number;
		}
		return Number;
	}
	static long long VerifyNum(long long Number)
	{
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "Invalid Number, Enter a valid one:" << endl;
			cin >> Number;
		}
		return Number;
	}

public:

	/*__________definition function_____________________________*/


	//=================================================================================================
	static int ReadIntNumber(string Message)
	{
		int MyIntNumber=0;
		cout << Message << ": ";
		cin >> MyIntNumber;
		return clsRead::VerifyNum(MyIntNumber);
	}
	static float ReadFloatNumber(string Message)
	{
		float MyFloatNumber=0.00;
		cout << Message << ": " << endl;
		cin >> MyFloatNumber;
		return clsRead::VerifyNum(MyFloatNumber);
	}
	static short ReadShortNumber(string Message)
	{
		short MyShortNumber=0;
		cout << Message << ": " << endl;
		cin >> MyShortNumber;
		return clsRead::VerifyNum(MyShortNumber);
	}
	static double ReadDoubleNumber(string Message)
	{
		double MyDoubleNumber=0;
		cout << Message << " : " << endl;
		cin >> MyDoubleNumber;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max());
			cout << Message << " : " << endl;
			cin >> MyDoubleNumber;
		}
		return clsRead::VerifyNum(MyDoubleNumber);
	}
	static long long ReadLongLongNumber(string Message)
	{
		long long MyLongLongNumber=0;
		cout << Message << ": " << endl;
		cin >> MyLongLongNumber;
		return clsRead::VerifyNum(MyLongLongNumber);
	}
	//=================================================================================================
	static bool ReadBoolean(string Message)
	{
		bool MyBoolean=false;
		cout << Message << " (Answer with 1 or 0): " << endl;
		cin >> MyBoolean;
		return MyBoolean;
	}
	static string ReadString(string Message)
	{
		string MyString="";
		cout << "\n" << Message << " : \n";
		getline(cin>>ws, MyString);
		return MyString;
	}
	static char ReadCharacter(string Message)
	{
		char MyCharacter=' ';
		cout << "\n" << Message << " : \n";
		cin >> MyCharacter;
		return MyCharacter;
	}
	//=================================================================================================
	static int ReadNumberInRange(string Message, int From, int To)
	{
		int NumberInRange=0;
		do
		{
			cout << Message << " From " << From << " To " << To << " : ";
			cin >> NumberInRange;
			clsRead::VerifyNum(NumberInRange);
		} while (NumberInRange<From || NumberInRange>To);
		return NumberInRange;
	}
	static float ReadNumberInRange(string Message, float From, float To)
	{
		float NumberInRange=0.00;
		do
		{
			cout << Message << " From " << From << " To " << To << " : ";
			cin >> NumberInRange;
			clsRead::VerifyNum(NumberInRange);
		} while (NumberInRange<From || NumberInRange>To);
		return NumberInRange;
	}
	static short ReadNumberInRange(string Message, short From, short To)
	{
		short ShortNumInRange=0;
		do
		{
			cout << Message << " (Enter number From " << From << " To " << To << " : ";
			cin >> ShortNumInRange;
			clsRead::VerifyNum(ShortNumInRange);
		} while (ShortNumInRange<From || ShortNumInRange>To);
		return ShortNumInRange;
	}
	static double ReadNumberInRange(string Message, double From, double To)
	{
		double DoublebNumInRange=0.00;
		do
		{
			cout << Message << " (Enter number From " << From << " To " << To << " : ";
			cin >> DoublebNumInRange;
			clsRead::VerifyNum(DoublebNumInRange);
		} while (DoublebNumInRange<From || DoublebNumInRange>To);
		return DoublebNumInRange;
	}
	static long long ReadNumberInRange(string Message, long long From, long long To)
	{
		long long LgLgNumInRange=0;
		do
		{
			cout << Message << " (Enter number From " << From << " To " << To << " : ";
			cin >> LgLgNumInRange;
			clsRead::VerifyNum(LgLgNumInRange);
		} while (LgLgNumInRange<From || LgLgNumInRange>To);
		return LgLgNumInRange;
	}
	//=================================================================================================
	static int ReadPositiveIntNumber(string Message)
	{
		int PositiveIntNumber=0;
		do
		{
			cout << Message << endl;
			cin >> PositiveIntNumber;
			clsRead::VerifyNum(PositiveIntNumber);
		} while (PositiveIntNumber <= 0);
		return PositiveIntNumber;
	}
	static float ReadPositiveFloatNumber(string Message)
	{
		float FloatPositiveNumber=0.00;
		do
		{
			cout << Message << endl;
			cin >> FloatPositiveNumber;
			clsRead::VerifyNum(FloatPositiveNumber);
		} while (FloatPositiveNumber <= 0);
		return FloatPositiveNumber;
	}
	static short ReadPositiveShortNumber(string Message)
	{
		short ShortPositiveNumber=0;
		do
		{
			cout << Message << endl;
			cin >> ShortPositiveNumber;
			clsRead::VerifyNum(ShortPositiveNumber);
		} while (ShortPositiveNumber <= 0);
		return ShortPositiveNumber;
	}
	static double ReadPositiveDoubleNumber(string Message)
	{
		double DoublePositiveNumber=0.00;
		do
		{
			cout << Message << (" !(enter just positive Number): ") << endl;
			cin >> DoublePositiveNumber;
			clsRead::VerifyNum(DoublePositiveNumber);
		} while (DoublePositiveNumber <= 0);
		return DoublePositiveNumber;
	}
	static long long ReadPositiveLongLongNumber(string Message)
	{
		long long LgLgPositiveNum=0;
		do
		{
			cout << Message << (" !(just enter positive Number): ") << endl;
			cin >> LgLgPositiveNum;
			clsRead::VerifyNum(LgLgPositiveNum);
		} while (LgLgPositiveNum <= 0);
		return LgLgPositiveNum;
	}
	//=================================================================================================
	static int ReadNegativeIntNumber(string Message)
	{
		int NegativeIntNumber=0;
		do
		{
			cout << Message << (" !(just enter Negative Number): ") << endl;
			cin >> NegativeIntNumber;
			clsRead::VerifyNum(NegativeIntNumber);
		} while (NegativeIntNumber >= 0);
		return NegativeIntNumber;
	}
	static float ReadNegativeFloatNumber(string Message)
	{
		float NegativeFloatNumber=0.00;
		do
		{
			cout << Message << (" !(just enter Negative Number): ") << endl;
			cin >> NegativeFloatNumber;
			clsRead::VerifyNum(NegativeFloatNumber);
		} while (NegativeFloatNumber >= 0);
		return NegativeFloatNumber;
	}
	static short ReadNegativeShortNumber(string Message)
	{
		short NegativeShortNumber=0;
		do
		{
			cout << Message << endl;
			cin >> NegativeShortNumber;
			clsRead::VerifyNum(NegativeShortNumber);
		} while (NegativeShortNumber >= 0);
		return NegativeShortNumber;
	}
	static double ReadNegativeDoubleNumber(string Message)
	{
		double NegativeDoubleNumber=0.00;
		do
		{
			cout << Message << (" !(just enter Negative Number): ") << endl;
			cin >> NegativeDoubleNumber;
			clsRead::VerifyNum(NegativeDoubleNumber);
		} while (NegativeDoubleNumber >= 0);
		return NegativeDoubleNumber;
	}
	static long long ReadNegativeLongLongNumber(string Message)
	{
		long long NegativeLgLgNumber=0;
		do
		{
			cout << Message << endl;
			cin >> NegativeLgLgNumber;
			clsRead::VerifyNum(NegativeLgLgNumber);
		} while (NegativeLgLgNumber >= 0);
		return NegativeLgLgNumber;
	}
	//=================================================================================================
	static void ReadArrayOfNumber(int arr[], int arrLength=0)
	{
		cout << "\nEnter array elements \n\n";
		for (int i = 0; i <= arrLength - 1; i++)
		{
			cout << "Element [" << i + 1 << "] : ";
			cin >> arr[i];
			clsRead::VerifyNum(arr[i]);
		}
	}
	static void ReadArrayOfNumber(float arr[], int arrLength = 0)
	{
		cout << "\n Enter array elements \n";
		for (int i = 0; i <= arrLength - 1; i++)
		{
			cout << "Element [" << i + 1 << "] : ";
			cin >> arr[i];
			clsRead::VerifyNum(arr[i]);
		}
		cout << endl;
	}
	static void ReadArrayOfNumber(short arr[], int arrLength = 0)
	{
		cout << "\n Enter array elements \n";
		for (int i = 0; i <= arrLength - 1; i++)
		{
			cout << "Element [" << i + 1 << "] : ";
			cin >> arr[i];
			clsRead::VerifyNum(arr[i]);
		}
		cout << endl;
	}
	static void ReadArrayOfNumber(double arr[], int arrLength = 0)
	{
		cout << "\n Enter array elements \n";
		for (int i = 0; i <= arrLength - 1; i++)
		{
			cout << "Element [" << i + 1 << "] : ";
			cin >> arr[i];
			clsRead::VerifyNum(arr[i]);
		}
		cout << endl;
	}
	static void ReadArrayOfNumber(long long arr[], int arrLength = 0)
	{
		cout << "\n Enter array elements \n";
		for (int i = 0; i <= arrLength - 1; i++)
		{
			cout << "Element [" << i + 1 << "] : ";
			cin >> arr[i];
			clsRead::VerifyNum(arr[i]);
		}
		cout << endl;
	}
	static void ReadArrayOfCharacter(char arr[], int arrLength = 0)
	{
		cout << "\n Enter array elements \n";
		for (int i = 0; i <= arrLength - 1; i++)
		{
			cout << "Element [" << i + 1 << "] : ";
			cin >> arr[i];
		}
		cout << endl;
	}
	static void ReadArrayOfString(string arr[], int arrLength = 0)
	{
		cout << "\n Enter array elements \n";
		for (int i = 0; i <= arrLength - 1; i++)
		{
			if (i == 0)
			{
				getline(cin >> ws, arr[i]);
				continue;
			}
			cout << "Element [" << i + 1 << "] : ";
			getline(cin, arr[i]);
		}
		cout << endl;
	}
	//=================================================================================================
	int ReadOddNumber()
	{
		int OddNumber=0;
		do
		{
			cout << "\nEnter odd number : ";
			cin >> OddNumber;
			clsRead::VerifyNum(OddNumber);
		} while (!clsRead::IsOdd(OddNumber));
		return OddNumber;
	}
	int ReadEvenNumber()
	{
		int EvenNumber=0;
		do
		{
			cout << "\nenter Even number : ";
			cin >> EvenNumber;
			clsRead::VerifyNum(EvenNumber);
		} while (!clsRead::IsEven(EvenNumber));
		return EvenNumber;
	}
	int ReadPrimeNumber()
	{
		int PrimeNumber=0;
		do
		{
			cout << "\nenter Even number : ";
			cin >> PrimeNumber;
			clsRead::VerifyNum(PrimeNumber);
		} while (!clsRead::IsEven(PrimeNumber));
		return PrimeNumber;
	}
	int ReadPerfectNumber()
	{
		int PerfectNumber=0;
		do
		{
			cout << "\nEnter Perfect number : ";
			cin >> PerfectNumber;
			clsRead::VerifyNum(PerfectNumber);
		} while (!clsRead::IsPerfect(PerfectNumber));
		return PerfectNumber;
	}
	int ReadPalindromeNum()
	{
		int PalindromeNum=0;
		do
		{
			cout << "\nEnter Palindrome number : ";
			cin >> PalindromeNum;
			clsRead::VerifyNum(PalindromeNum);
		} while (!clsRead::IsPalindrome(PalindromeNum));
		return PalindromeNum;
	}
	//=================================================================================================
	enOperatorType ReadOperationType()
	{
		short OperatorType = 1;
		do
		{
			cout << "\nEnter Operation Type ass menu number Add[1] , Sub[2], Mul[3] ,Div[4] ,Mode[5] : ";
			cin >> OperatorType;
			clsRead::VerifyNum(OperatorType);
		} while (OperatorType < 1 || OperatorType> 5);
		return (enOperatorType)OperatorType;
	}
	enLevel ReadQuestionLevel()
	{
		short QuestionLevel = 1;
		do
		{
			cout << " Enter Question level Easy[1], Med[2],Hard[3]: ";
			cin >> QuestionLevel;
			clsRead::VerifyNum(QuestionLevel);
		} while (QuestionLevel < 1 || QuestionLevel > 3);
		return (enLevel)QuestionLevel;
	}



};

