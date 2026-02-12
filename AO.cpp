#include <bits/stdc++.h>
using namespace std;

struct Node {
    bool isAND;                  
    bool isLeaf;                 
    bool value;                  
    vector<Node*> children;

    Node(bool andNode = false) {
        isAND = andNode;
        isLeaf = false;
        value = false;
    }

    
    Node(bool leafValue, bool dummy) {
        isLeaf = true;
        value = leafValue;
    }
};


bool andOrSearch(Node* node) {
    // Base case: leaf node
    if (node->isLeaf)
        return node->value;

    if (node->isAND) {
        
        for (auto child : node->children) {
            if (!andOrSearch(child))
                return false;
        }
        return true;
    } else {
        
        for (auto child : node->children) {
            if (andOrSearch(child))
                return true;
        }
        return false;
    }
}
int main() {
  
    Node* L1 = new Node(true, true);   
    Node* L2 = new Node(false, true);  
    Node* L3 = new Node(true, true);   

    
    Node* OR1 = new Node(false);
    OR1->children = {L1, L2};

  
    Node* AND1 = new Node(true);
    AND1->children = {OR1, L3};

    bool result = andOrSearch(AND1);

    cout << (result ? "SUCCESS" : "FAILURE") << endl;
    return 0;
}
