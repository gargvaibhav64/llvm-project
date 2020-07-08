#include "a.h"

class Foo;

void bar() {
  &Foo::step;
}

class B {
public:
  B();
};
