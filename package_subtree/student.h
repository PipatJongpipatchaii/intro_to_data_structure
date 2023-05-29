#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"

template <typename KeyT,typename MappedT, typename CompareT >
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* n) {
  //write your code here
  if (n != NULL){
        mSize++;
        process(n->left);
        process(n->right);
  }
  return 0;
}

template <typename KeyT,typename MappedT, typename CompareT >
std::pair<KeyT,MappedT> CP::map_bst<KeyT,MappedT,CompareT>::subtree(CP::map_bst<KeyT,MappedT,CompareT> &left, CP::map_bst<KeyT,MappedT,CompareT> &right) {
  //write your code here
  //auto realRoot = mRoot;
  if (!empty()){
    left.clear();
    right.clear();
    right.mRoot = mRoot->right;
    left.mRoot = mRoot->left;
    if (mRoot->left!=NULL) mRoot->left->parent = NULL;
    if (mRoot->right!=NULL) mRoot->right->parent = NULL;
    mRoot->left = NULL;
    mRoot->right = NULL;
    left.mSize = 0;
    left.process(left.mRoot);
    right.mSize = 0;
    right.process(right.mRoot);
    mSize = 1;
    return mRoot->data;
  }
  return std::pair<KeyT,MappedT>();
}

#endif

