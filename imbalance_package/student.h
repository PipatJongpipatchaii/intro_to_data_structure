// Your code here
int getHeight(node *n){
    //std::cout <<  "1";
    if (n==NULL) return -1;
    if (n->left==NULL && n->right==NULL)return 0;
    else if (n->left == NULL) return getHeight(n->right)+1;
    else if (n->right == NULL) return getHeight(n->left)+1;
    else return std::max(getHeight(n->left),getHeight(n->right))+1;

}

std::pair<int,KeyT> getImbalance(node *n){
    //std::cout <<  "2";
    int imbalance = getHeight(n->left)-getHeight(n->right);
    std::cout<< n->data.first << " " << getHeight(n->left) << "-" << getHeight(n->right);
    std::cout <<  "\n";
    if (getHeight(n->left)<getHeight(n->right)) imbalance *= -1;
    //std::cout <<  "2";
    return std::pair<int,KeyT>(imbalance,-(n->data.first));

}
void maxImbalance(node *n,std::pair<int,KeyT> &maxIm){
    //std::cout <<  "3";
    if (n!=NULL){
        std::pair<int,KeyT> mI;
        mI = getImbalance(n);
        std::cout << n->data.first << " : " << mI.first;
        std::cout << "\n";
        maxIm = std::max(maxIm,mI);
        maxImbalance(n->left,maxIm);
        maxImbalance(n->right,maxIm);
    }


}
KeyT getValueOfMostImbalanceNode() {
    // Your code here
    std::pair<int,KeyT> mI = getImbalance(mRoot);
    //std::cout <<  "4";
    maxImbalance(mRoot->left,mI);
    maxImbalance(mRoot->right,mI);
    return -mI.second;
}
