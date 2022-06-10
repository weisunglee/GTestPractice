#include "Calculator.h"
#include <exception>

namespace src {
    template<typename T>
    T Calculator<T>::Add(T t1, T t2) {
        return t1 + t2;
    }

    template<typename T>
    T Calculator<T>::Minus(T t1, T t2) {
        return t1 - t2;
    }

    template<typename T>
    T Calculator<T>::Multiply(T t1, T t2) {
        return t1 * t2;
    }

    template<typename T>
    T Calculator<T>::Divide(T t1, T t2) {
        if (t2 == 0) {
            throw std::exception{"Divide by zero"};
        }
        return t1 / t2;
    }

    template class Calculator<int>;
    template class Calculator<double>;
}// namespace src