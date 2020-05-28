#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

void read(string fileName, vector<string> & vecOfStrs) {
	ifstream in(fileName.c_str());
	string str;
	while (getline(in, str)) if(str.size() > 0) vecOfStrs.push_back(str);
	in.close();
}

bool find(vector<string> badge, string course) {
	for (int i = 0; i < badge.size(); i++) {
		if (badge.at(i).find(course) != string::npos) {
			return true;
			break;
		}
	}
	return false;
}
 
int main() {
	vector<string> media, sciMethod, literary, quant, societies, diversity, awareness, sustainability, appKnowledge, ethics, leadership;
	// int input;
	// loads badges into vectors
	read("badges/media-and-visual-analysis", media);
	read("badges/scientific-method", sciMethod);
	read("badges/literary-and-textual-analysis", literary);
	read("badges/quantitative-and-numerical-analysis", quant);
	read("badges/societies-and-cultures-past", societies);
	read("badges/diversity-and-identity", diversity);
	read("badges/global-awareness", awareness);
	read("badges/sustainability", sustainability);
	read("badges/practical-and-applied-knowledge", appKnowledge);
	read("badges/ethics", ethics);
	read("badges/leadership-community-and-engaging-world", leadership);

	/* cout << "Badges:\n";
	cout << "01. Media and Visual Analysis\n";
	cout << "02. Scientific Method\n";
	cout << "03. Literary and Textual Analysis\n";
	cout << "04. Quantitative and Numerical Analysis\n";
	cout << "05. Societies and Cultures of the Past\n";
	cout << "06. Diversity & Identity\n";
	cout << "07. Global Awareness\n";
	cout << "08. Sustainability\n";
	cout << "09. Practical and Applied Knowledge\n";
	cout << "10. Ethics\n";
	cout << "11. Leadership, Community, and Engaging the World\n";

	cin >> input;

	switch(input) {
		case 1:
			for (int i = 0; i < media.size(); i++) cout << media.at(i) << "\n";
			break;
		case 2:
			for (int i = 0; i < sciMethod.size(); i++) cout << sciMethod.at(i) << "\n";
			break;
		case 3:
			for (int i = 0; i < literary.size(); i++) cout << literary.at(i) << "\n";
			break;
		case 4:
			for (int i = 0; i < quant.size(); i++) cout << quant.at(i) << "\n";
			break;
		case 5:
			for (int i = 0; i < societies.size(); i++) cout << societies.at(i) << "\n";
			break;
		case 6:
			for (int i = 0; i < diversity.size(); i++) cout << diversity.at(i) << "\n";
			break;
		case 7:
			for (int i = 0; i < awareness.size(); i++) cout << awareness.at(i) << "\n";
			break;
		case 8:
			for (int i = 0; i < sustainability.size(); i++) cout << sustainability.at(i) << "\n";
			break;
		case 9:
			for (int i = 0; i < appKnowledge.size(); i++) cout << appKnowledge.at(i) << "\n";
			break;
		case 10:
			for (int i = 0; i < ethics.size(); i++) cout << ethics.at(i) << "\n";
			break;
		case 11:
			for (int i = 0; i < leadership.size(); i++) cout << leadership.at(i) << "\n";
			break;
		default:
			cout << "Invalid input.";
	} */
	string course;

	
	cout << "Usage: deptName XXX\n";
	cout << "Example: CSE 021\n";

	top:
	cout << "\nEnter Course: ";
	getline(cin, course);
	cout << '\n';

	cout << "Badges:\n";
	if (find(media, course)) cout << "Media and Visual Analysis\n";
	if (find(sciMethod, course)) cout << "Scientific Method\n";
	if (find(literary, course)) cout << "Literary and Textual Analysis\n";
	if (find(quant, course)) cout << "Quantitative and Numerical Analysis\n";
	if (find(societies, course)) cout << "Societies and Cultures of the Past\n";
	if (find(diversity, course)) cout << "Diversity & Identity\n";
	if (find(awareness, course)) cout << "Global Awareness\n";
	if (find(sustainability, course)) cout << "Sustainability\n";
	if (find(appKnowledge, course)) cout << "Practical and Applied Knowledge\n";
	if (find(ethics, course)) cout << "Ethics\n";
	if (find(leadership, course)) cout << "Leadership, Community, and Engaging the World\n";

	goto top;
}