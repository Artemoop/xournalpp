#include "XojColor.h"

#include <utility>

XojColor::XojColor(Color color, std::string name): color(color), name(std::move(name)) {}

XojColor::~XojColor() = default;

auto XojColor::getColor() const -> Color { return this->color; }

auto XojColor::getName() -> std::string { return this->name; }
