#include "StringProducer.h"

namespace src {
    StringProducer::StringProducer(std::string s)
        : str(std::move(s))

    {

    }

    void StringProducer::SetString(std::string s) {
        str = std::move(s);
    }

    std::string StringProducer::Echo() const {
        return str;
    }

    std::string StringProducer::Double() const {
        return str + str;
    }

}// namespace src