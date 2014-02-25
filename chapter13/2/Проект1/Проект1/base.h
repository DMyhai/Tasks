// base class
class Cd { // represents a CD disk
private:
	char *performers;
	char *label;
	int selections; // number of selections
	double playtime; // playing time in minutes
public:
	Cd(char * s1, char * s2, int n, double x);
	Cd(const Cd & d);
	Cd();
	virtual ~Cd();
	void Report() const; // reports all CD data
	Cd & operator=(const Cd & d);
};

class Classic : public Cd{
private:
	char* producer;
public:
	Classic(char*s3, char* s1, char* s2, int n, double x);
	Classic();
	~Classic();
	void Report() const;
	Classic & operator=(const Classic & d);
};