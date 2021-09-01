#include <iostream>

class Database{
    private:
        Database(const std::string v) : valor(v) { }
        static Database* db;
        std::string valor;
    public:
        static Database *getInstance(const std::string& v);

        std::string getValor() const{
           return valor;
        } 
};

Database* Database::db = nullptr;

Database *Database::getInstance(const std::string& valor)
{
    if(db == nullptr){
        db = new Database(valor);
    }
    return db;
}

int main()
{
    Database* database = Database::getInstance("BAR");
    std::cout << database->getValor() << "\n";

    Database* datab = Database::getInstance("Hola");
    std::cout << datab->getValor() << "\n";

    return 0;
}