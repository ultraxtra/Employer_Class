#include<iostream>

using namespace std;

class Employer {
public:
	virtual void Print() = 0;
	virtual ~Employer() = default;
};

class President :virtual  public Employer {
	void Print()override {
		cout << "I am president\n" << endl;
	 }
	~President() = default;
};

class Manager : virtual public Employer{
	void Print() override{
		cout << "I am manager\n" << endl;
	}
	~Manager() = default;
};

class Worker : virtual public Employer {
	void Print()override {
		cout << "I am worker\n" << endl;
	}
	~Worker() = default;
};

int main() {
	Employer* emp[3];

	emp[0] = new President;
	emp[1] = new Manager;
	emp[2] = new Worker;

	for (size_t i = 0; i < 3; i++)
	{
		emp[i]->Print();
	}

}