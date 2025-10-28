#pragma once
#include <controller.hpp>
#include <bits/stl_algo.h>
#include <Eigen/Dense>
#include "types.hpp"

namespace LQR
{
    struct LQRConfig
    {
        Eigen::Matrix<float, 4, 10> K_;
    };

    class LQRController final : public LQRConfig, public Controller
    {
    public:
        fp32 &ref;
        explicit LQRController(const LQRConfig &config, fp32 &ref) : LQRConfig(config), ref(ref) {};
        ~LQRController() override = default;
        void set(fp32 set) override;

    public:
        fp32 Pout = 0.f;
        fp32 Iout = 0.f;
        fp32 Dout = 0.f;
        fp32 err = 0.f;
        fp32 last_err = 0.f;
    };

    class Invert final : public LQRConfig, public Controller
    {
    public:
        explicit Invert(const fp32 dir) : dir(dir) {};
        ~Invert() override = default;
        void set(fp32 set) override;
				fp32 dir;
    };
}  // namespace LQR
