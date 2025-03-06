#pragma once

#include <array>
#include <vector>
#include <map>

namespace input {

// Obstacle结构体对应JSON中的"obs"数组中的每个对象
struct Obs {
    //std::string pose_coord;
    std::array<double,3> pose;
    double length;
    double width;
    std::array<std::array<double, 2>, 2> speed_profile;

    Obs(const std::array<double, 3>& p, double l, double w, const std::array<std::array<double, 2>, 2>& sp)
        : pose(p), length(l), width(w), speed_profile(sp) {}
};

// FOTConfig结构体对应整个JSON对象
struct InputCom {
    double s0;
    double target_speed;
    std::vector<std::array<double, 2>> wp;
    double lane_width;
    int num_lanes_left;
    int num_lanes_right;
    std::vector<Obs> obs;
    std::array<double,3> pose;
    std::array<double,3> vel;
};

}