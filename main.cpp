#include <iostream>

inline void throw_despite_noexcept_declaration() noexcept
{
    throw std::exception{};
}

int main()
{
    std::cout << "Hello, World!" << std::endl;
    throw_despite_noexcept_declaration();
    std::cout << "You'll Never be here!" << std::endl;
    return 0;
}