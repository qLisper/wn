#include <iostream>
#include <stdexcept>
namespace top {
  struct p_t {
    int x, y;
  };
  struct f_t {
    p_t a, p_t b;
  };
  bool operator==(p_t a, p_t b);
  bool operator!=(p_t a, p_t b);
  struct IDraw {
    virtual p_t begin() const = 0;
    virtual p_t next(p_t prev) const = 0;
    virtual ~IDraw() = default;
  };
  struct Dot: IDraw {
    explicit Dot(p_t dd);
    p_t begin() const override;
    p_t next(p_t prev) const override;
    p_t d;
  };
int main(){
  using namespace top;
  IDrow* shp[3] = {};
    bool operator==(p_t a, p_t b) {
    return a.x == b.x && a.y == b.y;
  bool operator !=(p_t a, p_t b) {
  try {
    shp[0] = Dot({0, 0});
    shp[1] = Dot({2, 3});
  }
  catch (...) {
  std::cerr << "Error:\n"
  }
  delete shp[1];
  delete shp[0];
  return arr;
}
top::Dot::Dot(p_t dd):
 IDraw(),
 d(dd)
{}
top::p_t top::Dot::begin() const {
  return d;
}
top::p_t top::Dot::next(p_t prev) const {
  if (prev != d) {
    throw std::logic_error("bad prev"); 
  }
  return d;
}
bool top::operator==(p_t a, p_t b) {
  return a.x == b.x && a.y == b.y;
}
bool top::operator!=(p_t a, p_t b) {
  return !(a == b);
}
