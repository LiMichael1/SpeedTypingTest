#pragma once
class results
{
public:
	results();
	results(int WPM, int mins);
	~results();
	int update_WPM(int new_WPM, int minutes);
private:
	int WPM;
	int WPM_post_test;
	int WPM_pre_test;
	int mins;
};
