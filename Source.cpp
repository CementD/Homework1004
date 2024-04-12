#include <iostream>
using namespace std;

class Worker {
	string name;
	string post;
	int startYear;
	double salary;
public:
	explicit Worker(string pName, string pPost, int pStartYear, double pSalary) : name(pName), post(pPost), startYear(pStartYear), salary(pSalary) {}

	void display() const {
		cout << "Name: " << name << "; Post: " << post << "; Start year: " << startYear << "; Salary: " << salary << endl;
	}

	string getName() const {
		return name;
	}

	string getPost() const {
		return post;
	}

	int getStartYear() const {
		return startYear;
	}

	double getSalary() const {
		return salary;
	}
};

void displayExperience(const Worker workers[], const int SIZE, int experienceYears) {
	cout << "Workers with experiece more than " << experienceYears << " years:" << endl;
	for (int i = 0; i < SIZE; i++) {
		if (2024 - workers[i].getStartYear() > experienceYears)
			workers[i].display();
	}
}

void displayAboveSalary(const Worker workers[], const int SIZE, int salaryToCheck) {
	cout << "Workers with salary more than " << salaryToCheck << endl;
	for (int i = 0; i < SIZE; i++) {
		if (workers[i].getSalary() > salaryToCheck)
			workers[i].display();
	}
}

void displayPost(const Worker workers[], const int SIZE, string postToCheck) {
	cout << "Workers with post " << postToCheck << endl;
	for (int i = 0; i < SIZE; i++) {
		if (workers[i].getPost() == postToCheck)
			workers[i].display();
	}
}

int main() {
	const int SIZE = 3;
	Worker workers[SIZE]{
		Worker("Semen", "Manager", 2010, 60000.0),
		Worker("Nikita", "Developer", 2004, 40000.0),
		Worker("Kiril", "Designer", 2007, 0.01)
	};

	for (int i = 0; i < SIZE; i++) {
		workers[i].display();
	}

	displayExperience(workers, SIZE, 18);
	displayAboveSalary(workers, SIZE, 50000.0);
	displayPost(workers, SIZE, "Designer");

	return 0;
}