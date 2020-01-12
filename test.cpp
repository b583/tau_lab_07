#define CATCH_CONFIG_MAIN
#include "lib/catch.hpp"
#include "ainteger.cpp"
#include "dbobject.cpp"

TEST_CASE("Atomic Integer works") {
    AtomicInteger atomicInteger = AtomicInteger();
    REQUIRE( atomicInteger.getAndIncrement() == 0 );
    REQUIRE( atomicInteger.getAndIncrement() == 1 );
    REQUIRE( atomicInteger.getAndIncrement() == 2 );
}

TEST_CASE("Db Object works") {
    DbObject dbObject = DbObject("My object");
    REQUIRE( dbObject.getName() == "My object" );
    REQUIRE( dbObject.getId() == -1 );
    dbObject.setId(12);
    REQUIRE( dbObject.getId() == 12 );
    CHECK_THROWS(dbObject.setId(13));
    // TODO set id, check id, verify that id cant be set again
}