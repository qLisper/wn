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
  void append(const IDraw* sh, p_t** ppts, size_t& s) {
    
  }
  f_t frame(const p_t * pts, size_t s) {
    
  }
  char * canvas(f_t fr, char fill) {
    
  }
  void paint(pt p, char * cnv, f_t fr, char fill) {
    
  }
  void flush(std::ostream& os, const char* cnv, f_t fr) {
    
  }
int main(){
  using namespace top;
  int arr = 0;
  IDrow* shp[3] = {};
  p_t = pts = nullptr;
  size_t s = 0;
  try {
    shp[0] = Dot({0, 0});
    shp[1] = Dot({2, 3});
    shp[2] = Dot({-5,-2});
    for (size_t i = 0; i < 3; ++i) {
      append(shp[i], &pts, s);
    }
  f_t fr = frame(pts, s);
  char * cnv = canvas(fr, '_');
  for (size_t i; i < s; ++ i) {
    paint(pts[i], cnv, fr, '#');
  }
  flush(std::cout, cnv, fr);
  delete [] cnv;
  catch (...) {
  std::cerr << "Error:\n"
  }
  delete shp[1];
  delete shp[0];
  delete shp[2];
  return arr;
}
top::f_t top::frame(const p_t* pts, size_t s) {
  int minx = pts[0].x, miny = pts[0].y;
  int maxx = minx, maxy = miny;
  for (size_t i = 0; i < s; ++ i) {
    minx = std::min(minx, pts[i].x);
    miny = std::min(miny, pts[i],y);
    maxx = std::min(maxx, pts[i].x);
    maxy = std::min(maxy, pts[i],y);
  }
  p_t a{minx, min y}, b{maxx,maxy};
  return f_t{a,b};
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
