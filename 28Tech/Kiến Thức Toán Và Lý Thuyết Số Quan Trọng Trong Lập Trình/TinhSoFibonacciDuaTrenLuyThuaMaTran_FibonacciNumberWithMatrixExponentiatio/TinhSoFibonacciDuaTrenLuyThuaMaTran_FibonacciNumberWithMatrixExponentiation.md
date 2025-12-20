Rất chuẩn 👍 đây là **cách xịn nhất** để tính Fibonacci khi **n rất lớn**.

---

# 1️⃣ Ý tưởng cốt lõi (nền tảng toán)

Dãy Fibonacci:

```
F(0)=0
F(1)=1
F(n)=F(n-1)+F(n-2)
```

Ta viết dưới dạng **ma trận**:

[
\begin{bmatrix}
F(n) \
F(n-1)
\end{bmatrix}
=============

\begin{bmatrix}
1 & 1 \
1 & 0
\end{bmatrix}
\cdot
\begin{bmatrix}
F(n-1) \
F(n-2)
\end{bmatrix}
]

Suy ra:
[
\begin{bmatrix}
F(n) \
F(n-1)
\end{bmatrix}
=============

\begin{bmatrix}
1 & 1 \
1 & 0
\end{bmatrix}^{n-1}
\cdot
\begin{bmatrix}
1 \
0
\end{bmatrix}
]

👉 **Chỉ cần tính M^(n−1)**

---

# 2️⃣ Vì sao nhanh?

* Nhân ma trận 2×2: **O(1)**
* Lũy thừa nhanh: **O(log n)**

👉 Fibonacci n tới **10¹⁸** vẫn chạy được 💥

---

# 3️⃣ Cấu trúc ma trận 2×2

```cpp
struct Matrix {
    long long a, b, c, d;
    // | a b |
    // | c d |
};
```

---

# 4️⃣ Nhân ma trận (có MOD)

```cpp
const long long MOD = 1e9 + 7;

Matrix multiply(Matrix x, Matrix y) {
    Matrix r;
    r.a = (x.a * y.a + x.b * y.c) % MOD;
    r.b = (x.a * y.b + x.b * y.d) % MOD;
    r.c = (x.c * y.a + x.d * y.c) % MOD;
    r.d = (x.c * y.b + x.d * y.d) % MOD;
    return r;
}
```

---

# 5️⃣ Lũy thừa ma trận (Fast Power)

```cpp
Matrix matrixPow(Matrix base, long long exp) {
    Matrix res = {1, 0, 0, 1}; // ma trận đơn vị

    while (exp > 0) {
        if (exp & 1)
            res = multiply(res, base);
        base = multiply(base, base);
        exp >>= 1;
    }
    return res;
}
```

---

# 6️⃣ Tính Fibonacci

```cpp
long long fib(long long n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    Matrix M = {1, 1, 1, 0};
    Matrix R = matrixPow(M, n - 1);
    return R.a; // F(n)
}
```

---

# 7️⃣ Ví dụ minh họa

### n = 10

```
F(10) = 55
```

### n = 1e18

👉 chạy trong vài micro giây 😎

---

# 8️⃣ So sánh các cách tính Fibonacci

| Cách          | Độ phức tạp |
|---------------|-------------|
| Đệ quy        | O(2ⁿ) ❌     |
| DP            | O(n)        |
| Fast doubling | O(log n)    |
| Matrix power  | O(log n)    |

---

# 9️⃣ Fast Doubling vs Matrix?

* **Matrix**: dễ hiểu, mở rộng được nhiều bài
* **Fast doubling**: code ngắn hơn, nhanh hơn chút

---

# 10️⃣ Câu nhớ nhanh

> **Fibonacci lớn → chuyển thành lũy thừa ma trận → dùng fast power**

---

Nếu bạn muốn, mình có thể:

* 🔥 giải từng dòng code
* 🔥 viết bản **không dùng struct**
* 🔥 so sánh với **fast doubling**

👉 chọn tiếp nhé.
