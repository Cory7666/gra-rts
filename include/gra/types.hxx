#ifndef GRATYPES_HXX
#   define GRATYPES_HXX

namespace gra
{

using id_t = unsigned long long int; 
using coords_t = int;
using points_t = int;

struct Point
{
    coords_t x, y;
};

struct Range
{
    points_t min, max;

    constexpr bool isInRange (points_t x) const
    { return ((min <= x) && (x <= max)); }
};

}

#endif // !GRATYPES_HXX
