#include "reclists.hpp"
#include "solutions.hpp"

// As you implement functions in this file, you should add the
// function-prototype to the solutions.hpp. The function-prototypes
// for append and reverse are already in solutions.hpp.


int numNodesAtTheTopLevel(list p) {
    // p is one of
    //    a null list
    //    an atom
    //    a recursive list

    // The function returns the number of nodes at the top-level
    // of p.

    if( is_null(p) )
        return 0;
    if( is_atom(p) )
        return 1;
    return 1 + numNodesAtTheTopLevel(cdr(p));
}

bool is_lat(list p) {
    if( is_null(p) )
        return true;
    if( is_atom(car(p)) )
        return is_lat(cdr(p));
    return false;
}

bool member(list p, list q) {
    if (is_null(q)) {
        return false;
    }
    if (is_atom(car(q))){
        if (eq(p, car(q))){
            return true;
        }
        return member(p, cdr(q));
    }
    return member(p, car(q));
}

list last(list p) {
    if (is_null(cdr(p))){
        if (is_atom(car(p))){
            return car(p);
        }
        return last(car(p));
    }
    return last(cdr(p));
}

list list_pair(list p, list q){
    list t = null();
    if (is_null(cdr(p))){
        if (!is_null(cdr(q))){
            return null();
        }
        return cons(cons(car(p), cons(car(q), null())), null());
    }
    if (is_atom(car(p))){
        t = cons(car(p), cons(car(q), null()));
    }
    return cons(t, list_pair(cdr(p), cdr(q)));
}

list firsts(list p){
    list t = null();
    if (is_null(cdr(p))){
        return cons(car(car(p)), null());
    }
    return cons(car(car(p)), firsts(cdr(p)));
}

list flat(list p){
    if (is_null(p)){
        return null();
    }
    if (is_atom(car(p))){
        return cons(car(p), flat(cdr(p)));
    }
    return flat(car(p));
}

bool two_the_same(list p, list q){
    if (is_null(cdr(p))) {
        return false;
    }
    if (is_atom(car(p))){
        if (is_atom(car(q))){
            if (eq(car(p), car(q))){
                return true;
            }
        }
    }
    return two_the_same(cdr(p), cdr(q)) || two_the_same(car(p), car(q));
}

bool equal(list p, list q){
    if (is_null(p)){if (!is_null(q)){return false;} return true;}
    if (is_null(q)){if (!is_null(p)){return false;} return true;}
    if (is_atom(car(p))){
        if (eq(car(p), car(q))){
            return equal(cdr(p), cdr(q));
        }
        return false;
    }
    return equal(car(p), car(q)) && equal(cdr(p), cdr(q));
}

list total_reverse(list p){

}

list shape(list p){

}

list intersection(list p, list q){

}

list list_union(list p, list q){

}

list permute(list p){

}
