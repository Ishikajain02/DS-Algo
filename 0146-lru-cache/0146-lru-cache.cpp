class LRUCache {
public:

  class node{
      public:
      int key;
      int val;
      node* next;
      node* prev;
      node(int _key , int _val){
          key = _key;
          val = _val;
      }

  };
  node* head = new node(-1,-1);
  node* tail = new node(-1,-1);
  unordered_map<int,node*>mp;
  int size=0;
    LRUCache(int capacity) {
        size = capacity;
        head->next=tail;
        tail->prev=head; 
    }
    void deletenode(node * t){
        node* temp= t->prev;
        node* n = t->next;
        temp->next= n;
        n->prev = temp;
    }

    void addnode(node * temp){
        node * t= head->next;
        head->next = temp;
        temp->next = t;
        temp->prev = head;
        t->prev = temp;
    }
    int get(int key) {
        
        if(mp.find(key)!=mp.end()){
            node *rem = mp[key];
            
            int v = rem->val;
          //  node * r = new node(key , v );
           mp.erase(key);
            deletenode(rem);
            
            addnode(rem);
            mp[key]= head->next;
            return v;
        }
        return -1;
    }
    
    void put(int key, int value) {
        node* n= new node(key,value);
        if(mp.find(key)!=mp.end()){
            node* d = mp[key];
             mp.erase(key);
            deletenode(d);
           // addnode(n);
           
            //mp
        }
        if(mp.size()==size){
            mp.erase(tail->prev->key);
            deletenode(tail->prev);
            
        }
        addnode(n);
      //  mp.insert({key,n});
    
    mp[key] = n;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
 