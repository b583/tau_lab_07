#define CATCH_CONFIG_MAIN
#include "lib/catch.hpp"
#include "ainteger.cpp"

TEST_CASE("Atomic Integer works") {
    AtomicInteger atomicInteger = AtomicInteger();
    REQUIRE( atomicInteger.getAndIncrement() == 0 );
    REQUIRE( atomicInteger.getAndIncrement() == 1 );
    REQUIRE( atomicInteger.getAndIncrement() == 2 );
}