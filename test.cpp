#include <string>

class TestRun {
public:
	TestRun() = default;
	TestRun(const TestRun&) = delete;
	TestRun(std::string name);
	virtual ~TestRun();

	void DoSomething();
	int Calculate(int a, double d);
	
	enum class State {Active, Suspended};
	
// Accessible to this class and derived classes
protected:
	virtual void Initialize();
	virtual void Suspend();
	State GetState();

// Accessible to this class only
private:
	State _state { State::Suspended };
	std::string _testName{""};
	int _index{0};

	static int _instances;
};

int TestRun::_instances{0};

class CanInit {
	long num {7};
	int k = 9;
    static int i;
public:
	CanInit() {}
	CanInit(int val) : num(val) {}
};

int CanInit::i = 20;
