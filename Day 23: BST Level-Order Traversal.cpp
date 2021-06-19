#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;

class Node{
  public:
    int data;
    Node *left;
    Node *right;
    Node(int d){
      data = d;
      left = NULL;
      right = NULL;
    }
};
class Solution{
  public:
    Node* insert(Node* root, int data){
      if (root == NULL) {
        return new Node(data);
      }
      else {
        Node* cur;
        if (data <= root->data) {
          cur = insert(root->left, data);
          root->left = cur;
        }
        else {
          cur = insert(root->right, data);
          root->right = cur;
        }
        return root;
      }
    }
    
    void levelOrder(Node * root){
      //Write your code here
    queue<Node*> q;
    if(root != NULL) {
        // enqueue current root
        q.push(root);
        
        // while there are nodes to process
        while( q.size() != 0 ) {
            // dequeue next node
            Node* temp = q.front();
            q.pop();
            
            cout<<temp->data<<" ";
            
            // enqueue child elements from next level in order
            if( temp->left) {
                q.push(temp->left);
            }
            if( temp->right ) {
                q.push(temp->right);
            }
        }
    } 
} 
};  //End of Solution

int main()
{
  Solution myTree;
  Node* root = NULL;
  int t;
  int data;
  
  cin >> t;
  
  while (t-- > 0)
  {
    cin >> data;
    root = myTree.insert(root, data);
  }
  myTree.levelOrder(root);
  
  return 0;
}
