#include <iostream>
using namespace std;

// Node structure for polynomial
struct Node {
    int coeff;
    int exp;
    Node* next;
    
    Node(int c, int e) : coeff(c), exp(e), next(nullptr) {}
};

class Polynomial {
private:
    Node* head;
    
public:
    Polynomial() : head(nullptr) {}
    
    // Insert a term into polynomial
    void insert(int coeff, int exp) {
        Node* newNode = new Node(coeff, exp);
        
        if (!head || exp > head->exp) {
            newNode->next = head;
            head = newNode;
            return;
        }
        
        Node* current = head;
        while (current->next && current->next->exp >= exp) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
    
    // Display polynomial
    void display() {
        Node* current = head;
        while (current) {
            cout << current->coeff << "x^" << current->exp;
            current = current->next;
            if (current) cout << " + ";
        }
        cout << endl;
    }
    
    // Version 1: Add polynomials using a new result polynomial
    static Polynomial add_v1(Polynomial p1, Polynomial p2) {
        Polynomial result;
        Node *ptr1 = p1.head, *ptr2 = p2.head;
        
        while (ptr1 && ptr2) {
            if (ptr1->exp > ptr2->exp) {
                result.insert(ptr1->coeff, ptr1->exp);
                ptr1 = ptr1->next;
            }
            else if (ptr1->exp < ptr2->exp) {
                result.insert(ptr2->coeff, ptr2->exp);
                ptr2 = ptr2->next;
            }
            else {
                int sum = ptr1->coeff + ptr2->coeff;
                if (sum != 0)
                    result.insert(sum, ptr1->exp);
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }
        }
        
        while (ptr1) {
            result.insert(ptr1->coeff, ptr1->exp);
            ptr1 = ptr1->next;
        }
        
        while (ptr2) {
            result.insert(ptr2->coeff, ptr2->exp);
            ptr2 = ptr2->next;
        }
        
        return result;
    }
    
    // Version 2: Add polynomials by modifying the first polynomial
    static void add_v2(Polynomial &p1, Polynomial p2) {
        Node *ptr1 = p1.head, *prev = nullptr;
        Node *ptr2 = p2.head;
        
        while (ptr1 && ptr2) {
            if (ptr1->exp > ptr2->exp) {
                prev = ptr1;
                ptr1 = ptr1->next;
            }
            else if (ptr1->exp < ptr2->exp) {
                Node* newNode = new Node(ptr2->coeff, ptr2->exp);
                if (!prev) {
                    newNode->next = p1.head;
                    p1.head = newNode;
                } else {
                    newNode->next = prev->next;
                    prev->next = newNode;
                }
                prev = newNode;
                ptr2 = ptr2->next;
            }
            else {
                ptr1->coeff += ptr2->coeff;
                if (ptr1->coeff == 0) {
                    if (!prev) {
                        p1.head = ptr1->next;
                        delete ptr1;
                        ptr1 = p1.head;
                    } else {
                        prev->next = ptr1->next;
                        delete ptr1;
                        ptr1 = prev->next;
                    }
                } else {
                    prev = ptr1;
                    ptr1 = ptr1->next;
                }
                ptr2 = ptr2->next;
            }
        }
        
        while (ptr2) {
            Node* newNode = new Node(ptr2->coeff, ptr2->exp);
            if (!prev) {
                newNode->next = p1.head;
                p1.head = newNode;
                prev = newNode;
            } else {
                prev->next = newNode;
                prev = newNode;
            }
            ptr2 = ptr2->next;
        }
    }
};

int main() {
    Polynomial p1, p2;
    
    // First polynomial: 5x^3 + 4x^2 + 2x^0
    p1.insert(5, 3);
    p1.insert(4, 2);
    p1.insert(2, 0);
    
    // Second polynomial: 3x^3 + 2x^2 + x^1 + 1
    p2.insert(3, 3);
    p2.insert(2, 2);
    p2.insert(1, 1);
    p2.insert(1, 0);
    
    cout << "First Polynomial: ";
    p1.display();
    cout << "Second Polynomial: ";
    p2.display();
    
    // Using Version 1
    cout << "Sum (Version 1): ";
    Polynomial sum1 = Polynomial::add_v1(p1, p2);
    sum1.display();
    
    // Using Version 2
    cout << "Sum (Version 2): ";
    Polynomial::add_v2(p1, p2);
    p1.display();
    
    return 0;
}