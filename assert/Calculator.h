#ifndef GTESTPRACTICE_CALCULATOR_H
#define GTESTPRACTICE_CALCULATOR_H

namespace assert {
    template<typename T>
    class Calculator {
    public:
        static T Add(T t1, T t2);
        static T Minus(T t1, T t2);
        static T Multiply(T t1, T t2);
        static T Divide(T t1, T t2);
    };
}// namespace assert

#endif//GTESTPRACTICE_CALCULATOR_H
