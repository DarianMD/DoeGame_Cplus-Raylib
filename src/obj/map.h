#include <string>
#include <raylib.h>
#include "../lib/tileson.hpp"


class Map{
    tson::Map map;
    Texture2D map_tex;
    tson::Tileset *map_tileset;
    
public:
    Vector2 player_init_pos;
    Map(std::string file);

    void draw();
};