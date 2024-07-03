class CartData {
    unsigned long id;
    const char* name;
    unsigned price;
    double weight;
public:
    void get_data(unsigned long& id, unsigned& price, double& weight) {
        id = this->id;
        price = this->price;
        weight = this->weight;
    }

    const char* get_name() {
        return this->name;
    }

    void set_data(unsigned long id, const char* name, unsigned price, double weight) {
        this->id = id;
        this->name = name;
        this->price = price;
        this->weight = weight;
    }
};

int main() {
    CartData item;
    item.set_data(10, "Toy", 2000, 5.45);

    // __ASSERT_TESTS__
    return 0;
}

