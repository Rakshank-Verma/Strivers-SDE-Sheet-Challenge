class MyStack
{
public:
    queue<int> q;

    MyStack()
    {
    }

    void push(int x)
    {
        if (q.empty())
        {
            q.push(x);
        }
        else
        {
            q.push(x);
            int i = 1;
            while (i <= q.size() - 1)
            {
                int front = q.front();
                q.pop();
                q.push(front);
                i++;
            }
        }
    }

    int pop()
    {
        int popped = q.front();
        q.pop();
        return popped;
    }

    int top()
    {
        return q.front();
    }

    bool empty()
    {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */