#pragma once
#include<iostream>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include <thread>
#include <Windows.h>
#include <stack>

#define pow2(n) (1 << (n))
using namespace std;
using namespace System::Windows::Forms;

float dinero = 99999;

// Frutos por Arbol
int frutosBinario = 0;
int frutosHeap = 0;
int frutosAVL = 0;
int frutosSplay = 0;

class arbol {
public:
    string tipo;
    int fila;
    int columna;
    int cantidadFrutosA = 0;
    int cantidadFrutosVendidos = 0;
    double montoTotal = 0.0;
    int cantidadFrutosPerdidos = 0;
    bool ejecutando;

};




struct avl {
    double d;
    struct avl* l;
    struct avl* r;

};
class avl_tree : public arbol {
public:
    avl* r;
    int height(avl*);
    int difference(avl*);
    avl* rr_rotat(avl*);
    avl* ll_rotat(avl*);
    avl* lr_rotat(avl*);
    avl* rl_rotat(avl*);
    avl* balance(avl*);
    avl* insert(avl*, double);
    void show(avl*, double);
    void inorder(avl*);
    void deleteAllFruits();
    void sumNodes(int cantidad);
    void deleteFruits(int cantidad);
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
    //cout << "Right-Right Rotation";
    return t;
}

avl* avl_tree::ll_rotat(avl* parent) {
    avl* t;
    t = parent->l;
    parent->l = t->r;
    t->r = parent;
    //cout << "Left-Left Rotation";
    return t;
}

avl* avl_tree::lr_rotat(avl* parent) {
    avl* t;
    t = parent->l;
    parent->l = rr_rotat(t);
    //cout << "Left-Right Rotation";
    return ll_rotat(parent);
}

avl* avl_tree::rl_rotat(avl* parent) {
    avl* t;
    t = parent->r;
    parent->r = ll_rotat(t);
    //cout << "Right-Left Rotation";
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

avl* avl_tree::insert(avl* r, double v) {
    if (r == NULL) {
        r = new avl;
        r->d = v;
        r->l = NULL;
        r->r = NULL;
        cantidadFrutosA++;
        frutosAVL++;
        montoTotal += v;
        return r;
    }
    else if (v < r->d) {
        r->l = insert(r->l, v);
        r = balance(r);
    }
    else if (v >= r->d) {
        r->r = insert(r->r, v);
        r = balance(r);
    }
    return r;
}

void avl_tree::show(avl* p, double l) {
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

void avl_tree::deleteAllFruits() {
    r = nullptr;
    cantidadFrutosA = 0;
    frutosAVL = 0;
    montoTotal = 0.0;
}

void avl_tree::sumNodes(int cantidad) {

    int sum = 0;
    int count = 0;

    stack<avl*> nodesStack;
    avl* current = r;

    while (current != nullptr || !nodesStack.empty()) {
        while (current != nullptr) {
            nodesStack.push(current);
            current = current->l;
        }

        current = nodesStack.top();
        nodesStack.pop();

        sum += current->d;
        count++;

        if (count >= cantidad) {
            break;
        }

        current = current->r;
    }

    montoTotal -= sum;
    dinero+=sum;
    cantidadFrutosA -= count;
    frutosAVL -= count;
}

struct s {
    double k;
    s* lch;
    s* rch;
};

class SplayTree : public arbol {
private:
    

public:
    s* root;
    SplayTree() {
        root = nullptr;
    }

    s* RR_Rotate(s* k2) {
        s* k1 = k2->lch;
        k2->lch = k1->rch;
        k1->rch = k2;
        return k1;
    }

    s* LL_Rotate(s* k2) {
        s* k1 = k2->rch;
        k2->rch = k1->lch;
        k1->lch = k2;
        return k1;
    }

    s* Splay(double key, s* root) {
        if (!root)
            return nullptr;
        s header;
        header.lch = header.rch = nullptr;
        s* LeftTreeMax = &header;
        s* RightTreeMin = &header;
        while (1) {
            if (key < root->k) {
                if (!root->lch)
                    break;
                if (key < root->lch->k) {
                    root = RR_Rotate(root);
                    if (!root->lch)
                        break;
                }
                RightTreeMin->lch = root;
                RightTreeMin = RightTreeMin->lch;
                root = root->lch;
                RightTreeMin->lch = nullptr;
            }
            else if (key > root->k) {
                if (!root->rch)
                    break;
                if (key > root->rch->k) {
                    root = LL_Rotate(root);
                    if (!root->rch)
                        break;
                }
                LeftTreeMax->rch = root;
                LeftTreeMax = LeftTreeMax->rch;
                root = root->rch;
                LeftTreeMax->rch = nullptr;
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

    s* New_Node(double key) {
        s* p_node = new s;
        if (!p_node) {
            fprintf(stderr, "Out of memory!\n");
            exit(1);
        }
        p_node->k = key;
        p_node->lch = p_node->rch = nullptr;
        return p_node;
    }

    s* Insert(double key) {
        cantidadFrutosA++;
        frutosSplay++;
        montoTotal += key;
        static s* p_node = nullptr;
        if (!p_node)
            p_node = New_Node(key);
        else
            p_node->k = key;
        if (!root) {
            root = p_node;
            p_node = nullptr;
            return root;
        }
        root = Splay(key, root);
        if (key < root->k) {
            p_node->lch = root->lch;
            p_node->rch = root;
            root->lch = nullptr;
            root = p_node;
        }
        else if (key > root->k) {
            p_node->rch = root->rch;
            p_node->lch = root;
            root->rch = nullptr;
            root = p_node;
        }
        else
            return root;
        p_node = nullptr;
        return root;
    }

    s* Delete(double key) {
        s* temp;
        if (!root)
            return nullptr;
        root = Splay(key, root);
        if (key != root->k)
            return root;
        else {
            if (!root->lch) {
                temp = root;
                root = root->rch;
            }
            else {
                temp = root;
                root = Splay(key, root->lch);
                root->rch = temp->rch;
            }
            free(temp);
            return root;
        }
    }

    s* Search(double key) {
        return Splay(key, root);
    }
    void InOrder(s* root) {
        if (root) {
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
    void deleteAllFruits(SplayTree* splayTree) {
        splayTree->root = nullptr;
        cantidadFrutosA = 0;
        frutosSplay = 0;
        montoTotal = 0.0;
    }

    void deleteFruits(SplayTree* splayTree, int cantidad) {

        splayTree->InOrder(splayTree->root);
        int count = 0;
        splayTree->Delete(cantidad);
        cantidadFrutosA -= cantidad;
        frutosSplay -= cantidad;
        for (int i = 0; i < cantidad; i++) {
            montoTotal -= splayTree->root->k;
            if (montoTotal < 0) {
				montoTotal = 0;
			}
            dinero += splayTree->root->k;
            splayTree->Delete(splayTree->root->k);
        }
    }
};
struct Node {
    double value;
    Node* left;
    Node* right;

    Node(double val) : value(val), left(nullptr), right(nullptr) {}
};

class BinarioOrdenado : public arbol {
public:
    BinarioOrdenado() {
        root = nullptr;
    }

    Node* root;

    Node* insertNode(Node* node, double value) {
        if (node == nullptr) {
            node = new Node(value);
            if (root == nullptr) {
                root = node; // Actualizar el puntero root al insertar el primer nodo
            }
            cantidadFrutosA++;
            frutosBinario++;
            montoTotal += value;
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

    void deleteAllFruits() {
        cantidadFrutosA = 0;
        montoTotal = 0;
        root = nullptr;
    }

    void deleteFruits(int count) {
        if (count >= cantidadFrutosA) {
            // Eliminar todos los nodos del árbol
            deleteSubtree(root);
            cantidadFrutosA = 0;
            montoTotal = 0;
            //frutosBinario = 0;
            cantidadFrutosVendidos += count;
            dinero += montoTotal;
        }
        else {
            // Eliminar 'count' nodos del árbol
            for (int i = 0; i < count; i++) {
                deleteNode();
            }
            cantidadFrutosA -= count;
            cantidadFrutosVendidos += count;
            dinero += montoTotal;
        }
    }

    void deleteNode() {
        if (root == nullptr) {
            return;
        }

        Node* parent = nullptr;
        Node* current = root;
        while (current->left != nullptr) {
            parent = current;
            current = current->left;
        }

        if (parent == nullptr) {
            root = current->right;
        }
        else {
            parent->left = current->right;
        }

        frutosBinario--;
        montoTotal -= current->value;
        if (montoTotal < 0) {
            montoTotal = 0;
        }

        delete current;
    }

    void deleteSubtree(Node* node) {
        if (node == nullptr) {
            return;
        }

        std::stack<Node*> stack;
        Node* current = node;
        Node* lastVisited = nullptr;

        while (!stack.empty() || current != nullptr) {
            if (current != nullptr) {
                stack.push(current);
                current = current->left;
            }
            else {
                Node* top = stack.top();

                if (top->right != nullptr && lastVisited != top->right) {
                    current = top->right;
                }
                else {
                    // Visitar el nodo actual
                    frutosBinario--;
                    montoTotal -= top->value;
                    if (montoTotal < 0) {
                        montoTotal = 0;
                    }
                    delete top;

                    stack.pop();
                    lastVisited = top;
                }
            }
        }

        root = nullptr;
    }

};

class Heap : public arbol {
public:
    double* arr;
    int tamano;
    int tamanoMaximo;

    Heap(int tamanoMaximo) {
        this->tamanoMaximo = tamanoMaximo;
        this->tamano = 0;
        arr = new double[tamanoMaximo];
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
            std::swap(arr[i], arr[mayor]);
            heapify(mayor);
        }
    }

    void insertar(double val) {
        if (tamano == tamanoMaximo) {
            std::cout << "Error: Heap lleno" << std::endl;
            return;
        }
        arr[tamano] = val;
        int i = tamano;
        tamano++;
        cantidadFrutosA++;
        frutosHeap++;
        montoTotal += val;
        while (i > 0 && arr[(i - 1) / 2] < arr[i]) {
            std::swap(arr[(i - 1) / 2], arr[i]);
            i = (i - 1) / 2;
        }
    }

    void eliminar() {
        if (tamano == 0) {
            return;
        }
        cantidadFrutosA--;
        frutosHeap--;
        montoTotal -= arr[0];
        if (montoTotal < 0) {
			montoTotal = 0;
		}
        dinero+= arr[0];
        arr[0] = arr[tamano - 1];
        tamano--;
        heapify(0);
    }

    void imprimir() {
        int nivel = 0;
        int nodosNivel = 1;
        for (int i = 0; i < tamano; i++) {
            if (i == nodosNivel) {
                std::cout << std::endl;
                nivel++;
                nodosNivel += (1 << nivel);
            }
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
    void deleteAllFruits(Heap* heap) {
        heap->tamano = 0;
        cantidadFrutosA = 0;
        frutosHeap = 0;
        montoTotal = 0.0;
    }

    void deleteFruits(Heap* heap, int cantidad) {
        if (cantidad >= heap->tamano) {
            deleteAllFruits(heap);
            return;
        }

        for (int i = 0; i < cantidad; i++) {
            heap->montoTotal -= heap->arr[i];
            frutosHeap--;
        }

        heap->tamano -= cantidad;

        for (int i = cantidad; i < heap->tamano; i++) {
            heap->arr[i - cantidad] = heap->arr[i];
        }
    }
};


class Espantapajaros : public arbol {
public:
    int fila;
    int columna;

    void cobertura(int x, int j) {

    }
};


