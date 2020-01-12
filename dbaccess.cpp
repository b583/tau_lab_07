#ifndef DB_ACCESS
#define DB_ACCESS

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

    public: DbObject find(int id) {
        std::list<DbObject>::iterator it = db.begin();
        for (it; it != db.end(); ++it){
            if(it->getId() == id) {
                return *it;
            }
        }
        throw -1;
    }

};

#endif