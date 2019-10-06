#include "progress.hpp"

Progess::Progress()
{
  _completed_words = 0;
  _possible_words = 0;
  _completion_percentage = 0.00;
}

Progress::Progress(int completed_words, int possible_words)
{
  _completed_words = completed_words;
  _possible_words = possible_words;
  _completion_percentage = _completed_words/_possible_words;
}

Progress::~Progress()
{

}

float Progress::update_completed(int more_completed_words)
{
  if(_completed_words + more_completed_words <= _possible_words)
  {
    _completed_words += more_completed_words;
    _completion_percentage = _completed_words/_possible_words;
  }
  else
  {
    throw std::out_of_range("Completed words can't exceed Possible words\n");
  }
  return _completion_percentage;
}
