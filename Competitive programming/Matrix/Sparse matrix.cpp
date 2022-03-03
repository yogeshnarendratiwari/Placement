#include<iostream>
using namespace std;

struct Element
{
    int i;
    int j;
    int x;
};

struct Sparse_Matrix{

     int n;
     int m;
     int total_x;
    struct Element *e;

};

void create(Sparse_Matrix *s){
    cin>>s->n>>s->m;
    cin>>s->total_x;
    s->e = new Element[s->total_x];
    for(int i=0 ; i<s->total_x ; i++){
        cin>>s->e[i].i>>s->e[i].j>>s->e[i].x;
    }
}

void display(Sparse_Matrix *s){
    for (int i = 0; i < s->total_x; i++)
    {
        cout<<s->e[i].i<<s->e[i].j<<s->e[i].x;
    }
    
}

int main(){
    Sparse_Matrix s;
    create(&s);
    display(&s);
}