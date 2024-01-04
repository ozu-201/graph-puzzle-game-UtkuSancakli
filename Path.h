//
// Created by us029467 on 12/21/2023.
//

#ifndef GRAPH_PUZZLE_GAME_UTKUSANCAKLI_PATH_H
#define GRAPH_PUZZLE_GAME_UTKUSANCAKLI_PATH_H


class Path {
private:
    int distance;
public:
    int previous;
    Path(int distance, int previous);
    Path() = default;
    int getDistance() const;
    void setDistance(int _distance);
    void setPrevious(int _previous);
};

#endif //GRAPH_PUZZLE_GAME_UTKUSANCAKLI_PATH_H
