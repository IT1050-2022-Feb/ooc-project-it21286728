//MLB 05.01 05 Online Medical Portal IT21286728
class Channel
{
	private:
		int channelId;
		char patientName[40];
		char nic[15];
		int age;
		char doctorName[50];
		char date[20];
		char time[8];

	public:
		Channel();
		Channel(int cId, char pName[40], char pNic[15], int pAge, char docName[50], char pDate[20], char pTime[8]);
		void setDetails(int cId, char pName[40], char pNic[15], int pAge,  char docName[50], char pDate[20], char pTime[8]);
		void channelDoctor();
		void cancelChannel();
		void displayChannel();
		~Channel();
};
