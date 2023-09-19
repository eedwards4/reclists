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
    if (is_null(cdr(q))) {
        return false;
    }
    if (is_atom(car(q))) {
        if (eq(p, car(q))) {
            return true;
        }
    }
    return member(p, cdr(q)) || member(p, car(q));
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

list append (list p, list q){
    if(is_null(p))
        return q;

    return cons(car(p), append(cdr(p), q));
}

list total_reverse(list p){
    if (is_null(p)){
        return null();
    }
    if (is_atom(p)){
        return p;
    }
    return append(total_reverse(cdr(p)), cons(total_reverse(car(p)), null()));
}

list shape(list p){
    if (is_null(p)){
        return null();
    }
    if (is_atom(car(p))){
        return shape(cdr(p));
    }
    return cons(shape(car(p)),shape(cdr(p)));
}

list intersection(list p, list q){
    if (is_null(p) || is_null(q)){
        return null();
    }
    if (member( car(p), cdr(q))){
        return cons( car(p), intersection(cdr(p), q) );
    }
    return intersection(cdr(p), q);
}

list list_union(list p, list q){
    if (is_null(p)){
        return q;
    }
    if (is_null(q)){
        return p;
    }
    if (member(car(p), q)){
        return list_union(cdr(p), q);
    }
    return cons(car(p), list_union(cdr(p), q));
}

list pFromPointer(list p){

}

list pFromStart(list p){

}

list permute(list p){
    if (is_null(p)){
        return null();
    }
    for (int i = 0; i < numNodesAtTheTopLevel(p); i++){
        if (is_atom(car(p))){
            return cons(car(p), permute(cdr(p)));
        }
    }
    // Start one pointer -> null
    // Start 2nd pointer -> first pointer
}
