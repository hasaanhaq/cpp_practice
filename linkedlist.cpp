// #include <iostream>
// using namespace std;



// class Node{

// public:
//     int data;
//     Node* next;

//     Node(int val) : data(val), next(nullptr){}



// };

// class linkedList{

//     private:
//         Node* head;

//     public:
//         linkedList() : head(nullptr){}

//         void insert(int val){
//             Node* newNode = new Node(val);

//             if(!head){
//                 head = newNode;
//                 return;
//             }

//             Node* temp = head;

//             while(temp->next){
//                 temp = temp->next;
//             }

//             temp->next = newNode;
//         }


//         void display(){
//             Node* temp = head;
//             while(temp){
//                 cout << temp->data << " -> ";
//                 temp = temp->next;
//             }

//             cout << "NULL" << endl;
//         }

//         ~linkedList(){
//             Node* temp;

//             while(head){
//                 temp = head;
//                 head = head->next;
//                 delete temp;
//             }
//         }


    







// };


// int main(){

//     linkedList list;

    
//     list.insert(10);
//     list.insert(20);
//     list.insert(30);
//     list.insert(40);

//     cout << "Linked List after the insertions: ";
//     list.display();


// }


#include <iostream>
#include <string>

int main(){
    std::string name;
    std::cout << "Enter you name";
    std::cin>>name;
    std::cout << "Hello, " << name << '!' << std::endl;
    return 0;
}