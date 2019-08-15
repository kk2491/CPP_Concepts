#ifndef HEADER_SPEAK
#define HEADER_SPEAK

class Speak {
public:
	Speak();
	Speak(int);
	~Speak();

	void SaySomething();

private:
	int i_;
	int GetI();
};

#endif