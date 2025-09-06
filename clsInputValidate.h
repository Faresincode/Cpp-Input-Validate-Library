#pragma once
#include<iostream>
#include<string>
#include "clscMath.h";
#include "clsUtil.h";
#include "clsDate.h";
using namespace std;

class clsInputValidate
{

public:

	/*______________________________________ Definition Functions ________________________________________*/


	//=================================================================================================

	static bool IsValidLastInput()
	{
		return !cin.fail();
	}
	static bool IsDateBetween(clsDate Date, clsDate Date1, clsDate Date2)
	{
		if (!clsDate::IsDate1BeforeDate2(Date1, Date2))
		{
			clsDate::Swap(Date1, Date2);
		}
		return  !(clsDate::IsDate1BeforeDate2(Date, Date1) || clsDate::IsDate1AfterDate2(Date, Date2));
	}
	static bool IsNumberBetween(int Number, int From, int To)
	{
		return (Number >= From && Number <= To);
	}
	static bool IsNumberBetween(short Number, short From, short To)
	{
		return (Number >= From && Number <= To);
	}
	static bool IsNumberBetween(float Number, float From, float To)
	{
		return (Number >= From && Number <= To);
	}
	static bool IsNumberBetween(double  Number, double From, double To)
	{
		return (Number >= From && Number <= To);
	}
	static bool IsNumberBetween(long long Number, long long From, long long To)
	{
		return (Number >= From && Number <= To);
	}
	static bool IsValiDate(clsDate Date)
	{
		return clsDate::IsValidDate(Date);
	}

	//=================================================================================================
	static int ReadIntNumber(string ErrorMessage= "Invalid number, enter int number again\n")
	{
		int Number;
		while (!(cin >> Number)) 
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage;
		}
		return Number;
	}
	static float ReadFloatNumber(string ErrorMessage = "Invalid number, enter float number again\n")
	{
		float Number;
		while (!(cin >> Number))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage;
		}
		return Number;
	}
	static short ReadShortNumber(string ErrorMessage = "Invalid number, enter short number again\n")
	{
		int Number;
		while (!(cin >> Number))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage;
		}
		return Number;
	}
	static double ReadDblNumber(string ErrorMessage = "Invalid number, enter double number again\n")
	{
		int Number;
		while (!(cin >> Number))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage;
		}
		return Number;
	}
	static long long ReadLgLgNumber(string ErrorMessage = "Invalid number, enter long long number again\n")
	{
		int Number;
		while (!(cin >> Number))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage;
		}
		return Number;
	}
	//=================================================================================================
	static bool ReadBoolean(string ErrorMessage="Invalid input, (answer with 0 or 1)\n")
	{
		return ReadShortNumberBetween(0,1,ErrorMessage);
	}
	static string ReadString()
	{
		string MyString="";
		getline(cin>>ws, MyString);
		return MyString;
	}
	static char ReadCharacter(string ErrorMessage= "Invalid input, enter character\n")
	{
		string input="";
		while (true)
		{
			getline(cin>>ws, input);
			if (input.length() == 1)
			{
				return input[0];
			}
			else
			{
				cout << ErrorMessage;

			}
		}

	}
	//=================================================================================================
	static int ReadIntNumberBetween( int From, int To, string ErrorMessage="Invalid number, enter again\n")
	{
		int Number = ReadIntNumber(ErrorMessage);
		while (!IsNumberBetween(Number, From, To))
		{
			cout << ErrorMessage;
			Number = ReadIntNumber(ErrorMessage);
		}
		return Number;
	}
	static float ReadFloatNumberBetween(float From, float To, string ErrorMessage = "Invalid number, enter again\n")
	{
		float Number = ReadFloatNumber(ErrorMessage);
		while (!IsNumberBetween(Number, From, To))
		{
			cout << ErrorMessage;
			Number = ReadFloatNumber(ErrorMessage);
		}
		return Number;
	}
	static short ReadShortNumberBetween(short From, short To, string ErrorMessage = "Invalid number, enter again\n")
	{
		short Number = ReadShortNumber(ErrorMessage);
		while (!IsNumberBetween(Number, From, To))
		{
			cout << ErrorMessage;
			Number = ReadShortNumber(ErrorMessage);
		}
		return Number;
	}
	static double ReadDblNumberBetween(double From, double To, string ErrorMessage = "Invalid number, enter again\n")
	{
		double Number = ReadDblNumber(ErrorMessage);
		while (!IsNumberBetween(Number, From, To))
		{
			cout << ErrorMessage;
			Number = ReadDblNumber(ErrorMessage);
		}
		return Number;
	}
	static long long ReadLgLgNumberBetween(long long From, long long To, string ErrorMessage = "Invalid number, enter again\n")
	{
		long long Number = ReadLgLgNumber(ErrorMessage);
		while (!IsNumberBetween(Number, From, To))
		{
			cout << ErrorMessage;
			Number = ReadLgLgNumber(ErrorMessage);
		}
		return Number;
	}
	//=================================================================================================
	static int ReadPositiveIntNumber(string ErrorMessage = "Invalid input, enter positive number\n")
	{
		int  Number = ReadIntNumber(ErrorMessage);
		while (Number <= 0)
		{
			cout << ErrorMessage;
			Number = ReadIntNumber(ErrorMessage);
		}
		return Number;
	}
	static float ReadPositiveFloatNumber(string ErrorMessage = "Invalid input, enter positive number\n")
	{
		float Number = ReadFloatNumber(ErrorMessage);
		while (Number <= 0)
		{
			cout << ErrorMessage;
			Number = ReadFloatNumber(ErrorMessage);
		}
		return Number;
	}
	static short ReadPositiveShortNumber(string ErrorMessage = "Invalid input, enter positive number\n")
	{
		short  Number = ReadShortNumber(ErrorMessage);
		while (Number <= 0)
		{
			cout << ErrorMessage;
			Number = ReadShortNumber(ErrorMessage);
		}
		return Number;
	}
	static double ReadPositiveDoubleNumber(string ErrorMessage = "Invalid input, enter positive number\n")
	{
		double Number = ReadDblNumber(ErrorMessage);
		while (Number <= 0)
		{
			cout << ErrorMessage;
			Number = ReadDblNumber(ErrorMessage);
		}
		return Number;
	}
	static long long ReadPositiveLongLongNumber(string ErrorMessage = "Invalid input, enter positive number\n")
	{
		long long Number = ReadLgLgNumber(ErrorMessage);
		while (Number <= 0)
		{
			cout << ErrorMessage;
			Number = ReadLgLgNumber(ErrorMessage);
		}
		return Number;
	}
	//=================================================================================================
	static int ReadNegativeIntNumber(string ErrorMessage= "Invalid input, enter negative number\n")
	{
		int  Number = ReadIntNumber(ErrorMessage);
		while (Number >= 0)
		{
			cout << ErrorMessage;
			Number = ReadIntNumber(ErrorMessage);
		}
		return Number;
	}
	static float ReadNegativeFloatNumber(string ErrorMessage = "Invalid input, enter negative number\n")
	{
		float Number = ReadFloatNumber(ErrorMessage);
		while (Number >= 0)
		{
			cout << ErrorMessage;
			Number = ReadFloatNumber(ErrorMessage);
		}
		return Number;
	}
	static short ReadNegativeShortNumber(string ErrorMessage = "Invalid input, enter negative number\n")
	{
		short  Number = ReadShortNumber(ErrorMessage);
		while (Number >= 0)
		{
			cout << ErrorMessage;
			Number = ReadShortNumber(ErrorMessage);
		}
		return Number;
	}
	static double ReadNegativeDblNumber(string ErrorMessage = "Invalid input, enter negative number\n")
	{
		double Number = ReadDblNumber(ErrorMessage);
		while (Number >= 0)
		{
			cout << ErrorMessage;
			Number = ReadDblNumber(ErrorMessage);
		}
		return Number;
	}
	static long long ReadNegativeLgLgNumber(string ErrorMessage = "Invalid input, enter negative number\n")
	{
		long long Number=ReadLgLgNumber(ErrorMessage);
		while (Number >= 0)
		{
			cout << ErrorMessage;
			Number = ReadLgLgNumber(ErrorMessage);
		}
		return Number;
	}
	//=================================================================================================
	static void ReadArrayOfNumber(int arr[], int arrLength=0)
	{
		cout << "\nEnter array elements \n\n";
		for (int i = 0; i <= arrLength - 1; i++)
		{
			cout << "Element [" << i + 1 << "] : ";
			arr[i]=ReadIntNumber();
		}
	}
	static void ReadArrayOfNumber(float arr[], int arrLength = 0)
	{
		cout << "\n Enter array elements \n";
		for (int i = 0; i <= arrLength - 1; i++)
		{
			cout << "Element [" << i + 1 << "] : ";
			arr[i]=ReadFloatNumber();
		}
		cout << endl;
	}
	static void ReadArrayOfNumber(short arr[], int arrLength = 0)
	{
		cout << "\n Enter array elements \n";
		for (int i = 0; i <= arrLength - 1; i++)
		{
			cout << "Element [" << i + 1 << "] : ";
			arr[i]=ReadShortNumber();
		}
		cout << endl;
	}
	static void ReadArrayOfNumber(double arr[], int arrLength = 0)
	{
		cout << "\n Enter array elements \n";
		for (int i = 0; i < arrLength; i++)
		{
			cout << "Element [" << i + 1 << "] : ";
			arr[i]=ReadDblNumber();
		}
		cout << endl;
	}
	static void ReadArrayOfNumber(long long arr[], int arrLength = 0)
	{
		cout << "\n Enter array elements \n";
		for (int i = 0; i < arrLength; i++)
		{
			cout << "Element [" << i + 1 << "] : ";
			arr[i]=ReadLgLgNumber();
		}
		cout << endl;
	}
	static void ReadArrayOfCharacter(char arr[], int arrLength = 0)
	{
		cout << "\n Enter array elements \n";
		for (int i = 0; i <arrLength; i++)
		{
			cout << "Element [" << i + 1 << "] : ";
			arr[i]=ReadCharacter();
		}
		cout << endl;
	}
	static void ReadArrayOfString(string arr[], int arrLength = 0)
	{
		cout << "\n Enter array elements \n";
		for (int i = 0; i <arrLength; i++)
		{
			if (i == 0)
			{
				getline(cin >> ws, arr[i]);
				continue;
			}
			cout << "Element [" << i + 1 << "] : ";
			arr[i]= ReadString();
		}
		cout << endl;
	}
	//=================================================================================================
	static int ReadOddNumber(string ErrorMessage= "Invalid input, enter odd number\n")
	{
		int Number=ReadIntNumber(ErrorMessage);
		while (!clsMath::IsOdd(Number))
		{
			cout << ErrorMessage;
			Number = ReadIntNumber(ErrorMessage);
		}
		return Number;
	}
	static int ReadEvenNumber(string ErrorMessage = "Invalid input, enter even number\n")
	{
		int Number = ReadIntNumber(ErrorMessage);
		while (!clsMath::IsEven(Number))
		{
			cout << ErrorMessage;
			Number = ReadIntNumber(ErrorMessage);
		}
		return Number;
	}
	static int ReadPrimeNumber(string ErrorMessage = "Invalid input, enter prime number\n")
	{
		int Number = ReadIntNumber(ErrorMessage);
		while (!clsMath::IsPrime(Number))
		{
			cout << ErrorMessage;
			Number = ReadIntNumber(ErrorMessage);
		}
		return Number;
	}
	static int ReadPerfectNumber(string ErrorMessage = "Invalid input, enter Perfect number\n")
	{
		int Number = ReadIntNumber(ErrorMessage);
		while (!clsMath::IsPerfect(Number))
		{
			cout << ErrorMessage;
			Number = ReadIntNumber(ErrorMessage);
		}
		return Number;
	}
	static int ReadPalindromeNumber(string ErrorMessage = "Invalid input, enter Palindrome number\n")
	{
		int Number = ReadIntNumber(ErrorMessage);
		while (!clsMath::IsPalindrome(Number))
		{
			cout << ErrorMessage;
			Number = ReadIntNumber(ErrorMessage);
		}
		return Number;
	}
	//=================================================================================================
	static clsMath::enOperatorType ReadOperationType(string ErrorMessage)
	{
		short OperatorType = ReadShortNumber(ErrorMessage);
		while (!(IsNumberBetween(OperatorType, (short)1, (short)5)))
		{
			cout << ErrorMessage;
			OperatorType = ReadShortNumber(ErrorMessage);
		}
		return (clsMath::enOperatorType)OperatorType;
	}
	static clsUtil::enLevel ReadQuestionLevel(string ErrorMessage)
	{
		short QuestionLevel = ReadShortNumber(ErrorMessage);
		while (!(IsNumberBetween(QuestionLevel,(short) 1,(short) 3)))
		{
			cout << ErrorMessage;
			QuestionLevel = ReadShortNumber(ErrorMessage);
		}
		return (clsUtil::enLevel)QuestionLevel;
	}



};

