#include "loadmap.h"

void loadmap(vector < vector <char> >& map) {
	ifstream game_map("map/mapbe.txt");
	if (game_map.is_open()) {
		ifor(i, map_height) {
			ifor(j, map_width) {
				game_map >> map[i][j];
			}
		}
	}
	game_map.close();
}
