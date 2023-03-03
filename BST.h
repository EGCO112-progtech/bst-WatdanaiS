// An integer binary search tree

struct TreeNode {                                           
    struct TreeNode *leftPtr; // pointer to left subtree
   int data; // node value                               
    struct TreeNode *rightPtr; // pointer to right subtree
}; // end structure treeNode 
        
typedef struct TreeNode * TreeNodePtr; // synonym for TreeNode*
                    
typedef struct {
	int size;
	TreeNodePtr root;
}BST;

// prototypes

void insertNode( BST *, int );
/*
void insertNode_R(TreeNodePtr * t,int value){    //harder insertNode
  if(*t==NULL){
   *t=(TreeNode*) malloc(sizeof(TreeNode));  //if memory was allocated, then assign the data
	 if(*t != NULL){
		*(t)->data=value;
     *(t)->leftPtr=NULL;
		*(t)->rightPtr=NULL;
   } else {
     printf("%d not inserted. No memory available\n", value);
    }
  }
  else{ //tree is not empty
     if(t->data>=value) //left
        
     else //right
      
   }
}
*/
void insertNode( BST *b, int value ){    //ezier insertNode
	 TreeNodePtr t=b->root, new_node;
	 int inserted=0;
	new_node =(TreeNodePtr) malloc(sizeof(struct TreeNode));
	if(new_node){        //check if new_node memory is full or malloc completed
		new_node->leftPtr=NULL;
		new_node->rightPtr=NULL;
		new_node->data=value;
		/*First Node*/
		if(!b->root)	b->root=new_node;
		else {
while(!inserted){
   if(t->data >= value){    //data is a 'number' that 't' pointed to
     /* move/insert to the left*/
        if(t->leftPtr == NULL){
          t->leftPtr=new_node;
          inserted=1;
        }
        else t=t->leftPtr;
       
       
  	 
  }
   else{
	      /* move/ insert to the right*/
        if(t->rightPtr == NULL){
          t->rightPtr=new_node;
          inserted=1;
        }
        else t=t->rightPtr;
    
    }
	}
   
  }//end while		
  }//end else;
  b->size++;
  }
  
//}//end function


void inOrder( TreeNodePtr treePtr ) //print after Order left side but before Order right side
{ 
   // if tree is not empty, then traverse
   if ( treePtr != NULL ) {        
        
      inOrder( treePtr->leftPtr ); //Recursion to the left
      printf("%6d",treePtr->data) ;  //print the value 
      inOrder( treePtr->rightPtr ); //Recursion to the right
     
   } // end if                          
} // end 

void preOrder( TreeNodePtr treePtr ) //print before Order every sides
{ 
   // if tree is not empty, then traverse
   if ( treePtr != NULL ) {        
        
      printf("%6d",treePtr->data) ;  //print the value
      preOrder( treePtr->leftPtr ); //Recursion to the left
      preOrder( treePtr->rightPtr ); //Recursion to the right
      
   }
}

void postOrder( TreeNodePtr treePtr ) //print after Order every sides
{ 
   // if tree is not empty, then traverse
   if ( treePtr != NULL ) {        
        
      postOrder( treePtr->leftPtr ); //Recursion to the left
      postOrder( treePtr->rightPtr ); //Recursion to the right
      printf("%6d",treePtr->data) ;  //print the value 
      
   }
}

void printTree( TreeNodePtr treePtr , int value) //rotate 90 degrees counterclockwisely, then print
{ 
  int i=value;
   // if tree is not empty, then traverse
   if ( treePtr != NULL ) {        

      printTree( treePtr->rightPtr , i+1); //Recursion to the right
     for(i=0;i<value;i++)  printf("         ");
      printf("%6d",treePtr->data) ;  //print the value 
      printf("\n");
      printTree( treePtr->leftPtr , i+1); //Recursion to the left
      
   }
}