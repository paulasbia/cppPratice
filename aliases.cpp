#include <iostream>
#include <cstdint>

using std::cout;

using point_t = uint32_t;
using rank_t = uint64_t;

struct score {
    point_t points{};
    rank_t rank{};
};

int main(){
    score s {1, 10};
    //s.points = 1;
    //s.rank = 10;
    cout << "points: " << s.points << " rank: " << s.rank << std::endl;
}