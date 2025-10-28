#pragma once
#include <iostream>
#include "lqr_controller.hpp"

struct UPacket {
float T_wl;
float T_wr;
float T_bl;
float T_br;
};

struct XPacket {
    float s;
    float ds;
    float phi;
    float dphi;
    float theta_ll;
    float dtheta_ll;
    float theta_lr;
    float dtheta_lr;
    float theta_b;
    float dtheta_b;
};


namespace Device{

    class Leg{
    private:
        Eigen::Matrix<float, 4, 1> u_;
        Eigen::Matrix<float, 4, 10> K_;
        Eigen::Matrix<float, 10, 1> x_;

    private:
        
    public:
        Leg();
        Eigen::Matrix<float, 4, 1> LQR ();
        void get_x (Eigen::Matrix<float, 10, 1> x);
    };


}//namespace Leg