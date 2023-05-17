#pragma once
#include<iostream>
#include<cstdio>
#include<sstream>
#include<algorithm>
#define pow2(n) (1 << (n))
using namespace std;

class arbol {
    int fila;
    int columna;
};




struct avl  {
    int d;
    struct avl* l;
    struct avl* r;
}*r;
class avl_tree : public arbol {
public:
    int height(avl*);
    int difference(avl*);
    avl* rr_rotat(avl*);
    avl* ll_rotat(avl*);
    avl* lr_rotat(avl*);
    avl* rl_rotat(avl*);
    avl* balance(avl*);
    avl* insert(avl*, int);
    void show(avl*, int);
    void inorder(avl*);
    void preorder(avl*);
    void postorder(avl*);
    avl_tree() {
        r = NULL;
    }
};
int avl_tree::height(avl* t) {
    int h = 0;
    if (t != NULL) {
        int l_height = height(t->l);
        int r_height = height(t->r);
        int max_height = max(l_height, r_height);
        h = max_height + 1;
    }
    return h;
}
int avl_tree::difference(avl* t) {
    int l_height = height(t->l);
    int r_height = height(t->r);
    int b_factor = l_height - r_height;
    return b_factor;
}
avl* avl_tree::rr_rotat(avl* parent) {
    avl* t;
    t = parent->r;
    parent->r = t->l;
    t->l = parent;
    cout << "Right-Right Rotation";
    return t;
}
avl* avl_tree::ll_rotat(avl* parent) {
    avl* t;
    t = parent->l;
    parent->l = t->r;
    t->r = parent;
    cout << "Left-Left Rotation";
    return t;
}
avl* avl_tree::lr_rotat(avl* parent) {
    avl* t;
    t = parent->l;
    parent->l = rr_rotat(t);
    cout << "Left-Right Rotation";
    return ll_rotat(parent);
}
avl* avl_tree::rl_rotat(avl* parent) {
    avl* t;
    t = parent->r;
    parent->r = ll_rotat(t);
    cout << "Right-Left Rotation";
    return rr_rotat(parent);
}
avl* avl_tree::balance(avl* t) {
    int bal_factor = difference(t);
    if (bal_factor > 1) {
        if (difference(t->l) > 0)
            t = ll_rotat(t);
        else
            t = lr_rotat(t);
    }
    else if (bal_factor < -1) {
        if (difference(t->r) > 0)
            t = rl_rotat(t);
        else
            t = rr_rotat(t);
    }
    return t;
}
avl* avl_tree::insert(avl* r, int v) {
    if (r == NULL) {
        r = new avl;
        r->d = v;
        r->l = NULL;
        r->r = NULL;
        return r;
    }
    else if (v < r->d) {
        r->l = insert(r->l, v);
        r = balance(r);
    }
    else if (v >= r->d) {
        r->r = insert(r->r, v);
        r = balance(r);
    } return r;
}
void avl_tree::show(avl* p, int l) {
    int i;
    if (p != NULL) {
        show(p->r, l + 1);
        cout << " ";
        if (p == r)
            cout << "Root -> ";
        for (i = 0; i < l && p != r; i++)
            cout << " ";
        cout << p->d;
        show(p->l, l + 1);
    }
}
void avl_tree::inorder(avl* t) {
    if (t == NULL)
        return;
    inorder(t->l);
    cout << t->d << " ";
    inorder(t->r);
}

struct s//node declaration
{
    int k;
    s* lch;
    s* rch;
};
class SplayTree : public arbol
{
public:
    s* RR_Rotate(s* k2)
    {
        s* k1 = k2->lch;
        k2->lch = k1->rch;
        k1->rch = k2;
        return k1;
    }
    s* LL_Rotate(s* k2)
    {
        s* k1 = k2->rch;
        k2->rch = k1->lch;
        k1->lch = k2;
        return k1;
    }
    s* Splay(int key, s* root)
    {
        if (!root)
            return NULL;
        s header;
        header.lch = header.rch = NULL;
        s* LeftTreeMax = &header;
        s* RightTreeMin = &header;
        while (1)
        {
            if (key < root->k)
            {
                if (!root->lch)
                    break;
                if (key < root->lch->k)
                {
                    root = RR_Rotate(root);
                    if (!root->lch)
                        break;
                }
                RightTreeMin->lch = root;
                RightTreeMin = RightTreeMin->lch;
                root = root->lch;
                RightTreeMin->lch = NULL;
            }
            else if (key > root->k)
            {
                if (!root->rch)
                    break;
                if (key > root->rch->k)
                {
                    root = LL_Rotate(root);
                    if (!root->rch)
                        break;
                }
                LeftTreeMax->rch = root;
                LeftTreeMax = LeftTreeMax->rch;
                root = root->rch;
                LeftTreeMax->rch = NULL;
            }
            else
                break;
        }
        LeftTreeMax->rch = root->lch;
        RightTreeMin->lch = root->rch;
        root->lch = header.rch;
        root->rch = header.lch;
        return root;
    }
    s* New_Node(int key)
    {
        s* p_node = new s;
        if (!p_node)
        {
            fprintf(stderr, "Out of memory!\n");
            exit(1);
        }
        p_node->k = key;
        p_node->lch = p_node->rch = NULL;
        return p_node;
    }
    s* Insert(int key, s* root)
    {
        static s* p_node = NULL;
        if (!p_node)
            p_node = New_Node(key);
        else
            p_node->k = key;
        if (!root)
        {
            root = p_node;
            p_node = NULL;
            return root;
        }
        root = Splay(key, root);
        if (key < root->k)
        {
            p_node->lch = root->lch;
            p_node->rch = root;
            root->lch = NULL;
            root = p_node;
        }
        else if (key > root->k)
        {
            p_node->rch = root->rch;
            p_node->lch = root;
            root->rch = NULL;
            root = p_node;
        }
        else
            return root;
        p_node = NULL;
        return root;
    }
    s* Delete(int key, s* root)//delete node
    {
        s* temp;
        if (!root)//if tree is empty
            return NULL;
        root = Splay(key, root);
        if (key != root->k)//if tree has one item
            return root;
        else
        {
            if (!root->lch)
            {
                temp = root;
                root = root->rch;
            }
            else
            {
                temp = root;
                root = Splay(key, root->lch);
                root->rch = temp->rch;
            }
            free(temp);
            return root;
        }
    }
    s* Search(int key, s* root)//seraching
    {
        return Splay(key, root);
    }
    void InOrder(s* root)//inorder traversal
    {
        if (root)
        {
            InOrder(root->lch);
            cout << "key: " << root->k;
            if (root->lch)
                cout << " | left child: " << root->lch->k;
            if (root->rch)
                cout << " | right child: " << root->rch->k;
            cout << "\n";
            InOrder(root->rch);
        }
    }
};


class BinarioOrdenado : public arbol {
private:
    struct Node {
        int value;
        Node* left;
        Node* right;

        Node(int val) : value(val), left(nullptr), right(nullptr) {}
    };

    Node* root;

    Node* insertNode(Node* node, int value) {
        if (node == nullptr) {
            node = new Node(value);
        }
        else if (value < node->value) {
            node->left = insertNode(node->left, value);
        }
        else if (value > node->value) {
            node->right = insertNode(node->right, value);
        }
        return node;
    }

    bool searchNode(Node* node, int value) const {
        if (node == nullptr) {
            return false;
        }
        else if (value == node->value) {
            return true;
        }
        else if (value < node->value) {
            return searchNode(node->left, value);
        }
        else {
            return searchNode(node->right, value);
        }
    }

    void inorderTraversal(Node* node) const {
        if (node != nullptr) {
            inorderTraversal(node->left);
            std::cout << node->value << " ";
            inorderTraversal(node->right);
        }
    }

};

class Heap : public arbol{
public:
    int* arr;
    int tamano;
    int tamanoMaximo;

    Heap(int tamanoMaximo) {
        this->tamanoMaximo = tamanoMaximo;
        this->tamano = 0;
        arr = new int[tamanoMaximo];
    }

    void heapify(int i) {
        int izq = 2 * i + 1;
        int der = 2 * i + 2;
        int mayor = i;
        if (izq < tamano && arr[izq] > arr[mayor]) {
            mayor = izq;
        }
        if (der < tamano && arr[der] > arr[mayor]) {
            mayor = der;
        }
        if (mayor != i) {
            swap(arr[i], arr[mayor]);
            heapify(mayor);
        }
    }

    void insertar(int val) {
        if (tamano == tamanoMaximo) {
            cout << "Error: Heap lleno" << endl;
            return;
        }
        arr[tamano] = val;
        int i = tamano;
        tamano++;
        while (i > 0 && arr[(i - 1) / 2] < arr[i]) {
            swap(arr[(i - 1) / 2], arr[i]);
            i = (i - 1) / 2;
        }
    }

    void eliminar() {
        if (tamano == 0) {
            return;
        }
        arr[0] = arr[tamano - 1];
        tamano--;
        heapify(0);
    }

    void imprimir() {
        int nivel = 0;
        int nodosNivel = 1;
        for (int i = 0; i < tamano; i++) {
            if (i == nodosNivel) {
                cout << endl;
                nivel++;
                nodosNivel += (1 << nivel);
            }
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


class Espantapajaros : public arbol {
public:
    int fila;
    int columna;

    void cobertura(int x, int j) {

    }
};