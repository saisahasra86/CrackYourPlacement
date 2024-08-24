#include <bits/stdc++.h>
using namespace std

    vector<int>
    inorderTraversal(TreeNode *root)
{
    vector<int> v;
    if (root == nullptr)
        return v;
    stack<TreeNode *> st;
    st.push(root);
    while (!st.empty())
    {
        while (root->left != NULL)
        {
            root = root->left;
            st.push(root);
        }
        if ((root->right) == NULL)
        {
            while (!st.empty() && root->right == NULL)
            {
                st.pop();
                v.push_back(root->val);
                if (!st.empty())
                    root = st.top();
                else
                    break;
            }
            if (st.empty())
                return v;
            if (root != NULL)
                v.push_back(root->val);
            st.pop();
            root = root->right;
            st.push(root);
        }
        else
        {
            v.push_back(root->val);
            st.pop();
            root = root->right;
            st.push(root);
        }
    }
    return v;
}