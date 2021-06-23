//
// Created by Lilith on 2021-05-08.
//

#pragma once

#include "render_device_framework.hpp"

#define WIN32_LEAN_AND_MEAN
#include <d3d11.h>
#include <windows.h>

#include <filesystem>
#include <memory>

namespace vex::device {
    class win_d3d11 : public render_device_framework {
    private:
        ID3D11Device *dx_device         = nullptr;
        ID3D11DeviceContext *dx_context = nullptr;
        IDXGISwapChain *dx_swap         = nullptr;
        ID3D11RenderTargetView *dx_rt   = nullptr;
        WNDCLASSEX wc {};

        static std::atomic<std::shared_ptr<win_d3d11>> instance;

        bool is_exiting = false;

        void create_device();
        void shutdown_device();
        void create_rt();
        void screenshot(const std::filesystem::path &output);
        void shutdown_rt();
        void shutdown_impl();

        static ID3DBlob *compile_shader(const std::string &text, const std::string &entry, const std::string &shader_model);

        static LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

    protected:
        void startup() override;

    public:
        HWND hwnd {};

        win_d3d11() = default;

        ~win_d3d11() override {
            shutdown_impl();
        }

        void run() override;
        void shutdown() override {
            shutdown_impl();
        }
        void close() override;

        static std::shared_ptr<win_d3d11> get_instance(bool create = false);
    };
} // namespace vex::device
