#pragma once
//need something to keep track of the time. 
class Progress
{

  Progress();
  Progress(int completed_words, int possible_words);
  ~Progress();
  float update_completed(int more_completed_words);
  int update_time();// need Timer class?
private:
  float _completion_percentage;
  int _completed_words;
  int _possible_words;

};
