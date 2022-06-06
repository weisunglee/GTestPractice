#include "Calculator.h"

namespace assert {
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
        return t1 / t2;
    }

    template class Calculator<int>;
    template class Calculator<double>;
}// namespace assert