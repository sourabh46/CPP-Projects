class Teddy
{
private:
    char *name;
    int age;
    char *color;
    unsigned int energy;
public:
    void SetTeddy(char *name, int age, char *color, int energy);
    void Eat(int n);
    void Sick(int n);
    void Describe();
};
