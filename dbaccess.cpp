#include "dbobject.cpp"
#include "ainteger.cpp"
#include <list>

class DbAccess {

    std::list<DbObject> db = std::list<DbObject>();
    AtomicInteger atomicInteger = AtomicInteger();

    public: DbObject add(DbObject object) {
        object.setId(atomicInteger.getAndIncrement());
        db.push_back(object);
        return object;
    }

};
