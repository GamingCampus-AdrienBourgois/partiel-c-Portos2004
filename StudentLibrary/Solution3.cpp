#include "Solution3.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#include <algorithm>
#ifdef COMPILE_EXERCICE_3

bool caseInsensitiveCompare(const std::string& s1, const std::string& s2) {
    return std::lexicographical_compare(
        s1.begin(), s1.end(),
        s2.begin(), s2.end(),
        [](char c1, char c2) { return std::tolower(c1) < std::tolower(c2); }
    );
}

void Solution3::SetWords(const std::vector<std::string>& _words)
{
    words = _words;
}

void Solution3::SortWords()
{
    std::sort(words.begin(), words.end(), caseInsensitiveCompare);
}

std::vector<std::string> Solution3::GetSortedWords() const
{
    return words;
}
#endif
