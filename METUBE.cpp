#include<cstring>
#include<ctime>
#include<windows.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;

//This Structure will Be Used for storing the Details of Videos
struct video {
	string title, description;
	int views, likes, comments, shares, forKidsOrNot, rating,flag=0;
	float earn;
};


//Parent Class YT
class YT
{
public:
	string channelName, ownerName, genre,pass ;
	int subscribers, noOfVideos = 0, rating;

	YT();
	~YT();

private:

};

YT::YT()
{
}

YT::~YT()
{
}



//Child Class Channel1
class channel1 : public YT 
{
public:
	video v[5];
	channel1();
	channel1(int a);
	channel1(double a);
	channel1(string a);
	~channel1(); 

	//For Displaying the details of the Channel
	void displayDetails();
	//For Changing the details of the Channel
	void changeDetails();
   //For Uploading a Video 
	void uploadVideo();
	//For seeing Video Analytics
	void seeVideoAnalytics();
	// For Deleting Video
	void deleteVideo();

	//For Loading Page
	void loading();

	//For Logging Page
	void logging();

	//For Exit Page
	void exit();

	//For Creating Page
	void create();



private:

};
channel1 :: channel1(){

}
void channel1::deleteVideo(){
	int a;
	cout << "\n\n----------------------------------------------------------------------------\n\n";
	cout << " **********    Welcome To Deletion Centre    **********" << endl << endl;
	cout << "Enter which Video Details You wish to Delete :" << endl<<endl;
	for(int i=0;i<10;i++)
	{
		if (v[i].flag == 1)
		{
			cout << i << ". " << v[i].title<<endl;
		}
	}

	
	cin>>a;
    v[a].title="XXXXX - DELETED VIDEO  - XXXX";

		
	v[a].description = "";
	v[a].views = 0;
	v[a].likes =0; 
	v[a].comments = 0;
	v[a].shares = 0; 
	v[a].forKidsOrNot = 0;
	v[a].rating= 0;
	v[a].flag= 1;

	
	noOfVideos--;

}

channel1::channel1(int a)
{
	//Initializing some Details
	channelName = "Climacer._.Editss";
	ownerName = "Vedant";
	pass="1234";
	//Random Number Generating Using Ctime Library
	srand((unsigned)time(NULL));
	subscribers = (49500 + rand() % 5000);
	rating = 4;
	genre = "Entertainment";


	//Initialising a Video
	noOfVideos = 1;
	v[noOfVideos].title = "How to Make an Edit";
	v[noOfVideos].description = "In this Video I will teach How to edit a video";
	v[noOfVideos].views = 85000;
	v[noOfVideos].likes = 4000; 
	v[noOfVideos].comments = 568;
	v[noOfVideos].shares = 169; 
	v[noOfVideos].forKidsOrNot = 0;
	v[noOfVideos].rating= 5;
	v[noOfVideos].flag= 1;
}
channel1::channel1(double a)
{
	//Initializing some Details
	channelName = "Origami With Aaditesh";
	ownerName = "Aaditesh";
	pass="123456789";
	//Random Number Generating Using Ctime Library
	srand((unsigned)time(NULL));
	subscribers = (49500 + rand() % 5000);
	rating = 4;
	genre = "Entertainment";


	//Initialising a Video
	noOfVideos = 1;
	v[noOfVideos].title = "How to Make an Origami Swan";
	v[noOfVideos].description = "In this Video I will teach How to make an Origami Swan";
	v[noOfVideos].views = 85000;
	v[noOfVideos].likes = 5578; 
	v[noOfVideos].comments = 568;
	v[noOfVideos].shares = 199; 
	v[noOfVideos].forKidsOrNot = 1;
	v[noOfVideos].rating= 5;
	v[noOfVideos].flag= 1;
}
channel1::channel1(string a)
{
	//Initializing some Details
	channelName = "Pratham kaise aaye";
	ownerName = "Prathamesh";
	pass="987654321";
	//Random Number Generating Using Ctime Library
	srand((unsigned)time(NULL));
	subscribers = (49500 + rand() % 5000);
	rating = 4;
	genre = "Education";


	//Initialising a Video
	noOfVideos = 1;
	v[noOfVideos].title = "How to Top Exams";
	v[noOfVideos].description = "In this Video I will teach you How to Top Exams";
	v[noOfVideos].views = 85000;
	v[noOfVideos].likes = 3000; 
	v[noOfVideos].comments = 568;
	v[noOfVideos].shares = 169; 
	v[noOfVideos].forKidsOrNot = 1;
	v[noOfVideos].rating= 5;
	v[noOfVideos].flag= 1;
}

channel1::~channel1()
{
}

void channel1::displayDetails()
{
	//Displaying some Details of the Channel
	int ch;
	do {
		
		cout << "\n\n----------------------------------------------------------------------------\n\n";
		cout << " **********    Enter which Information Should We Show You    **********" << endl << endl;
		cout << "1. Channel Name and Owner's Name" << endl;
		cout << "2. Number of Subscribers  " << endl;
		cout << "3. Number of Videos Uploaded " << endl;
		cout << "4. Genre and Rating" << endl;
		cout << "5. All the Details" << endl;
		cout << "6. Exit" << endl;
		cin >> ch;
		

		switch (ch)
		{
		case 1 :
			cout << "\n----------------------------------------------------------------------------\n\n";
			cout << "Channel Name : " << channelName << endl;
			cout << "Owner's Name: " << ownerName << endl;
			break;

		case 2:
			cout << "\n----------------------------------------------------------------------------\n\n";
			cout << "Total Subscribers : " << subscribers << endl;
			break;

		case 3:
			cout << "\n----------------------------------------------------------------------------\n\n";
			cout << "Total Number of Videos : " << noOfVideos << endl;
			break;

		case 4:		
			cout << "\n----------------------------------------------------------------------------\n\n";
			cout << "Genre : " << genre << endl;
			cout << "Rating : " << rating << endl;
			break;

		case 5:

			cout << "\n----------------------------------------------------------------------------\n\n";
			cout << "All the Details -->" << endl;
			cout << "Channel Name : " << channelName << endl;
			cout << "Owner's Name: " << ownerName << endl;
			cout << "Total Subscribers : " << subscribers << endl;
			cout << "Total Number of Videos : " << noOfVideos << endl;
			cout << "Genre : " << genre << endl;
			cout << "Rating : " << rating << endl;
			break;
		}
	} while (ch < 6);

}

void channel1::changeDetails()
{
	//Changing some Details of the Channel
	int ch;
	do {
	cout << "\n\n----------------------------------------------------------------------------\n\n";
	cout << " **********    Welcome To Updation Centre    **********" << endl << endl;
	cout << "1. Update Channel Name" << endl;
	cout << "2. Update Owner's Name" << endl;
	cout << "3. Update Genre" << endl;
	cout << "4. Exit" << endl;
	cin >> ch;
	switch (ch)
	{
	case 1:
		cout << "\n----------------------------------------------------------------------------\n\n";
		cout << "Old Channel Name : " << channelName << endl;
		cout << "Enter the New Name :" << endl;
		cin.ignore();
		getline(cin ,  channelName) ;
		cout << "\nNew Channel Name :" << channelName << endl;
		break;

	case 2:
		cout << "\n----------------------------------------------------------------------------\n\n";
		cout << "Old Owner's Name : " << ownerName << endl;
		cout << "Enter the New Name :" << endl;
		cin.ignore();
		getline(cin ,  ownerName) ;
		cout << "\nNew Owner's Name :" << ownerName << endl;
		break;

	case 3:
		cout << "\n----------------------------------------------------------------------------\n\n";
		cout << "Old Genre : " << genre << endl;
		cout << "Enter the New Genre :" << endl;
		cin.ignore();
		cin >>genre;
		cout << "\nNew Genre :" << genre << endl;
		break;
	}
	} while (ch <4);
}

void channel1::uploadVideo()
{
	//Uploading a Video
	noOfVideos++;
	int x = noOfVideos;
	cout << "\n\n----------------------------------------------------------------------------\n\n";
	cout << " **********    Welcome To Upload Centre    **********" << endl << endl;
	cout << "Enter the Title of the Video :" << endl;
	
	getline(cin ,  v[x].title) ;
	cout << "Enter the Description of the Video :" << endl;
	getline(cin ,  v[x].description) ;
	cout << "For Kids or Not For Kids \n0. Not for Kids\n1. For Kids" << endl;
	cin >> v[x].forKidsOrNot;

//Random Number Generating Using Ctime Library
	srand((unsigned)time(NULL));
	v[x].views = (99500 + rand() % 5000);
	v[x].likes = (30500 + rand() % 5000);
	v[x].comments = (1500 + rand() % 5000);
	v[x].shares = (500 + rand() % 500);
	v[x].rating= (1+ rand() % 5);
	v[x].flag= 1;


	cout << "Upload Complete !!" << endl;
}

void channel1::seeVideoAnalytics()
{
	//Displaying the analytics
	cout << "\n\n----------------------------------------------------------------------------\n\n";
	cout << " **********    Welcome To Analytics Centre    **********" << endl << endl;
	cout << "Enter which Video Details You wish to See :" << endl<<endl;
	int k=1;
	for(int i=0;i<10;i++)
	{
		if (v[i].flag == 1)
		{
			cout << k++ << ". " << v[i].title<<endl;
		}
	}
	int ch;
	cin >> ch;
	if(v[ch].flag==1){
	cout << "\n\n----------------------------------------------------------------------------\n\n";
	cout << " **********    Displaying the Details    **********" << endl<<endl;
	cout << "Title : "<<v[ch].title<<endl;
	cout << "Description : "<<v[ch].description<<endl;
	cout << "Views : "<<v[ch].views<<endl;
	cout << "Likes : "<<v[ch].likes<<endl;
	cout << "Comments : "<<v[ch].comments<<endl;
	cout << "Shares : "<<v[ch].shares<<endl;
	cout << "Rating : "<<v[ch].rating<<endl;
	v[ch].earn=(float)v[ch].views/7237;
	printf("Earning : $ %0.2f",v[ch].earn);
}
	else
	{
		cout<<"Enter a Valid Number !!"<<endl;
	}
}


void channel1 :: loading(){
	
	
	system("COLOR 0b");

	// system("cls"); 
	printf("\e[?25l");
	int bar1=177,bar2=219;

	cout<<"\n\n\t\t\t"<<"MeTube "<<(char)1<<"\n\n\t\t\tLoading...";
	cout<<"\n\t\t\t";

	for(int i=0;i<25;i++){
		cout<<(char)bar1;
		
	}
	cout<<"\r";
	cout<<"\t\t\t";
	for(int i=0;i<25;i++){
		cout<<(char)bar2;
		Sleep(150);
	}
	cout<<"\n\t\t\t"<<(char)1<<"!";
	system("Pause");
	system("cls");
}
void channel1 :: exit(){
	system("COLOR 0c");
	system("cls"); 
	printf("\e[?25l");
	int bar1=177,bar2=219;
	cout<<"\n\n\t\t\tMeTube\n\t\t\tTHANK YOU FOR USING!!\n\n\t\t\tCLOSING...";
	cout<<"\n\t\t\t";

	for(int i=0;i<25;i++){
		cout<<(char)bar1;
	}
	cout<<"\r";
	cout<<"\t\t\t";
	for(int i=0;i<25;i++){
		cout<<(char)bar2;
		Sleep(150);
	}
	cout<<"\n\t\t\t"<<(char)1<<"!";

	system("cls");
}
void channel1 :: logging(){
	system("COLOR 0c");
	system("cls"); 
	printf("\e[?25l");
	int bar1=177,bar2=219;
	cout<<"\n\n\t\t\tTHANK YOU FOR USING!!\n\t\t\tKEEP CREATING!!\n\n\t\t\tLOGGING OUT...";
	cout<<"\n\t\t\t";

	for(int i=0;i<25;i++){
		cout<<(char)bar1;
	}
	cout<<"\r";
	cout<<"\t\t\t";
	for(int i=0;i<25;i++){
		cout<<(char)bar2;
		Sleep(150);
	}
	cout<<"\n\t\t\t"<<(char)1<<"!";

	system("cls");
}

void channel1::create(){
	// channelName = "Origami With Aaditesh";
	// ownerName = "Aaditesh";
	// pass="123456789";
	// //Random Number Generating Using Ctime Library
	// srand((unsigned)time(NULL));
	// subscribers = (49500 + rand() % 5000);
	// rating = 4;
	// genre = "Entertainment";
	cin.ignore();

	cout<<"Enter Owner Name:\n";
	getline(cin,ownerName);
	cout<<"Enter Channel Password:\n";
	getline(cin,pass);
	cout<<"Enter Channel Name:\n";
	getline(cin,channelName);
	// //Random Number Generating Using Ctime Library
	// srand((unsigned)time(NULL));
	subscribers = (49500 + rand() % 5000);
	rating=4;
	cout<<"Enter Genre Of Videos\n";
	getline(cin,genre);
	uploadVideo();
	return;
}
int main()
{  
	channel1 channels[10];

	 channel1 vedant(10),Aaditesh(10.5),Prathamesh("hello");
	channels[0]=vedant;
	channels[1]=Aaditesh;
	channels[2]=Prathamesh;
	vedant.loading();
	// system("COLOR 0c");
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(h,3);
	int ch;
	restart:
	cout<<"\n\t\tWELCOME TO METUBE!!!\t\t\t\n\n";
	
	cout<<"1. Create Channel\n2. LOGIN\n";
	cin>>ch;
	static int a=3;
	
	switch(ch){
		case 1:
		channels[a].create();
		a++;
		break;


	}

	string username,pass;
int k=0,id=10;
start:
	cout<<"\n*******************ENTER USERNAME********************\n";
	cin>>username;

	cout<<"\n*******************ENTER PASSWORD********************\n";
	ch = getch();

	while(ch!=13){
		pass.push_back(ch);
		cout<<'*';
		ch=getch();
	}
for(int i=0;i<a;i++){
	if(username==channels[i].ownerName && pass==channels[i].pass){	
	cout<<"\nLOGIN SUCCESSFULL!!!\n";
	cout<<"\n\t\t WELCOME "<<channels[i].ownerName;
	id=i;
	k=1;
	}
}
	if(k==0){
		
		cout<<"\n\nINVALID PASSWORD TRY AGAIN\n\n";
		ch=0;
		pass="";
		goto start;
	}
	
	
	
	int cha;
while(100){
	SetConsoleTextAttribute(h,2);

	cout<<"\n\n*****************WELCOME TO ME-TUBE STUDIO*****************\n\n";
	cout<<"1. Display channel info or general information\n2. Change the Channel details\n3. Upload a video\n4. Delete a video\n5. See video analytics\n6. Logout\n7. Exit\n";
	cin>>cha;
	switch(cha){

		case 1:
	SetConsoleTextAttribute(h,1);

			channels[id].displayDetails();
			break;
		case 2:
	SetConsoleTextAttribute(h,5);

			channels[id].changeDetails();
			break;
		case 3:
	SetConsoleTextAttribute(h,6);
            cin.ignore();
			channels[id].uploadVideo();
			break;
		case 4:
	SetConsoleTextAttribute(h,4);

			channels[id].deleteVideo();
			break;
		case 5:
	SetConsoleTextAttribute(h,8);

			channels[id].seeVideoAnalytics();
			break;
		case 6:
		channels[id].logging();
	SetConsoleTextAttribute(h,3);

		goto restart;

		  break;
        case 7:
		channels[id].exit();
		    return 0;
		default: 
			cout<<"ENTER VALID OPTION\n\n\n";

	}
}

}


