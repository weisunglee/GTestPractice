#ifndef GTESTPRACTICE_STRINGPRODUCER_H
#define GTESTPRACTICE_STRINGPRODUCER_H

#include <string>

namespace src {

    class StringProducer {
    public:
        StringProducer() = default;
        StringProducer(std::string s);

        void SetString(std::string s);
        std::string Echo() const;
        std::string Double() const;


    private:
        std::string str;
    };

}// namespace src

#endif//GTESTPRACTICE_STRINGPRODUCER_H
