#include<iostream>
#include"reclists.hpp"
#include"solutions.hpp"

void readToCin(std::string input){
    for (char i : input){
        std::cin.putback(i);
    }
}

void test_one(){
    list p = read_list();
    std::cout << "Echoing the list..." << std::endl;
    write_list(p);
    std::cout << "The number of nodes at the top level of the input list is: "
              << numNodesAtTheTopLevel(p) << std::endl;
}

void test_two(){
    list p = read_list();
    std::cout << "Echoing the list..." << std::endl;
    write_list(p);
    std::cout << "The input list is a lat? " << (is_lat(p) ? "yes" : "no") << std::endl;
}

void test_three(){
    list p = read_list();
    std::cout << "Echoing the list..." << std::endl;
    write_list(p);
    std::cout << "Echoing the atom..." << std::endl;
    list q = read_list();
    write_list(q);
    std::cout << "Is the atom a member of the input list? " << (member(q, p) ? "yes" : "no") << std::endl;
}

void test_four(){
    list p = read_list();
    std::cout << "Echoing the list..." << std::endl;
    write_list(p);
    std::cout << "The last element of the input list is: ";
    write_list(last(p));
}

void test_five(){
    list p = read_list();
    std::cout << "Echoing the first list..." << std::endl;
    write_list(p);
    list q = read_list();
    std::cout << "Echoing the second list..." << std::endl;
    write_list(q);
    std::cout << "The pairing of the two lists is: ";
    write_list(list_pair(p, q));
}

void test_six(){
    list p = read_list();
    std::cout << "Echoing the list..." << std::endl;
    write_list(p);
    std::cout << "The firsts of the list are: ";
    write_list(firsts(p));
}

void test_seven(){
    list p = read_list();
    std::cout << "Echoing the list..." << std::endl;
    write_list(p);
    std::cout << "The flattened version of your list is: ";
    write_list(flat(p));
}

void test_eight(){
    list p = read_list();
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

void test_ten(){
    //total rev
    list p = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(p);
    std::cout << "The total reverse of the list is: ";
    write_list(total_reverse(p));
}

void test_eleven(){
    //shape
    list p = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(p);
    std::cout << "The shape of the list is: ";
    write_list(shape(p));
}

void test_twelve(){
    //intersection
    list p = read_list();
    list q = read_list();
    std::cout << "Echoing the lists that you entered below." << std::endl;
    write_list(p);
    write_list(q);
    std::cout << "The intersection of the two lists is: ";
    write_list(intersection(p, q));
}

void test_thirteen(){
    //union
    list p = read_list();
    list q = read_list();
    std::cout << "Echoing the lists that you entered below." << std::endl;
    write_list(p);
    write_list(q);
    std::cout << "The union of the two lists is: ";
    write_list(list_union(p, q));
}

void test_fourteen(){
    //permute
    list p = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(p);
    std::cout << "The permutations of the list are: ";
    write_list(permute(p));
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
    test_one();       // numNodesAtTheTopLevel
    test_two();       // is_lat
    test_two();
    test_three();     // member
    test_three();
    test_four();      // last
    test_five();      // list_pair
    test_six();       // firsts
    test_seven();     // flat
    test_seven();
    test_eight();     // equal
    test_eight();
    test_nine();      // two_the_same
    test_nine();
    test_nine();
    test_ten();       // total_reverse
    test_eleven();    // shape
    test_twelve();    // intersection
    test_twelve();
    test_twelve();
    test_twelve();
    test_thirteen();  // list_union
    test_thirteen();
    test_thirteen();
    test_thirteen();
    test_thirteen();
    return 0;
}
