#include <stdio.h>
#include <stdlib.h>

    typedef struct node{
        int number;
        struct node *left;
        struct node *right;
    }node;


int main(void){

    node *tree = NULL;
    node *n = malloc(sizeof(node));
    if(n == NULL){
        return 1;
    }
        n->number = 2;
        n->left = NULL;
        n->right = NULL;
        tree = n;

        n = malloc(sizeof(node));
        if(n == NULL){
            return 1;
        }

    n->number =1;
    n->left = NULL;
    n->right = NULL;
    tree->left = n;
    n = malloc(sizeof(node));
    if(n == NULL){
        return 1;
    }

n->number = 3;
n->left = NULL;
n->right =NULL;
tree->right = n;


    // print_tree(tree);
    // print_tree(tree->left);
    // print_tree(tree->right);

}

void print_tree(node* root){
    if(root == NULL){
        return;
    }
    print_tree(root->right);
    printf("%i\n", root->number);
    print_tree(root->left);
    free(root);

}


int search(node* tree, int number){
    if(tree == NULL){
        printf("not found\n");
        return 1;
    }
    else if(number < tree->number){
        printf("go left\n");
        return search(tree->left, number);
    }
    else if(number > tree->number){
    printf("go right\n");
    return search(tree->right, number);
    }
    else {
        printf("found\n");
        return 0;
    }
}