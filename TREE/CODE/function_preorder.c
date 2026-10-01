void preorder(node)
{
  if(node==Null)
  { return ;}
print(node->data);
preorder(node->left);
preorder(node->left);
}
