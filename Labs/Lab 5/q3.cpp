#include <bits/stdc++.h>
using namespace std;
class Queue
{
private:
    int front;
    int rear;
    int arr[5];

public:
    Queue()
    {
        front = -1;
        rear = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }
    bool isEmpty()
    {
        if (front == -1 && rear == -1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if (rear == 4)
            return true;
        else
            return false;
    }
    void enqueue(int val)
    {
        if (isFull())
        {
            cout << "Queue full"
                 << "\n";
            return;
        }
        else if (isEmpty())
        {
            rear = 0;
            front = 0;
            arr[rear] = val;
        }
        else
        {
            rear++;
            arr[rear] = val;
        }
    }
    int dequeue()
    {
        int x = 0;
        if (isEmpty())
        {
            cout << "Queue is Empty"
                 << "\n";
            return x;
        }
        else if (rear == front)
        {
            x = arr[rear];
            rear = -1;
            front = -1;
            return x;
        }
        else
        {
            cout << "front value: " << front << "\n";
            x = arr[front];
            arr[front] = 0;
            front++;
            return x;
        }
    }
    int count()
    {
        return (rear - front + 1);
    }
    void display()
    {
        cout << "All values in the Queue are - "
             << "\n";
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    Queue q1;
    int value, option;
    cout << "\n"
         << "\n"
         << "========================= MENU ========================="
         << "\n";
    cout << "Enter 0 to exit."
         << "\n";
    cout << "1. Enqueue()"
         << "\n";
    cout << "2. Dequeue()"
         << "\n";
    cout << "3. isEmpty()"
         << "\n";
    cout << "4. isFull()"
         << "\n";
    cout << "5. count()"
         << "\n";
    cout << "6. display()"
         << "\n";
    cout << "7. Clear Screen"
         << "\n"
         << "\n";
    do
    {
        cin >> option;
        switch (option)
        {
            case 0:
                break;
            case 1:
                cout << "Enqueue Operation \nEnter an item to Enqueue in the Queue"
                     << "\n";
                cin >> value;
                q1.enqueue(value);
                break;
            case 2:
                cout << "Dequeue Operation \nDequeued Value : " << q1.dequeue() << "\n";
                break;
            case 3:
                if (q1.isEmpty())
                    cout << "Queue is Empty"
                         << "\n";
                else
                    cout << "Queue is not Empty"
                         << "\n";
                break;
            case 4:
                if (q1.isFull())
                    cout << "Queue is Full"
                         << "\n";
                else
                    cout << "Queue is not Full"
                         << "\n";
                break;
            case 5:
                cout << "Count Operation \nCount of items in Queue : " << q1.count() << "\n";
                break;
            case 6:
                cout << "Display Function Called - "
                     << "\n";
                q1.display();
                break;
            case 7:
                system("cls");
                break;
            default:
                cout << "Enter Proper Option number "
                     << "\n";
        }
    } while (option != 0);
    return 0;
}
