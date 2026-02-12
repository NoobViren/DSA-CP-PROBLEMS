#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node * left;
    Node * right;
    Node * parent;
    Node(int v){
        val = v;
        left = nullptr;
        right = nullptr;
        parent = nullptr;
    }
};

Node * FindMinL(Node * node){
    while(node && node->left){
        node = node->left;
    }
    return node;
}
Node * FindMaxR(Node * node){
    while(node && node->right){
        node = node->right;
    }
    return node;
}
Node* Successor(Node * target){
    if(!target) return nullptr;
    Node * y;
    if(target->right){
        return FindMinL(target->right);
    }
    else{
         y = target->parent;
        while(y!=nullptr && target == y->right){
            target = y;
            y = y->parent;
        }
        
    }
    return y;
}

Node * Predecessor(Node * target){
      if(!target) return nullptr;
      Node * y;
      if(target->left!=nullptr){
          return FindMaxR(target->left);
      }
      
      else{
        y = target->parent;
        while(y && target==y->left){
            target = y;
            y = y->parent;
        }
      }
      return y;
}

void insert(Node *&root, int x) {
    Node *node = new Node(x);
    Node *parent = nullptr;
    Node *curr = root;

    while (curr) {
        parent = curr;
        if (x >= curr->val) {
            curr = curr->right;
        } else {
            curr = curr->left;
        }
    }

    node->parent = parent;

    if (!parent) {
        
        root = node;
    } else if (x >= parent->val) {
        parent->right = node;
    } else {
        parent->left = node;
    }
}
Node* search(Node* root, int key) {
    if (!root || root->val == key) return root;
    if (key < root->val) return search(root->left, key);
    return search(root->right, key);
}
int main() {
    Node *root = nullptr;

    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter " << n << " values: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        insert(root, x);
    }

    int x;
    cout << "Enter a value to find its successor and predecessor: ";
    cin >> x;

    Node* node = search(root, x);
    if (!node) {
        cout << x << " not found in the tree.\n";
    } else {
        Node *s = Successor(node);
        Node *p = Predecessor(node);

        if (s) cout << "Successor of " << x << " is " << s->val << "\n";
        else cout << x << " has no successor\n";

        if (p) cout << "Predecessor of " << x << " is " << p->val << "\n";
        else cout << x << " has no predecessor\n";
    }

    return 0;
}
