#ifndef IMC_UTILS_H_INCLUDED_
#define IMC_UTILS_H_INCLUDED_

#include <string>
#include <vector>

namespace Utils {

static void split(const std::string& str, std::vector<std::string>& tokens,
				  const std::string& delimiters = ";")
{
	using std::string;

	tokens.clear();

	size_t lastPos = str.find_first_not_of(delimiters, 0);
	size_t pos = str.find_first_of(delimiters, lastPos);

	while (string::npos != pos || string::npos != lastPos) {
		tokens.push_back(str.substr(lastPos, pos - lastPos));

		lastPos = str.find_first_not_of(delimiters, pos);
		pos = str.find_first_of(delimiters, lastPos);
	}
}

template <typename T>
static void clear(T& ptr)
{
	if (ptr) {
		delete ptr;
		ptr = nullptr;
	}
}

} // namespace Utils

#endif