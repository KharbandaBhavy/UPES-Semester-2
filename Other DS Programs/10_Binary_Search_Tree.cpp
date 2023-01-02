#include<stdio.h>
#include<stdlib.h>

struct BST
{
    int data;
    struct BST *root;
    struct BST *left;
    struct BST *right;
    struct BST *node;
    struct BST *value;
};


struct BST *inordersuccessor(struct BST *node)
{
    while(node->left!= NULL)
    {
        node=node->left;
    }
    return node;
}


//Function for creation of a node for the binary tree
struct BST *new1(int value)
{
    struct BST *new1= (struct BST *)malloc(sizeof(struct BST));
    new1->data=value;
    new1->left=NULL;
    new1->right=NULL;
    return new1;
}


//Function for Insertion in the binary tree
struct BST *insert(struct BST *root, int value)
{
    if(root==NULL)
        root = new1(value);
    else if(root->data > value)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);
    
    return root;
}


//Function for deletion of the element from the binary tree
struct BST *deletenode(struct BST *root, int key)
{
    if(root==NULL)
        return root;
    if(root->data > key)
        root-> left = deletenode(root->left, key);
    else if(root->data < key)
        root->right = deletenode(root->right, key);
    else
        if(root->left == NULL)
        {
            struct BST *temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right ==NULL)
        {
            struct BST *temp = root->left;
            free(root);
            return temp;
        }
        struct BST *successor = inordersuccessor(root->right);
        root->data = successor->data;
        root->right = deletenode(root->right, successor->data);
        return root;
}


//For determining the height of the binary tree
int height(struct BST *root)
{
    if(root==NULL)
        return 0;
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return leftHeight > rightHeight? leftHeight + 1 : rightHeight + 1;    
}


//Functions for Getting the order of Binary tree
void inorder(struct BST *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf(" %d", root->data);
        inorder(root->right);
    }
}


//Function for preorder
void preorder(struct BST *root)
{
    if(root!=NULL)
    {
        printf(" %d", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}


//Function for postorder
void postorder(struct BST *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf(" %d", root->data);
    }
}


//For searching in a binary tree
struct BST *search(struct BST *root, int key)
{
    struct BST *node;
    while(root->data!=key)
    {
        if(root!=NULL)
        {
            printf("%d", root->data);
            if(root->data >key)
            {
                node = node->left;
            }
            else
            {
                node=node->right;
            }
            if(node==NULL)
            return NULL;
        }
    }
}



int main()
{
    int n, r, s, key, del, sea;
    struct BST *root;
    printf("\n Enter the root of the binary tree:");
    scanf("%d", &r);
    root = insert(NULL, r);
    printf("\n Enter the number of nodes you want to add:");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
    printf("\n Enter the value of nodes:");
    scanf("%d", &s);
    root = insert(root, s);
    }

    int choice;
    while(1)
	{
		printf("\n Enter the choice:");
        printf("\n 1.Insertion in the binary tree. \n 2.Searching in the binary tree");
		printf("\n 3.Preorder of binary tree. \n 4.Postorder of binary tree.");
    	printf("\n 5.Inorder of the binary tree. \n 6.Height of the binary tree.");
    	printf("\n 7.Deletion of a node from the tree. \n 8.Quit\n");
		scanf("%d",&choice);
		switch(choice)
		{
            case 1:
                printf("\n Enter the value to add:");
                scanf("%d", &s);
                insert(root, s);
                break;
            case 2:
                printf("\n Enter the element to search:");
                scanf("%d", &key);
                search(root, key);
                break;

            case 3:
                printf("\n Preorder of the binary tree is:");
                preorder(root);
                break;

            case 4:
                printf("\n Postorder of the binary tree is:");
                postorder(root);
                break;

            case 5:
                printf("\n Inorder of the binary tree is:");
                inorder(root);
                break;

            case 6:
                printf("\n Height of the binary tree:");
                sea = height(root);
                printf("%d", sea);
                break;

            case 7:
                printf("\n Enter the node to delete:");
                scanf("%d", &del);
                deletenode(root, del);
                break;

            default:
                exit(1);
        }
    }    
    
}