#define CATCH_CONFIG_MAIN
#include "lib/catch.hpp"
#include "dbobject.cpp"
#include "dbaccess.cpp"

SCENARIO("Item removal") {

    GIVEN("A db with an object") {
        DbAccess db = DbAccess();
        DbObject o = DbObject("");
        o = db.add(o); 
    
        CHECK_NOTHROW(db.find(0));

        WHEN("Item is removed") {
            CHECK_NOTHROW(db.remove(o.getId()));

            THEN("Item is not findable") {
                CHECK_THROWS(db.find(0));
            }
        }
    } 
}