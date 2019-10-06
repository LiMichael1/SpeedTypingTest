#include "stdafx.h"
#include "results.h"


results::results()
{
	WPM = 0;
	WPM_pre_test = 0;
	WPM_post_test = 0;
	mins = 0;
}

results::results(int _WPM, int _mins)
{
	WPM = _WPM;
	mins = _mins;
}

int results::update_WPM(int new_WPM, int new_mins)
{
		WPM = ((WPM * mins)+WPM)/(mins+new_mins);
		mins += new_mins;
		return WPM;
}

results::~results()
{
}
