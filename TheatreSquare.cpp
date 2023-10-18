#include <iostream>

int main()
{
    long long n, m, a;
    std::cin >> n >> m >> a;

    long long length_flagstones = (n + a - 1) / a;
    long long width_flagstones = (m + a - 1) / a;

    long long total_flagstones = length_flagstones * width_flagstones;

    std::cout << total_flagstones << std::endl;

    return 0;
}
