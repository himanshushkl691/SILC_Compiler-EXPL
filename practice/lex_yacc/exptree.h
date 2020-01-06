typedef struct tnode{
    int val;
    char *op;
    struct tnode * left,*right;
}tnode;

/*Make a leaf node and set value of integer field*/
tnode* makeLeafNode(int);
/*Make a node with operator and set left and right child of it*/
tnode* makeOperatorNode(char c,tnode *l,tnode *r);
/*Evaluate final expression tree provided root*/
int evaluate(tnode *root);