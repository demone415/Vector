#include "Vector.cpp"



int main() {

    Vector one;
    Vector two(1,1,1);
    Vector three(3,3,3);

    cout << "one: ";
    one.println();

    cout << "two: ";
    two.println();

    cout << "three: ";
    three.println();

    Vector sum;
    sum = two + three;
    sum.println();
    sum.setX(99);
    sum.println();

    /* evaluating dot_product */
    cout << "dot_product" << endl;
    two.println();
    three.println();
    int dot_product = two * three;
    cout << dot_product << endl;


    /* evaluating vector length */
    double len = two.getLength();
    cout << len;




    return 0;
}