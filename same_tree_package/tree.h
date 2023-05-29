#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

class Tree{
    class Node{
        public:
            friend class Tree;
            Node() {data = -1; left = NULL; right = NULL;}
            Node(const int x, Node* left, Node* right) : data(x), left(left), right(right) {}

        protected:
            int data;
            Node* left;
            Node* right;
    };
public:

    Tree() {
        mRoot = NULL;
        mSize = 0;
    }

    ~Tree() {
        clear(mRoot);
    }

    void clear(Node*& r) {
        if (!r) return;
        clear(r->left);
        clear(r->right);
        delete r;
    }

    void insert(int x) {
        insertAt(mRoot, x);
    }
    bool isSameBinaryTree(Tree& t) {
        // Insert your code here
        bool s = true;
        return isSameData(mRoot,t.mRoot,s);
    }

    bool isSameData(Node *s,Node *o,bool& same){
        if (s->data == o->data){
            if (s->left != NULL && o->left != NULL) same = isSameData(s->left,o->left,same)&&same;
            else if (s->left!=NULL || o->left!=NULL) return false;
            if (s->right!=NULL && o->right!=NULL) same = isSameData(s->right,o->right,same)&&same;
            else if (s->right!=NULL || o->right!=NULL) return false;

        }else return false;
        return same;
    }
    // You can also put your code here

protected:
    void insertAt(Node*& r, int x) {
        if (!r) {
           r = new Node(x, NULL, NULL);
           mSize++;
           return;
        }
        if (r->data == x) return; // Do nothing
        if (x < r->data) insertAt(r->left, x); else
        insertAt(r->right, x);
    }
    Node* mRoot;
    int mSize;

};

#endif // TREE_H_INCLUDED
