#include <iostream>
#include <math.h>
using namespace std;

class treeNode{
public:
    int d;
    treeNode* esquerda;
    treeNode* direita;
    treeNode(){
        d=0;
        direita = 0;
        esquerda =0;
         }
};

class tree{
    public:
    treeNode* raiz;
    void inserir(treeNode*, int);
    void preOrdem(treeNode*);
    void posOrdem(treeNode*);
    void emOrdem (treeNode*);
    tree(){raiz=0;}
};

void tree::inserir(treeNode* noh, int x){
    if(noh==0){
        treeNode* novoNoh = new treeNode();
        novoNoh->d = x;
        raiz = novoNoh;
    }
    else{
        if(x > noh->d){
            if(noh->direita==0){
                treeNode* novoNoh = new treeNode();
                novoNoh->d=x;
                noh->direita = novoNoh;
            }
            else{
                inserir(noh->direita, x);
            }
        }
        else{
            if(noh->esquerda==0){
                treeNode* novoNoh = new treeNode();
                novoNoh->d=x;
                noh->esquerda = novoNoh;
            }
            else{
                inserir(noh->esquerda, x);
            }
        }


    }

}

void tree::preOrdem(treeNode* noh){
    if(noh != 0){
        cout <<" "<<noh->d;
        preOrdem(noh->esquerda);
        preOrdem(noh->direita);
    }
}
void tree::posOrdem(treeNode* noh){
    if(noh != 0){
        posOrdem(noh->esquerda);
        posOrdem(noh->direita);
        cout <<" "<<noh->d;
    }
}

void tree::emOrdem(treeNode* noh){
    if(noh != 0){
        emOrdem(noh->esquerda);
        cout <<" "<<noh->d;
        emOrdem(noh->direita);
    }
}
int main(){
tree arvore;
int c, n, N, casos =1;
cin >> c;

while(c>0){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> N;
        arvore.inserir(arvore.raiz, N);

    }
    cout <<"Case " <<casos<<":"<<endl;
    cout << "Pre.:"; arvore.preOrdem(arvore.raiz); cout<<endl;
    cout << "In..:"; arvore.emOrdem(arvore.raiz); cout<<endl;
    cout << "Post:"; arvore.posOrdem(arvore.raiz); cout<<endl;
    casos++;
    cout <<endl;
    arvore.raiz=0;
    c--;

}

    return 0;
}
