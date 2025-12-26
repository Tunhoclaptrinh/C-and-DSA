**Cấu trúc dữ liệu Ngăn xếp (Stack) trong C++**, dưới đây là tóm tắt + ví dụ dễ hiểu:

---

## 🔎 Stack là gì?

Stack là cấu trúc dữ liệu dạng **LIFO – Last In First Out**
➡️ Phần tử **vào sau sẽ ra trước**
Giống chồng sách: đặt quyển nào lên trên cùng thì lấy ra đầu tiên.

---

## 🧩 Các thao tác cơ bản

| Hàm     | Ý nghĩa                     |
|---------|-----------------------------|
| push(x) | Thêm phần tử vào đỉnh stack |
| pop()   | Xóa phần tử ở đỉnh          |
| top()   | Xem phần tử ở đỉnh          |
| empty() | Kiểm tra rỗng               |
| size()  | Số phần tử                  |

---

## ✅ Dùng stack có sẵn trong C++

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top: " << st.top() << endl; // 30

    st.pop();
    cout << "Top after pop: " << st.top() << endl; // 20

    cout << "Size: " << st.size() << endl;

    if(st.empty()) cout << "Stack rong";
    else cout << "Stack khong rong";

    return 0;
}
```

---

## 🏗️ Tự cài đặt Stack bằng mảng

```cpp
#include <bits/stdc++.h>
using namespace std;

struct Stack {
    int a[1000];
    int top = -1;

    bool empty() {
        return top == -1;
    }

    void push(int x) {
        a[++top] = x;
    }

    void pop() {
        if(!empty()) top--;
    }

    int peek() {
        return a[top];
    }
};

int main() {
    Stack st;
    st.push(5);
    st.push(7);
    cout << st.peek(); // 7
}
```

---

## 📌 Ứng dụng của Stack

* Duyệt ngoặc đúng / sai
* Undo – Redo
* DFS
* Chuyển biểu thức trung tố → hậu tố
* Quản lý lời gọi hàm (Call Stack)

---

Nếu bạn đang:
👉 làm bài tập cụ thể
👉 cần dạng đề (VD: kiểm tra ngoặc, đảo chuỗi, stack bằng linked list…)

thì gửi đề mình giúp bạn luôn nhé!
