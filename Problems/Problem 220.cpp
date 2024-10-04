

#include <iostream>

using namespace std;

struct sDate {

	short Day, Month, Year;

};

string ReplaceWordInString(string S1, string StringToReplace, string sRepalceTo) {

	short pos = S1.find(StringToReplace);

	while (pos != std::string::npos)
	{
		S1 = S1.replace(pos, StringToReplace.length(),
			sRepalceTo);

		pos = S1.find(StringToReplace);//find next
	}

	return S1;
}

string DateFromat(sDate Date, string DateFormat = "dd/mm/yyyy") {

	string NewFormat;

	NewFormat = ReplaceWordInString(DateFormat, "dd", to_string(Date.Day));
	NewFormat = ReplaceWordInString(NewFormat, "mm", to_string(Date.Month));
	NewFormat = ReplaceWordInString(NewFormat, "yyyy", to_string(Date.Year));

	return NewFormat;

}

int main()
{
   








	return 0;

}
