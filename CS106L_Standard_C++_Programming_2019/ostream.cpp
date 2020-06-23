# include <sstream> // for stringstream
# include <iostream> // for cout

using namespace std;

int main() {
    // create a 'ostringstream' class with string parameter
    ostringstream oss("I want a caffe");
    // position starts at the end
    ostringstream oss("I want a caffe",stringstream::ate);
    // str() method output the string in the entire buffer
    cout<<oss.str()<<endl;

    // the position started in the front, overwriting the buffer!!!
    oss<<16.9<<" Stars ";
    cout<<oss.str()<<endl;
    // always take care the 'pointer' position
    return 0;
}