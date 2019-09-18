class SQlist {
private:
    typedef char ElemType;
    typedef struct {
        ElemType data[50];
        int length;
    } sqli;
    sqli* li;
public:
    void initList();
};
