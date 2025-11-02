#pragma once

namespace a1 {

template <typename T>
class Singleton
{
public:
    static T& getInstance()
    {
        // IMPLEMENT
        return *reinterpret_cast<T*>(reinterpret_cast<void*>(0)); // IMPLEMENT
    }

    // IMPLEMENT: Mention required constructors
private:
    Singleton() = default;
    ~Singleton() = default;
};

}
