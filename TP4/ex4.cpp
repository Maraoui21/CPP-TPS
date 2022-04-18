#include<iostream>
using namespace std;
class Note{
private:    
    int value;
public:
    void input();
    void print();
    void set(float num);
    int  get();
    void apprecier();
};

void Note::input(){
    this->value = 0;
    while (this->value==0)
    {
        cout << "ENTRER UNE VALEUR : "<<endl;
        cin >> this->value;
    }
};
void Note::print(){
    cout << this->value<<endl;
};
void Note::set(float num){
    this->value = num;
};
int Note::get(){
    return this->value;
};
void Note::apprecier(){
    if(this->value<12){
        cout << "passable"<<endl;
    }else if(this->value<13){
        cout << "assez Bien"<<endl;
    }else if(this->value<15){
        cout << "Bien"<<endl;
    }else if(this->value<17){
        cout << "Tres Bien"<<endl;
    }
}

void Harmoniser(Note n){
    int value = n.get();
    if(value<8){
        n.set(0);
    }else{
        n.set(8);
    }
}
float Moyenne(Note* n,int nbr){
    float sum=0;
    for(int i=0;i<nbr;i++){
        sum+=n[i].get();
    }
    float Moy = sum/nbr;
    return Moy;
}
float Apprecier(Note* n,int nbr){
    float note = Moyenne(n,nbr);
     if(note<12){
        cout << "passable"<<endl;
    }else if(note<13){
        cout << "assez Bien"<<endl;
    }else if(note<15){
        cout << "Bien"<<endl;
    }else if(note<17){
        cout << "Tres Bien"<<endl;
    }
}

int main(){
    Note tab[2];
    tab[0].input();
    tab[1].input();

    cout << "la moyenne est : " << Moyenne(tab,2)<<endl;
    Apprecier(tab,2);
    // Note n1;
    // n1.input();
    // n1.set(12);
    // n1.print();
    // n1.apprecier();
}