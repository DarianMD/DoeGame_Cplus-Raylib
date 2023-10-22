#include <iostream>
#include <cmath>
#include <map.h>

Map::Map(std::string file){

    tson::Tileson t;
    std::unique_ptr<tson::Map> map = t.parse(fs::path(file));

    
    if(map->getStatus() == tson::ParseStatus::OK){
        for(auto &tileset : map->getTilesets()){
            map_tex = LoadTexture(fs::path("../map/" + tileset.getImage().string()).c_str());
            map_tileset = &tileset;
        }

        auto objs = map->getLayer("objects");

        

        


    }
    
}