**Hàng đợi hai đầu (Deque – Double Ended Queue)** là cấu trúc dữ liệu cho phép:
➡️ **Thêm / xoá phần tử ở cả hai đầu** (đầu trước và cuối)

Khác với Queue (FIFO chỉ thao tác 1 đầu) và Stack (LIFO chỉ thao tác 1 đầu), deque linh hoạt hơn.

---

## 1️⃣ Đặc điểm

* Thêm đầu trước ✔️
* Thêm đầu sau ✔️
* Xóa đầu trước ✔️
* Xóa đầu sau ✔️
* Truy cập phần tử đầu & cuối O(1)
* Hỗ trợ duyệt như vector

---

## 2️⃣ `deque` trong C++ STL

Có sẵn trong `<deque>` hoặc `<bits/stdc++.h>`

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(10);   // thêm cuối
    dq.push_back(20);
    dq.push_front(5);   // thêm đầu

    cout << dq.front() << endl; // 5
    cout << dq.back()  << endl; // 20

    dq.pop_front(); // xoá 5
    dq.pop_back();  // xoá 20

    if(dq.empty())
        cout << "Deque empty";
    else
        cout << "Deque not empty";

    return 0;
}
```

---

## 3️⃣ Các hàm thường dùng

| Hàm             | Ý nghĩa          |
| --------------- | ---------------- |
| `push_front(x)` | Thêm đầu         |
| `push_back(x)`  | Thêm cuối        |
| `pop_front()`   | Xóa đầu          |
| `pop_back()`    | Xóa cuối         |
| `front()`       | Lấy phần tử đầu  |
| `back()`        | Lấy phần tử cuối |
| `size()`        | Số phần tử       |
| `empty()`       | Kiểm tra rỗng    |
| `clear()`       | Xóa hết          |

---

## 4️⃣ Độ phức tạp

* Thêm / xóa đầu hoặc cuối → **O(1)**
* Truy cập theo chỉ số → **O(1)**
* Không chậm như `vector` khi thêm đầu

---

## 5️⃣ Khi nào dùng deque?

✔️ Khi cần thao tác hai đầu
✔️ Khi cần kết hợp Stack + Queue
✔️ Khi làm Sliding Window / BFS tối ưu
✔️ Khi làm bài “Queue 2 đầu” trong lập trình thi

---

Nếu bạn muốn:

* ví dụ bài tập deque
* tự cài đặt deque bằng mảng vòng
* so sánh deque vs queue vs stack
  cứ nói mình nhé!
