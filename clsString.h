#pragma once
#include<iostream>
using namespace std;

class clsString
{
private:
	string _Value;
public:
	clsString()
	{
		_Value = "";
	}
	clsString(string Value)
	{
		_Value = Value;
	}

	void setValue(string Value)
	{
		_Value = Value;
	}

	string getValue()
	{
		return _Value;
	}

	__declspec(property(get = getValue, put = setValue))  string Value;



	static void PrintFirstLetterOfEachWors(string text)
	{
		bool IsFirstLetter = true;
		cout << "Firsts Letter Of This String: \n";

		for (int i = 0; i < text.length(); i++)
		{
			if (text[i] != ' ' && IsFirstLetter)
			{
				cout << text[i] << "\n";
			}
			IsFirstLetter = (text[i] == ' ' ? true : false);
		}
	}

	void PrintFirstLetterOfEachWors()
	{
		 PrintFirstLetterOfEachWors( _Value );
		
	}

	static string UpperFirstLeeterOfEachWord(string text)
	{
		bool IsFirstLetter = true;
		for (short i = 0; i < text.length(); i++)
		{
			if (text[i] != ' ' && IsFirstLetter)
			{
				text[i] = toupper(text[i]);
			}

			IsFirstLetter = (text[i] == ' ' ? true : false);
		}
		return text;
	}

	string UpperFirstLeeterOfEachWord()
	{
		return UpperFirstLeeterOfEachWord(_Value);
	}

	static string LowerFirstLetterOfEachWord(string text)
	{
		bool IsFirstLetter = true;
		for (short i = 0; i < text.length(); i++)
		{
			if (text[i] != ' ' && IsFirstLetter)
			{
				text[i] = tolower(text[i]);
			}
			IsFirstLetter = (text[i] == ' ' ? true : false);
		}
		return text;
	}

	string LowerFirstLetterOfEachWord()
	{
		return  LowerFirstLetterOfEachWord(_Value);
	}

	static string LowerAllLetterOfString(string text)
	{
		for (short i = 0; i < text.length(); i++)
		{

			text[i] = tolower(text[i]);

		}
		return text;

	}

	string LowerAllLetterOfString()
	{
		return  LowerAllLetterOfString(_Value);
	}

	static 	char InvertCharecterCase(char L)
	{
		return isupper(L) ? tolower(L) : toupper(L);
	}

	static string InverAllLettersCase(string text)
	{
		for (int i = 0; i < text.length(); i++)
		{
			text[i] = InvertCharecterCase(text[i]);
		}
		return text;
	}
	 
	string InverAllLettersCase()
	{
		return InverAllLettersCase(_Value);
	}

	static enum enWhatToCount{ Capital = 1, Small = 2, All = 3 };

	static int CountSmallCapitalLetters(string text, enWhatToCount WhatToCount = enWhatToCount::All)
	{
		if (WhatToCount == enWhatToCount::All)
		{
			return text.length();
		}
		int Counter = 0;
		for (int i = 0; i < text.length(); i++)
		{
			if (WhatToCount == enWhatToCount::Small && islower(text[i]))
				Counter++;

			else if (WhatToCount == enWhatToCount::Capital && isupper(text[i]))
				Counter++;
		}
		return Counter;
	}

	int CountSmallCapitalLetters(enWhatToCount WhatToCount)
	{
		return CountSmallCapitalLetters(_Value, WhatToCount);
	}

	static int  CountLetters(string text, char TargetChar)
	{
		int count = 0;
		for (int i = 0; i < text.length(); i++)
		{
			if (text[i] == TargetChar)
				count++;
		}
		return count;
	}

	int CountLetters(char TargetChar)
	{
		return CountLetters(_Value, TargetChar);
	}

	static short CountLetterNoMatchCase(string text, char TargetLetter, bool NoMatchCase = true)
	{
		short Count = 0;
		for (short i = 0; i < text.length(); i++)
		{
			if (NoMatchCase)
			{
				if (text[i] == TargetLetter)
				{
					Count++;
				}
			}
			else if (!NoMatchCase)
			{
				if (tolower(text[i]) == tolower(TargetLetter))
					Count++;
			}
		}
		return Count;
	}

	short CountLetterNoMatchCase(char TargetLetter, bool NoMatchCase = true)
	{
		return  CountLetterNoMatchCase(_Value, TargetLetter, NoMatchCase);
	}

	static bool IsVowel(char Ch1)
	{
		Ch1 = tolower(Ch1);
		return((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'i') || (Ch1 == 'o') || (Ch1 == 'u'));

	}
	static short CountVowels(string text)
	{
		int counter = 0;
		for (short i = 0; i < text.length(); i++)
		{
			if (IsVowel(text[i]))
			{
				counter++;
			}
		}
		return counter;


	}
	short CountVowels()
	{
		return CountVowels(_Value);
	}

	
};

