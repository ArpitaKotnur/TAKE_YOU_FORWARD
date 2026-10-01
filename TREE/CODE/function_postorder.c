void postorder(node)
{
  if(node==Null)
    return;
postorder(node->left);
postorder(node->right);
print(node->data);
}
