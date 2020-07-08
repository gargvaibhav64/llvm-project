// RUN: rm -rf %t
// RUN: %clang_cc1 -fmodules -ast-dump -I%S/Inputs/inherit-attribute -fmodules-cache-path=%t -fimplicit-module-maps -verify %s -fmodules-local-submodule-visibility

#include "b.h"
#include "c.h"

class Foo;

Foo f;
// expected-no-diagnostics
