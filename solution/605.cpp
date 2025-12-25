#include <iostream>
using namespace std;

class Child {
public:
//____qcodep____
    Child(int i){
        id = i;
    }
    int getId(){
        return id;
    }
    
private:
  int id;
};

class Circle {
public:
//____qcodep____
    Circle(){
        capacity = 0;
        current = 0;
    }
    void in(Child* child){
        children[capacity++] = child;
        current = capacity-1;
    }
    Child* next(){
        do{
            current = (current+1)%capacity;
        }while(children[current] == NULL);
        return children[current];
    }
    void out(Child* child){
        children[child->getId()-1] = NULL;
    }
    
private:
  int capacity;
  int current;
  Child *children[1001];
};

int main() {
  int n, m, i, j;
  Circle circle;
  Child *child;

  cin >> n >> m;

  for (i = 1; i <= n; i++) {
    child = new Child(i);
    circle.in(child);
  }

  for (i = 1; i < n; i++) {
    for (j = 1; j <= m; j++) {
      child = circle.next();
    }
    circle.out(child);
  }

  child = circle.next();
  cout << child->getId();
  return 0;
}