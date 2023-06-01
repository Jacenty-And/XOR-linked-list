struct Node
{
    int val;
    Node* Xor;
    Node(int val);
};
class List
{
    Node *beg, *prev, *act, *next, *end;

public:
    List();

    void INPUT();

    int ACTUAL();
    int NEXT();
    int PREV();

    void ADD_BEG(int val);
    void ADD_END(int val);
    void ADD_ACT(int val);

    void DEL_BEG();
    void DEL_END();
    void DEL_VAL(int val);
    void DEL_ACT();

    void PRINT_FORWARD();
    void PRINT_BACKWARD();
};