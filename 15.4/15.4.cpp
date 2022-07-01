#include <iostream>
void chetprinter(int n, bool chet)
{
    if (chet)
        for (int i = 0; i <= n; i += 2)
            std::cout << i << " ";
    else
        for (int i = 1; i <= n; i += 2)
            std::cout << i << " ";
}

int main()
{
    const int n = 13;
    std::cout << "Using 'for'\n";
    for (int i = 0; i <= n; i+=2)
        std::cout << i << " ";
    std::cout << "\nUsing functions\n";
    chetprinter(n, true);
    std::cout << "\n";
    chetprinter(n, false);
}