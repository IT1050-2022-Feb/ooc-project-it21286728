//MLB 05.01 05 Online Medical Portal IT21286728
class Patient
{
private:
	int patientId;
	char patientName[40];
	int age;
	char address[70];
	char email[40];

public:
	Patient();
	Patient(int pId, char pName[40], int pAge, char pAddress[70], char pEmail[40]);
	void setDetails(int pId, char pName[40], int pAge, char pAddress[70], char pEmail[40]);
	void registerPatient();
	void searchDoctors();
	void displayDetails();
	~Patient();

};