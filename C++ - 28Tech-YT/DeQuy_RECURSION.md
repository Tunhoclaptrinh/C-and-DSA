# 📘 TÀI LIỆU ĐẦY ĐỦ VỀ ĐỆ QUY (RECURSION) TRONG C++

---

## 1️⃣ Đệ quy là gì?

**Đệ quy** là kỹ thuật trong đó **một hàm gọi lại chính nó** để giải bài toán.

👉 Ý tưởng:

* Bài toán lớn → chia thành bài toán nhỏ hơn giống hệt
* Khi bài toán đủ nhỏ → **dừng lại**

---

## 2️⃣ Hai thành phần BẮT BUỘC của đệ quy

### 1. Điều kiện dừng (Base Case)

* Khi gặp điều kiện này → **không gọi đệ quy nữa**
* Nếu thiếu → chương trình **chạy vô hạn và crash**

### 2. Công thức đệ quy

* Cách bài toán lớn phụ thuộc vào bài toán nhỏ hơn

---

## 3️⃣ Cấu trúc chuẩn của một hàm đệ quy

```cpp
return_type function(parameters) {
    if (điều_kiện_dừng)
        return giá_trị_dừng;
    return function(bài_toán_nhỏ_hơn);
}
```

---

## 4️⃣ Đệ quy hoạt động như thế nào? (Call Stack)

Mỗi lần gọi hàm:

* Hàm được **đẩy vào stack**
* Chờ kết quả từ lời gọi bên trong
* Khi xong → trả về và **pop khỏi stack**

👉 Đệ quy luôn chạy theo **cơ chế vào sâu trước – quay ngược lại sau**

---

## 5️⃣ Ví dụ 1: In số từ n về 1

### Code

```cpp
void print(int n) {
    if (n == 0) return;
    cout << n << " ";
    print(n - 1);
}
```

### Gọi

```cpp
print(3);
```

### Diễn biến

```
print(3)
  print(2)
    print(1)
      print(0) → dừng
```

### Output

```
3 2 1
```

---

## 6️⃣ Ví dụ 2: GIAI THỪA (Factorial) – giải thích chi tiết

### Định nghĩa bằng chữ

* Giai thừa của n là:

    * n nhân với giai thừa của n − 1
    * giai thừa của 0 bằng 1

### Công thức dạng chữ

```
n! = n * (n - 1)!
0! = 1
```

---

### Code

```cpp
long long fact(int n) {
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
```

---

### Phân tích stack khi gọi `fact(4)`

```
fact(4)
 = 4 * fact(3)
       = 3 * fact(2)
             = 2 * fact(1)
                   = 1 * fact(0)
                         = 1
```

👉 Quay ngược:

```
fact(1) = 1
fact(2) = 2
fact(3) = 6
fact(4) = 24
```

---

## 7️⃣ Ví dụ 3: Fibonacci (đệ quy cơ bản)

### Định nghĩa

```
F(0) = 0
F(1) = 1
F(n) = F(n - 1) + F(n - 2)
```

---

### Code

```cpp
long long fib(int n) {
    if (n == 0 || n == 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
```

---

### Nhược điểm

* Rất chậm
* Gọi lại cùng giá trị nhiều lần
* Độ phức tạp: O(2^n)

👉 **Chỉ dùng để học khái niệm đệ quy**

---

## 8️⃣ Ví dụ 4: Fibonacci – cách ĐÚNG (DP / vòng lặp)

```cpp
long long fib(int n) {
    if (n == 0) return 0;
    long long a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        long long c = a + b;
        a = b;
        b = c;
    }
    return b;
}
```

---

## 9️⃣ Ví dụ 5: Tổ hợp C(n, k) bằng đệ quy

### Định nghĩa

* Chọn k phần tử từ n phần tử

### Công thức chữ

```
C(n, k) = C(n-1, k-1) + C(n-1, k)
C(n, 0) = C(n, n) = 1
```

---

### Code

```cpp
int C(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return C(n - 1, k - 1) + C(n - 1, k);
}
```

⚠️ Rất chậm nếu n lớn.

---

## 🔟 Ví dụ 6: In mảng bằng đệ quy

### In từ trái sang phải

```cpp
void printArr(int a[], int n, int i = 0) {
    if (i == n) return;
    cout << a[i] << " ";
    printArr(a, n, i + 1);
}
```

---

### In từ phải sang trái

```cpp
void printReverse(int a[], int n) {
    if (n == 0) return;
    cout << a[n - 1] << " ";
    printReverse(a, n - 1);
}
```

---

## 11️⃣ Khi nào KHÔNG nên dùng đệ quy?

❌ n quá lớn → stack overflow
❌ bài toán có lặp lại nhiều → rất chậm
❌ có thể viết vòng lặp đơn giản hơn

---

## 12️⃣ Khi nào NÊN dùng đệ quy?

✔ Duyệt cây, đồ thị (DFS)
✔ Backtracking (sinh hoán vị, tổ hợp)
✔ Chia để trị
✔ Công thức truy hồi

---

## 13️⃣ So sánh đệ quy vs vòng lặp

| Đệ quy       | Vòng lặp     |
|--------------|--------------|
| Dễ hiểu      | Nhanh hơn    |
| Code gọn     | Ít tốn stack |
| Dễ lỗi stack | An toàn      |

---

## 14️⃣ Quy tắc vàng để viết đệ quy

1️⃣ Luôn có **base case**
2️⃣ Mỗi lần gọi → bài toán **nhỏ hơn**
3️⃣ Không gọi lặp vô hạn
4️⃣ Hiểu rõ stack trước khi code

---

## 15️⃣ Câu chốt để nhớ

> **Đệ quy không phải là phép màu — nó là vòng lặp dùng stack**

---

Nếu bạn muốn, bước tiếp theo mình đề xuất:

* 🔥 vẽ **sơ đồ stack chi tiết bằng ASCII**
* 🔥 chuyển toàn bộ ví dụ sang **DP**
* 🔥 bài tập đệ quy + lời giải

👉 nói “tiếp” là mình làm tiếp ngay.
