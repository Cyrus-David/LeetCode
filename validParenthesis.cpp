bool isValid(string s) {
    stack<char> holder;
    for (auto i : s) {
        switch (i) {
            case '{': holder.push('}'); break;
            case '[': holder.push(']'); break;
            case '(': holder.push(')'); break;
            default:
                if (holder.size() == 0 || holder.top() != i)
                    return false;
                holder.pop();
        }
    }
    if (holder.size() != 0)
        return false;
    return true;
}
