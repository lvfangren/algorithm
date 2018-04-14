
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Node{
    string name;
    string id;
    int grade;

    int operator < (const Node n) const {
        return grade > n.grade;
    }
};

int main()
{
    int num; cin>>num;
    vector<Node> v;
    while (num--) {
        Node node;
        cin>>node.name>>node.id>>node.grade;
        v.push_back(node);
    }
    sort(v.begin(), v.end());
    int tail = v.size()-1;
    cout<<v[0].name<<" "<<v[0].id<<endl;
    cout<<v[tail].name<<" "<<v[tail].id<<endl;
    return 0;
}
