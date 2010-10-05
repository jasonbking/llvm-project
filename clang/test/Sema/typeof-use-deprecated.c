// RUN: %clang_cc1 %s -verify -fsyntax-only

struct s { int a; } __attribute__((deprecated)) x;  // expected-warning {{'s' is deprecated}}

typeof(x) y;  // expected-warning {{'s' is deprecated}}

union un{ int a; } __attribute__((deprecated)) u;  // expected-warning {{'un' is deprecated}}

typeof(     u) z; // expected-warning {{'un' is deprecated}}

enum E{ one} __attribute__((deprecated))  e; // expected-warning {{'E' is deprecated}} 

typeof( e) w; // expected-warning {{'E' is deprecated}}
