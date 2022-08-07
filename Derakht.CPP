#include <iostream.h>
#include <conio.h>
class Node {
public:
    int Data;
    Node* left;
    Node* right;
    Node()
    {
      Data = -1;
      left = NULL;
      right = NULL;
    }

};
class Tree {
public:
     Node* root;
     void AddNode(int Data);
     void InOrder(Node* n);
     void PreOrder(Node* n);
     void PostOrder(Node* n);
private:
     void AddNode(int Data, Node* temp);
};

void Tree::AddNode(int Data) {
     
     if ( root == NULL ) {
        cout << "Ezafe Kardane Rishe " << Data << endl;
        Node* n = new Node();
        n->Data = Data;
    root = n;
     }
     else {
    cout << "Ezafe Kardane Gereh  " << Data << endl;
    AddNode(Data, root);
    }
}
void Tree::AddNode(int Data, Node* temp) {
    if ( Data <= temp->Data ) {
       if ( temp->left != NULL )
      AddNode(Data, temp->left);
       else {
      Node* n = new Node();
      n->Data = Data;
      temp->left = n;
       }
    }
    else {
       if ( temp->right != NULL )
      AddNode(Data, temp->right);
       else {
      Node* n = new Node();
      n->Data = Data ;
      temp->right = n;
       }
    }
}

void Tree::InOrder(Node* n) {
    if ( n ) {
       InOrder(n->left);
       cout << n->Data << " ";
       InOrder(n->right);
    }
}

void Tree::PreOrder(Node* n) {
    if ( n ) {
       cout << n->Data << " ";
       PreOrder(n->left);
       PreOrder(n->right);
    }
}

void Tree::PostOrder(Node* n) {
    if ( n ) {
       PostOrder(n->left);
       PostOrder(n->right);
       cout << n->Data << " ";
    }
}

int main() {
   clrscr();
   Tree* tree = new Tree();
   tree->AddNode(30);
   tree->AddNode(10);
   tree->AddNode(20);
   tree->AddNode(40);
   tree->AddNode(50);

   cout << "In order " << endl;
   tree->InOrder(tree->root);
   cout << endl;

   cout << "Pre order " << endl;
   tree->PreOrder(tree->root);
   cout << endl;

   cout << "Post order " << endl;
   tree->PostOrder(tree->root);
   cout << endl;
   getch();
   return 0;
}