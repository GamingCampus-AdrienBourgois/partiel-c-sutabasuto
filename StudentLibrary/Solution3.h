#pragma once

#include <string>
#include <vector>

#include "StudentConfiguration.h"

#ifdef COMPILE_EXERCICE_3

class Solution3 
{
public:
	void SetWords(const std::vector<std::string>& _words);
	void SortWords();
	std::vector<std::string> GetSortedWords() const;

private:
	std::vector<std::string> words;
};

#endif
