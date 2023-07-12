#include<iostream>
using namespace std;


class patient {
		static int X;
		string name;
		int patientID;
		bool treatable=false;
	public:
		patient(string n=""):name(n),patientID(X) {
			X++;
		}
		void setname(string n) {
			name=n;
		}
		string getname() {
			return name;
		}
		int getpid() {
			return patientID;
		}
		void settreat(bool i) {
			treatable=i;
		}
		bool istreatable() {
			return treatable;
		}
		void display() {
			cout<<endl<<endl<<"Patient Name: "<<name<<"\t| Patient #"<<patientID<<endl<<endl;
		}
		void get() {
			cout<<endl<<endl<<"Enter Patient Name: ";
			cin>>name;
		}
};
int patient::X =0;

class Staff {
		string Name;
		int ID;
		static int IDtrack;
	public:
		Staff(string n=""):ID(IDtrack),Name(n) {
			IDtrack++;
		}
		void setID(int I) {
			ID=I;
		}
		int getid() {
			return ID;
		}
		void setname(string n) {
			Name=n;
		}
		string getname() {
			return Name;
		}
		virtual void display() {
			cout<<endl<<endl<<"Name: "<<Name<<"\t| ID: "<<ID;
		}
		virtual void get() {
			cout<<endl<<endl<<"Enter Name: ";
			cin>>Name;
		}
};
int Staff::IDtrack=0;

class Nurse:public Staff {
	public:
		Nurse(string n=""):Staff(n) {
			setID(getid()+1000);
		}
		void prepPatient(patient& pt) {
			if(!pt.istreatable()) {
				pt.settreat(1);
			} else {
				cout<<endl<<endl<<"Patient Already Ready for Treatment"<<endl<<endl;
			}
		}

};

class Assistant:public Staff {
		bool Availible=true;
	public:
		Assistant(string n=""):Staff(n) {
			setID(getid()+2000);
		}
		void WorkToggle() {
			Availible=!Availible;
		}
		void display() {
			Staff::display();
			cout<<"\t| Availability: ";

			if(Availible) {
				cout<<endl<<endl<<"Present"<<endl<<endl;
			} else {
				cout<<endl<<endl<<"UnAvailable."<<endl<<endl;
			}
		}
};

class Doctor:public Staff {
		int patientstreated=0;
	public:
		Doctor(string n=""):Staff(n) {}
		void treatpatient() {
			patientstreated++;
		}
		void display() {
			Staff::display();
			cout<<"\t| Patients treated: "<<patientstreated;
		}
};

class Physician: public Doctor {
		string physiciantype;
		patient* primarypatient;
	public:
		Physician(string pt="",string n=""):Doctor(n),physiciantype(pt) {
			setID(getid()+3000);
		}
		void setpt(string pt) {
			physiciantype=pt;
		}
		string getpt() {
			return physiciantype;
		}
		void display() {
			Doctor::display();
			cout<<"\t| Physician Type: "<<physiciantype<<endl<<endl;
		}
		void get() {
			cout<<endl<<endl<<"Enter Name: ";
			string n;
			cin>>n;
			setname(n);
			cout<<endl<<endl<<"Enter Physician Type: ";
			cin>>physiciantype;
		}
};

class departments {
		string deptname;
	public:
		departments(string dn=""):deptname(dn) {}
		void setdept(string d) {
			deptname = d;
		}
		string getdept() {
			return deptname;
		}
};

class SpecializedDoctor:public Doctor,public departments {
		string specialization;
		Assistant* assist;
	public:
		SpecializedDoctor(string s="",string n=""):specialization(s),Doctor(n),departments() {
			setID(getid()+4000);
		}

		void setspecialty(string s) {
			specialization=s;
		}

		string gets() {
			return specialization;
		}

		void display() {
			Doctor::display();
			cout<<"\t| Speciality: "<<specialization<<"\t| Department: "<<getdept()<<endl<<endl;
		}

		void get() {
			cout<<endl<<endl<<"Enter Name: ";
			string n;
			cin>>n;
			setname(n);
			cout<<endl<<endl<<"Enter Specialization: ";
			cin>>specialization;
			cout<<endl<<endl<<"Enter Department: ";
			cin>>n;
			setdept(n);
		}
};

class hospital {
		Staff** hospitalstaff;
		patient* patients;
		int pcount=0,scount=0;
		int parrcount,sarrcount;
		string name;

		void showpatients() {  	//Patients have 1000
			cout<<endl<<endl<<"////////////////PATIENTS///////////////////"<<endl<<endl;

			for(int i=0; i<pcount; i++) {
				patients[i].display();
			}

		}

		void showphysicians() {		//Doctors specialized have 5000, Physicians have 4000
			cout<<endl<<endl<<"////////////////PHYSICIANS///////////////////"<<endl<<endl;

			for(int i=0; i<scount; i++) {
				if(hospitalstaff[i]->getid()>2999&&hospitalstaff[i]->getid()<4000) {
					hospitalstaff[i]->display();
				}
			}

		}

		void showspecialty() {
			cout<<endl<<endl<<"////////////////SPECIALTY///////////////////"<<endl<<endl;

			for(int i=0; i<scount; i++) {
				if(hospitalstaff[i]->getid()>3999&&hospitalstaff[i]->getid()<5000) {
					hospitalstaff[i]->display();
				}
			}

		}

		void shownurses() {
			cout<<endl<<endl<<"////////////////NURSES///////////////////"<<endl<<endl;

			for(int i=0; i<scount; i++) {
				if(hospitalstaff[i]->getid()>999&&hospitalstaff[i]->getid()<2000) {
					hospitalstaff[i]->display();
				}
			}

		}

		void showassistants() {
			cout<<endl<<endl<<"////////////////ASSISTANTS///////////////////"<<endl<<endl;

			for(int i=0; i<scount; i++) {
				if(hospitalstaff[i]->getid()>1999&&hospitalstaff[i]->getid()<3000) {
					hospitalstaff[i]->display();
				}
			}

		}

		void showall() {
			showpatients();
			showphysicians();
			showspecialty();
			showassistants();
			shownurses();
		}

		int findSindex(int id) {
			for(int i=0; i<scount; i++) {
				if(hospitalstaff[i]->getid()==id) {
					return i;
				}
			}

			cout<<endl<<endl<<"Staff ID doesn't exist."<<endl<<endl;
			return -1;
		}

		int findPindex(int pid) {
			for(int i=0; i<pcount; i++) {
				if(patients[i].getpid()==pid) {
					return i;
				}
			}

			cout<<endl<<endl<<"patient ID doesn't exist."<<endl<<endl;
			return -1;
		}

		bool SIsFull() {
			return scount==sarrcount;
		}

		bool PIsFull() {
			return pcount==parrcount;
		}

		void addstaff() {
			if(!SIsFull()) {
				char c;
				cout<<endl<<endl<<"What category of staff is this person?"<<endl<<endl<<"(1)Specialized Doctor (2)Physician (3)Nurse (4)Assistant"<<endl<<endl;
				cin>>c;

				while(c!='1'&&c!='2'&&c!='3'&&c!='4') {
					cout<<endl<<endl<<"Invalid input, try again."<<endl<<endl;
					cout<<endl<<endl<<"What category of staff is this person?"<<endl<<endl<<"(1)Specialized Doctor (2)Physician (3)Nurse (4)Assistant"<<endl<<endl;
					cin>>c;
				}

				switch(c) {
					case '1':
						hospitalstaff[scount]=new SpecializedDoctor;
						break;

					case '2':
						hospitalstaff[scount]=new Physician;
						break;

					case '3':
						hospitalstaff[scount]=new Nurse;
						break;

					case '4':
						hospitalstaff[scount]=new Assistant;
				}

				hospitalstaff[scount]->get();
				scount++;
			} else {
				Staff** dummy;
				dummy=new Staff*[scount];

				for(int i=0; i<scount; i++) {
					dummy[i]=hospitalstaff[i];
					delete hospitalstaff[i];
				}

				delete hospitalstaff;
				hospitalstaff = new Staff*[scount+1];

				for(int i=0; i<scount; i++) {
					hospitalstaff[i]=dummy[i];
					delete dummy[i];
				}

				char c;
				cout<<endl<<endl<<"What category of staff is this person?"<<endl<<endl<<"(1)Specialized Doctor (2)Physician (3)Nurse (4)Assistant"<<endl<<endl;
				cin>>c;

				while(c!='1'&&c!='2'&&c!='3'&&c!='4') {
					cout<<endl<<endl<<"Invalid input, try again."<<endl<<endl;
					cout<<endl<<endl<<"What category of staff is this person?"<<endl<<endl<<"(1)Specialized Doctor (2)Physician (3)Nurse (4)Assistant"<<endl<<endl;
					cin>>c;
				}

				switch(c) {
					case '1':
						hospitalstaff[scount]=new SpecializedDoctor;
						break;

					case '2':
						hospitalstaff[scount]=new Physician;
						break;

					case '3':
						hospitalstaff[scount]=new Nurse;
						break;

					case '4':
						hospitalstaff[scount]=new Assistant;
				}

				delete dummy;
				hospitalstaff[scount]->get();
				scount++;
				sarrcount++;
			}
		}

		void removestaff() {
			char c;
			cout<<endl<<endl<<"Which staff member do you want to remove?"<<endl<<endl<<"(1)Specialized Doctor (2)Physician (3)Nurse (4)Assistant"<<endl<<endl;
			cin>>c;

			while(c!='1'&&c!='2'&&c!='3'&&c!='4') {
				cout<<endl<<endl<<"Invalid input, try again."<<endl<<endl;
				cout<<endl<<endl<<"Which staff member do you want to remove?"<<endl<<endl<<"(1)Specialized Doctor (2)Physician (3)Nurse (4)Assistant"<<endl<<endl;
				cin>>c;
			}

			int x;

			switch(c) {
				case '1':
					showspecialty();
					cout<<endl<<endl<<"Enter ID of Specialized Doctor to discharge: "<<endl<<endl;
					cin>>x;
					break;

				case '2':
					showphysicians();
					cout<<endl<<endl<<"Enter ID of Physician to discharge: "<<endl<<endl;
					cin>>x;
					break;

				case '3':
					shownurses();
					cout<<endl<<endl<<"Enter ID of Nurse to discharge: "<<endl<<endl;
					cin>>x;
					break;

				case '4':
					showassistants();
					cout<<endl<<endl<<"Enter ID of Assistant to discharge: "<<endl<<endl;
					cin>>x;
			}

			x=findSindex(x);

			for(int n=x; n<pcount-1; n++) {
				hospitalstaff[n]=hospitalstaff[n+1];
			}

			scount--;
		}

		void newpatient() {
			if(!PIsFull()) {
				patients[pcount].get();
				pcount++;
			} else {
				patient* dummy;
				dummy=new patient[pcount];

				for(int i=0; i<pcount; i++) {
					dummy[i]=patients[i];
				}

				delete hospitalstaff;
				patients = new patient[scount+1];

				for(int i=0; i<pcount; i++) {
					patients[i]=dummy[i];
				}

				patients[pcount].get();
				delete dummy;
				pcount++;
				parrcount++;
			}
		}

		void removepatient() {
			showpatients();
			int x;
			cout<<endl<<endl<<"Enter ID of Patient Record to remove: ";
			cin>>x;
			x=findPindex(x);

			for(int n=x; n<pcount-1; n++) {
				patients[n]=patients[n+1];
			}

			pcount--;
		}

	public:

		hospital(string n = "",int p=0,int s=0):name(n),pcount(p),scount(s) {
			int c=0;
			parrcount=pcount;
			sarrcount=scount;
			cout<<endl<<endl<<"///////////////PATIENT DATA///////////////"<<endl<<endl;
			patients=new patient[p];

			for(int i=0; i<p; i++) {
				patients[i].get();
			}

			cout<<endl<<endl<<"///////////////STAFF DATA///////////////"<<endl<<endl;
			hospitalstaff=new Staff*[s];

			for(int i=0; i<s; i++) {
				char c;
				cout<<endl<<endl<<"What category of staff is this person?"<<endl<<endl<<"(1)Specialized Doctor (2)Physician (3)Nurse (4)Assistant"<<endl<<endl;
				cin>>c;

				while(c!='1'&&c!='2'&&c!='3'&&c!='4') {
					cout<<endl<<endl<<"Invalid input, try again."<<endl<<endl;
					cout<<endl<<endl<<"What category of staff is this person?"<<endl<<endl<<"(1)Specialized Doctor (2)Physician (3)Nurse (4)Assistant"<<endl<<endl;
					cin>>c;
				}

				switch(c) {
					case '1':
						hospitalstaff[i]=new SpecializedDoctor;
						break;

					case '2':
						hospitalstaff[i]=new Physician;
						break;

					case '3':
						hospitalstaff[i]=new Nurse;
						break;

					case '4':
						hospitalstaff[i]=new Assistant;
				}

				hospitalstaff[i]->get();
			}
		}

		string getname() {
			return name;
		}

		void setname(string n) {
			name = n;
		}

		void show() {
			char c='x';

			while(c!='1'&&c!='2'&&c!='3'&&c!='4'&&c!='5'&&c!='6'&&c!='7') {
				cout<<endl<<endl<<"Please Enter one of the following options."<<endl<<endl;
				cout<<endl<<endl<<"What do you want shown?"<<endl<<endl<<"(1)Patients\t(2)Physicians\t(3)Specialty\t(4)Assistants\t(5)Nurses\t(6)All\n\n(7)Back to Main Menu"<<endl<<endl;
				cin>>c;
			}

			switch(c) {
				case '1':
					showpatients();
					break;

				case '2':
					showphysicians();
					break;

				case '3':
					showspecialty();
					break;

				case '4':
					showassistants();
					break;

				case '5':
					shownurses();
					break;

				case '6':
					showall();
					break;
			}
		}

		void manage() {
			char c;
			cout<<endl<<endl<<"What would you like to manage?\n\nSTAFF:\n1. Add new staff member\n2. Remove staff member\n\nPATIENTS:\n3. Add new patient record\n4. Remove patient record\n\n5.Back to Main Menu"<<endl<<endl;
			cin>>c;

			while(c!='1'&&c!='2'&&c!='3'&&c!='4'&&c!='5') {
				cout<<endl<<endl<<"Please Enter one of the following options."<<endl<<endl;
				cout<<endl<<endl<<"What would you like to manage?\n\nSTAFF:\n1. Add new staff member\n2. Remove staff member\n\nPATIENTS:\n3. Add new patient record\n4. Remove patient record\n\n5.Back to Main Menu"<<endl<<endl;
				cin>>c;
			}

			switch(c) {
				case '1':
					addstaff();
					break;

				case '2':
					removestaff();
					break;

				case '3':
					newpatient();
					break;

				case '4':
					removepatient();
			}
		}

		void intro() {
			cout<<endl<<endl<<"Welcome to "<<name<<"\nProudly serving "<<pcount<<" patients with "<<scount<<" Staff !"<<endl<<endl;
		}

};

int main() {
	string name;
	int p,s;
	cout<<endl<<endl<<"Enter Name of Hospital: "<<endl<<endl;
	getline(cin>>ws,name);
	cout<<endl<<endl<<"(NOTE: You will have to enter data for the upcoming databases)\nHow many patients does it have?"<<endl<<endl;
	cin>>p;
	cout<<endl<<endl<<"How many staff members are there (this includes Nurses, Assistants, Doctors (Specialty and Physicians))"<<endl<<endl;
	cin>>s;
	hospital hsptl(name,p,s);
	cout<<endl<<endl<<"-----------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
	hsptl.intro();
	cout<<endl<<endl<<"-----------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
	char opt;

	do {
		cout<<endl<<endl<<"Please Enter one of the following options."<<endl<<endl;
		cout<<endl<<endl<<"What would you Like to do?"<<endl<<endl<<"1. Show Data\n2. Manage\n3.EXIT"<<endl<<endl;
		cin>>opt;

		if(opt == '1') {
			hsptl.show();
			cout<<endl<<endl<<"Returning to Main Menu."<<endl<<endl;
		} else if(opt == '2') {
			hsptl.manage();
		}
	} while(opt!='3');

	cout<<endl<<endl<<"THANK YOU AND GOODBYE"<<endl<<endl;
	cin.get();
}