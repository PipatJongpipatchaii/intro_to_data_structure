#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  //your code here
  CP::map_bst<KeyT,MappedT,CompareT> result;
  node *tmp = mRoot;
  node *l1;
  node *l2;
  if(compare(val,mRoot->data.first)==-1){
    tmp = tmp->left;
    while (compare(val,tmp->data.first)==-1){
       tmp = tmp->right;
    }
    tmp->parent->right = NULL;
    l1 = tmp;
    tmp = tmp->left;
    while(true){
        if (compare(tmp->right->data.first,val)==-1){
            tmp->parent->left = NULL;
            break;
        }
        if (compare(tmp->right->data.first,val)==0){
            tmp = tmp->right;
            tmp->parent->right = NULL;
            break;
        }
        tmp = tmp->left;
    }
    l2 = tmp;
    l1->left = l2;
    result.mRoot = mRoot;
    result.mRoot->left = l1;
    mRoot = mRoot->left;
  }else if (compare(val,mRoot->data.first)==0){
    result.mRoot = mRoot;
    result.mRoot->left = NULL;
    mRoot = mRoot->left;
  }else{
    tmp = tmp->right;
    while (compare(val,tmp->data.first)==1){
       tmp = tmp->left;
    }
    tmp->parent->left = NULL;
    l1 = tmp;
    tmp = tmp->right;
    while(true){
        if (compare(tmp->left->data.first,val)==1){
            tmp->parent->right = NULL;
            break;
        }
        if (compare(tmp->left->data.first,val)==0){
            tmp = tmp->left;
            tmp->parent->left = NULL;
            break;
        }
        tmp = tmp->right;
    }
    l2 = tmp;
    l1->left = l2;
    result.mRoot = mRoot;
    result.mRoot->left = l1;
    mRoot = mRoot->left;
  }
  return result;
}

#endif
