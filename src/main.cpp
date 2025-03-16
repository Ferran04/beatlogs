//
// Created by ferra on 22/10/2024.
//
#include <iostream>
#include <CLI/CLI.hpp>

int main(int argc, char** argv) {
    CLI::App app{"Example CLI Program"};

    int count = 1;
    std::string name;
    bool verbose = false;

    app.add_option("-n,--name", name, "User name")->required();
    app.add_option("-c,--count", count, "Number of times to print");
    app.add_flag("-v,--verbose", verbose, "Enable verbose output");

    CLI11_PARSE(app, argc, argv);

    for (int i = 0; i < count; ++i) {
        std::cout << "Hello, " << name << "!" << (verbose ? " [Verbose Mode]" : "") << std::endl;
    }

    return 0;
}
