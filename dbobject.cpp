#ifndef DB_OBJECT
#define DB_OBJECT

#include <string>

class DbObject {
    int id = -1;
    bool isIdSet = false;
    std::string name;

    public: DbObject(std::string name) {
        this->name = name;
    }

    public: int getId() {
        return id;
    }

    public: void setId(int id) {
        if(!isIdSet) {
            isIdSet = true;
            this->id = id;
        } else {
            throw -1;
        }
    }

    public: std::string getName() {
        return name;
    }

    public: void setName(std::string name) {
        this->name = name;
    }
    
};

#endif