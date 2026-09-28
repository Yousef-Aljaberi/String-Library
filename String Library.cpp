#include <iostream>
#include <vector>
#include "clsString.h"

using namespace std;

int main()
{
    // ==========================================================
    // 1) «Œ »«— «·»‰«¡ Ê«·ﬁ—«¡… Ê«·ÿ»«⁄… «·√”«”Ì…
    // ==========================================================
    clsString S1("yousif mohammed ali");
    cout << "Initial Value: " << S1.Value << "\n\n";

    cout << "--- First Letter of Each Word ---\n";
    S1.PrintFirstLetterOfEachWors();

    // ==========================================================
    // 2)  €ÌÌ— Õ«·… «·√Õ—› (Object vs Static)
    // ==========================================================
    cout << "\n----------------------------------------------------------\n";
    cout << "--- Capitalize First Letters ---\n";
    S1.UpperFirstLeeterOfEachWord(); //  ⁄œ· _Value „»«‘—…
    cout << "After UpperFirstLetter (Object): " << S1.Value << endl;
    cout << "Static Call: " << clsString::UpperFirstLeeterOfEachWord("software engineering course") << endl;

    cout << "\n--- Lowercase First Letters ---\n";
    S1.LowerFirstLetterOfEachWord();
    cout << "After LowerFirstLetter (Object): " << S1.Value << endl;

    cout << "\n--- Lower All Letters ---\n";
    S1.Value = "WELCOME TO C++ PROGRAMMING";
    S1.LowerAllLetterOfString();
    cout << "After LowerAll (Object): " << S1.Value << endl;
    cout << "Static Call: " << clsString::LowerAllLetterOfString("ABC DEF GHI") << endl;

    cout << "\n--- Invert Case ---\n";
    S1.Value = "AbCdEf";
    S1.InverAllLettersCase();
    cout << "After Invert Case: " << S1.Value << endl;
    cout << "Static Invert: " << clsString::InverAllLettersCase("Hello World!") << endl;

    // ==========================================================
    // 3) «·⁄œ Ê«·≈Õ’«¡ (Counting Letters & Vowels)
    // ==========================================================
    cout << "\n----------------------------------------------------------\n";
    S1.Value = "Jordan Amman 2026!";

    cout << "Capital Letters: " << S1.CountSmallCapitalLetters(clsString::enWhatToCount::Capital) << endl;
    cout << "Small Letters:   " << S1.CountSmallCapitalLetters(clsString::enWhatToCount::Small) << endl;
    cout << "All Characters:  " << S1.CountSmallCapitalLetters(clsString::enWhatToCount::All) << endl;

    cout << "\nTarget Char 'a' (Case-Sensitive): " << S1.CountLetters('a') << endl;
    cout << "Target Char 'a' (Case-Insensitive): " << S1.CountLetterNoMatchCase('a', false) << endl;

    cout << "\nVowels Count: " << S1.CountVowels() << endl;
    cout << "List of Vowels: ";
    S1.PrintAllVowelsLetter();
    cout << endl;

    // ==========================================================
    // 4) «· ⁄«„· „⁄ «·ﬂ·„«  (Words Operations)
    // ==========================================================
    cout << "\n----------------------------------------------------------\n";
    S1.Value = "Data Structures and Algorithms in C++";
    cout << "Target Text: " << S1.Value << "\n";
    cout << "Words Count: " << S1.CountEachWordOfString() << "\n\n";

    cout << "Printing each word:\n";
    S1.PrintEachWordOfString();

    // ==========================================================
    // 5) «· ﬁÿÌ⁄ Ê«·œ„Ã (Split & Join)
    // ==========================================================
    cout << "\n----------------------------------------------------------\n";
    S1.Value = "Apple,Banana,Orange,Mango";
    cout << "Splitting CSV: " << S1.Value << endl;

    vector<string> vFruits = S1.SplitString(",");
    for (const string& fruit : vFruits)
    {
        cout << "Item: " << fruit << endl;
    }

    cout << "\nJoining Vector back with ' - ': " << clsString::JoinString(vFruits, " - ") << endl;

    string arrWords[] = { "C++", "C#", "Python", "Java" };
    cout << "Joining Array with ' | ': " << clsString::JoinString(arrWords, 4, " | ") << endl;

    // ==========================================================
    // 6) «·„”«›«  Ê«· ‰ŸÌ› (Trim Operations)
    // ==========================================================
    cout << "\n----------------------------------------------------------\n";
    clsString S2("    Trim Test String    ");
    cout << "Original with spaces: [" << S2.Value << "]\n";

    S2.TrimLeft();
    cout << "After TrimLeft:       [" << S2.Value << "]\n";

    S2.Value = "    Trim Test String    ";
    S2.TrimRight();
    cout << "After TrimRight:      [" << S2.Value << "]\n";

    S2.Value = "    Trim Test String    ";
    S2.Trim();
    cout << "After Trim (Both):    [" << S2.Value << "]\n";

    // ==========================================================
    // 7) «·«” »œ«· Ê⁄ﬂ” «·Ã„· Ê⁄·«„«  «· —ﬁÌ„ (Replace & Punctuation)
    // ==========================================================
    cout << "\n----------------------------------------------------------\n";
    S1.Value = "I love Jordan, Jordan is great!";
    cout << "Before Replace: " << S1.Value << endl;
    S1.ReplaceWords("Jordan", "Yemen", true);
    cout << "After Replace:  " << S1.Value << endl;

    S1.Value = "First Second Third Fourth";
    S1.ReversWordsInString();
    cout << "\nReversed Words: " << S1.Value << endl;

    S1.Value = "Hello, World! It's 2026; let's code: C++.";
    cout << "\nWith Punctuations:    " << S1.Value << endl;
    S1.RemovePunctuations();
    cout << "Without Punctuations: " << S1.Value << endl;

    cout << "\n----------------------------------------------------------\n";
    system("pause");
    return 0;
}