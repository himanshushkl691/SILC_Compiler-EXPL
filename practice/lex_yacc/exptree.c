tnode *makeLeafNode(int n)
{
    tnode *temp;
    temp = (tnode *)malloc(sizeof(tnode));
    temp->op = NULL;
    temp->val = n;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct tnode* makeOperatorNode(char c,tnode *l,tnode *r){
    tnode *temp;
    temp = (tnode *)malloc(sizeof(tnode));
    temp->op = malloc(sizeof(char));
    *(temp->op) = c;
    temp->left = l;
    temp->right = r;
    return temp;
}

int evaluate(tnode *root){
    if(root->op == NULL) return root->val;
    else{
        switch (*(root->op))
        {
        case '+' :
            return evaluate(root->left) + evaluate(root->right);
            break;
        case '-' :
            return evaluate(root->left) - evaluate(root->right);
            break;
        case '*' :
            return evaluate(root->left) * evaluate(root->right);
            break;
        case '/' :
            return evaluate(root->left) / evaluate(root->right);
            break;
        }
    }
}