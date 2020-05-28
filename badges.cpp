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
	vector<string> media, sciMethod, literary, quant, societies, diversity, awareness, sustainability, appKnowledge, ethics, leadership, crossroads, culminating, writing;
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

	read("general-ed/crossroads", crossroads);
	read("general-ed/culminating", culminating);
	read("general-ed/writing", writing);

	string course;	
	top:
	cout << "\nEnter Course: ";
	getline(cin, course);
	
	for (int i = 0; i < course.length(); i++) {
		if (course[i] >= 'a' && course[i] <= 'z') course[i] -= 32; // convert to uppercase
		if (course[i] == '-') course[i] = ' '; // convert dash to space
	}

	cout << "\nBadges:\n";
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

	cout << "\nGeneral Ed:\n";
	if (find(crossroads, course)) cout << "Crossroads Course\n";
	if (find(writing, course)) cout << "Writing in the Discipline\n";
	if (find(culminating, course)) cout << "Culminating Experience\n";

	goto top;
}