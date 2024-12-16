#include <iostream>
#include <libxml>
//include <boost/property_tree/ptree.hpp>

using namespace std;


int main(){ 

    ptree pt;

    read_xml("", pt);

    BOOST_FOREACH(ptree::value_tyoe & child, pt.get_child(""))

 
    

      
    return 0;
}