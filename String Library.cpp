#include<iostream>
#include "clsString.h"
using namespace std;





int main()
{
	clsString S1 ("My Name is Yousif");
	cout << S1.Value << endl;
	S1.PrintFirstLetterOfEachWors();

	S1.Value = S1.UpperFirstLeeterOfEachWord();
	cout << S1.Value << endl;
	cout << "String After lower case first letter of each word \n";
	S1.Value = S1.LowerFirstLetterOfEachWord();
	cout << S1.Value << endl;
	//useing upper without object (static)	
	cout << clsString::UpperFirstLeeterOfEachWord("i am a software engineering") << endl;
	cout << "Letters after lower: \n";
	cout << S1.LowerAllLetterOfString() << endl;
	cout << "Letters after lower using static function: \n";
	cout << clsString::LowerAllLetterOfString("This is my library ") << endl;
	cout << "----------------------------------------------------------\n";
	cout << "String after Invert letters  case:\n";
	cout << S1.InverAllLettersCase() << endl;
	S1.Value = "My Name Is Yousif";
	cout << "----------------------------------------------------------\n";
	cout << "The number of capitial letters in [ "<<S1.Value <<" ] are: " << endl;
	cout << S1.CountSmallCapitalLetters(clsString::Capital) << endl; 	//enWhatToCount::Capital

	cout << "----------------------------------------------------------\n";
	cout << "The Numbe of letter M  is: \n";
	cout << S1.CountLetters('M') << endl;

	cout << "----------------------------------------------------------\n";
	cout << "The number of letter m or M in " << " my Name is Mohammed " << endl;
	cout << clsString::CountLetterNoMatchCase("my Name is Mohammed", 'm', false) << endl;

	cout << "----------------------------------------------------------\n";
	cout << "The number of vowels letters in [ " << S1.Value << " ]  are: \n";
	cout << S1.CountVowels() << endl;
						





	cout << endl;
	system("pause");
	return 0;
}