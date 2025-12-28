**Hàng đợi (Queue)** là cấu trúc dữ liệu tuân theo nguyên tắc
➡️ **FIFO – First In First Out** (vào trước ra trước)

---

## 1️⃣ Đặc điểm chính

* Phần tử vào trước sẽ được lấy ra trước
* Chỉ thao tác ở 2 đầu:

    * **push** → thêm phần tử vào cuối
    * **pop** → lấy phần tử ở đầu
* Không truy cập trực tiếp phần tử giữa

---

## 2️⃣ Queue trong C++ (STL)

C++ đã hỗ trợ sẵn trong thư viện `<queue>`

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);   // thêm phần tử
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl; // 10
    cout << "Back: " << q.back() << endl;   // 30

    q.pop(); // loại 10

    cout << "Front after pop: " << q.front() << endl; // 20

    cout << "Size: " << q.size() << endl;

    if(q.empty())
        cout << "Queue empty";
    else
        cout << "Queue not empty";

    return 0;
}
```

📌 **Các hàm thường dùng**

| Hàm       | Ý nghĩa          |
|-----------|------------------|
| `push(x)` | Thêm phần tử     |
| `pop()`   | Xóa phần tử đầu  |
| `front()` | Lấy phần tử đầu  |
| `back()`  | Lấy phần tử cuối |
| `empty()` | Kiểm tra rỗng    |
| `size()`  | Số phần tử       |

---

## 3️⃣ Tự cài đặt Queue (mảng vòng – Circular Queue)

```cpp
#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

struct Queue {
    int a[MAX];
    int front = 0, rear = -1, cnt = 0;

    bool empty() { return cnt == 0; }
    bool full() { return cnt == MAX; }

    void push(int x) {
        if(full()) return;
        rear = (rear + 1) % MAX;
        a[rear] = x;
        cnt++;
    }

    void pop() {
        if(empty()) return;
        front = (front + 1) % MAX;
        cnt--;
    }

    int getFront() {
        return a[front];
    }
};

int main() {
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout << q.getFront(); // 1
    q.pop();
    cout << q.getFront(); // 2
}
```

---

## 4️⃣ Độ phức tạp

* `push()` → O(1)
* `pop()` → O(1)
* `front()` → O(1)

---

Nếu bạn cần:

* bài tập queue
* so sánh với stack
* ứng dụng queue (BFS, xử lý tác vụ, mô phỏng hàng chờ,…)
  thì nói mình nhé 🙂
