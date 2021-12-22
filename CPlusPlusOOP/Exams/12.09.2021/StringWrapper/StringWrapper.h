#ifndef STRINGWRAPPER_STRINGWRAPPER_H
#define STRINGWRAPPER_STRINGWRAPPER_H

#include <string>

class StringWrapper {
private:
    std::string content{};

public:
    StringWrapper() = default;

    explicit StringWrapper(std::string content);

    StringWrapper(char ch, int repeat);

    std::string getContent() const;

    void printContent() const;

    StringWrapper& append(std::string const& text);
};

#endif //STRINGWRAPPER_STRINGWRAPPER_H
