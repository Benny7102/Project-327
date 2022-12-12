#ifndef mc_H
#define mc_H

class mc:
{
    private:
    int health;
    int damage;
    int treasure;
    int gold;
    public:
    mc();
    mc(int, int);
    void remove_health(int);
    void add_health(int);
    void add_damage(int);
    void remove_damage(int);
    void add_treasure(int);
    void remove_gold(int);
    void add_gold(int);
    void winner();
    void showstatus();
};

#endif