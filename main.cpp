#include<iostream>
#include"reclists.hpp"
#include"solutions.hpp"

void readToCin(std::string input){
    for (char i : input){
        std::cin.putback(i);
    }
}

void test_one(std::string input){
    readToCin(input);
    list p = read_list();
    std::cout << "Echoing the list..." << std::endl;
    write_list(p);
    std::cout << "The number of nodes at the top level of the input list is: "
              << numNodesAtTheTopLevel(p) << std::endl;
}

void test_two(std::string input){
    readToCin(input);
    list p = read_list();
    std::cout << "Echoing the list..." << std::endl;
    write_list(p);
    std::cout << "The input list is a lat? " << (is_lat(p) ? "yes" : "no") << std::endl;
}

void test_three(std::string input, std::string atomInput){
    readToCin(input);
    list p = read_list();
    std::cout << "Echoing the list..." << std::endl;
    write_list(p);
    readToCin(atomInput);
    std::cout << "Echoing the atom..." << std::endl;
    list q = read_list();
    write_list(q);
    std::cout << "Is the atom a member of the input list? " << (member(q, p) ? "yes" : "no") << std::endl;
}

void test_four(std::string input){
    readToCin(input);
    list p = read_list();
    std::cout << "Echoing the list..." << std::endl;
    write_list(p);
    std::cout << "The last element of the input list is: ";
    write_list(last(p));
}

void test_five(std::string input1, std::string input2){
    readToCin(input1);
    list p = read_list();
    std::cout << "Echoing the first list..." << std::endl;
    write_list(p);
    readToCin(input2);
    list q = read_list();
    std::cout << "Echoing the second list..." << std::endl;
    write_list(q);
    std::cout << "The pairing of the two lists is: ";
    write_list(list_pair(p, q));
}

void test_six(std::string input){
    readToCin(input);
    list p = read_list();
    std::cout << "Echoing the list..." << std::endl;
    write_list(p);
    std::cout << "The firsts of the list are: ";
    write_list(firsts(p));
}

void test_seven(std::string input){
    readToCin(input);
    list p = read_list();
    std::cout << "Echoing the list..." << std::endl;
    write_list(p);
    std::cout << "The flattened version of your list is: ";
    write_list(flat(p));
}

void test_eight(std::string input1, std::string input2){
    //readToCin(input1);
    list p = read_list();
    //readToCin(input2);
    list q = read_list();
    std::cout << "Echoing the lists that you entered below." << std::endl;
    write_list(p);
    write_list(q);
    std::cout << "Are the two lists equal: ";
    if (equal(p, q)){
        std::cout << "yes" << std::endl;
    }
    else{
        std::cout << "no" << std::endl;
    }
}

void test_nine(){
    list p = read_list();
    list q = read_list();
    std::cout << "Echoing the lists that you entered below." << std::endl;
    write_list(p);
    write_list(q);
    if (two_the_same(p, q)){
        std::cout << "The two lists contain at least one similar element." << std::endl;
    }
    else{
        std::cout << "The two lists are not the same." << std::endl;
    }
}

int main()
{
    // Test inputs
    std::string is_lat1 = "(a b c d e f)",
                is_lat2 = "(a b () d e f)",
                list_pair = "(a b c d e f)",
                firsts1 = "((a b c) (d e f) (g h i))",
                firsts2 = "((a b c) (d e f) (g h i))",
                flat1 = "( ( ( ) () ) ( ( ) ) )",
                flat2 = "( (b) (c d) (e (f (g))) (h i))",
                equal1 = "(((a b) (c d) (e (f (g))) (h i)) ((a b) (c d) (e (f (g))) (h i)))",
                equal2 = "(((a b) (c d) (e (f (g))) (h i)) ((a b) (c d) (e (f (g))) (h x)))",
                intersection1 = "()",
                intersection2 = "(a b c)",
                intersection3 = "(a b c d)",
                intersection4 = "(e f g h)",
                intersection5 = "(e f a)",
                list_union1 = "()",
                list_union2 = "(a b c)",
                list_union3 = "(a b c d)",
                list_union4 = "(e f g h)",
                list_union5 = "(e f a)",
                member1 = "(((a b) (c d) (e (f (g))) (h i)) ((a b) (c d) (e (f (g))) (h i)))",
                member2 = "(((b) (c d) (e (f (g))) (h i)) ((b) (c d) (e (f (g))) (h i)))",
                member_member = "a",
                num_nodes = "(a b c d e f g h i j k l m n o p q r s t u v w x y z)",
                last1 = "(a b c d e f g h i j k l m n (o p (q r (s))) (((t (u (v)) w))) (x y) z)";
    // Tests
    /* WHY THE FUCK IS THE LIST INPUT SO POORLY MADE. RUNNING UNIT TESTS LIKE THIS IS JUST WRONG.
    test_one(num_nodes);
    test_two(is_lat1);
    test_two(is_lat2);
    test_three(member1, member_member); // TODO: fix this
    test_three(member2, member_member); // TODO: fix this
    test_four(last1);
    test_five(list_pair, list_pair);
    test_six(firsts1);
    test_six(firsts2);
    test_seven(flat1); // TODO: fix this
    test_seven(flat2); // TODO: fix this
    test_eight(equal1, equal1);
    test_eight(equal1, equal2);
    test_nine(); // TODO: fix this
     */

    return 0;
}
