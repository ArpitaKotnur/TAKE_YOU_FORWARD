void inorder(node)
{
  if(node==Null)
  return;
inorder(node->left);
print(node->data);
inorder(node->right);
}
