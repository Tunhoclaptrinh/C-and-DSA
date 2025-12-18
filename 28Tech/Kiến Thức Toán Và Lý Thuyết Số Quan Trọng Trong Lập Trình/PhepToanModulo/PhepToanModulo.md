Ok 👍 mình sẽ viết **lý thuyết nền tảng của phép chia dư (modulo)** theo kiểu **dễ học – đúng bản chất – có minh họa**,
đúng trình tự để bạn dùng được ngay trong thuật toán & code.

---

# 1️⃣ Phép chia dư là gì?

Với hai số nguyên `a` và `b (b ≠ 0)`:

```
a = b × q + r
```

Trong đó:

* `q` = thương (quotient)
* `r` = số dư (remainder)

📌 **Định nghĩa**:

```
a % b = r
```

với:

```
0 ≤ r < |b|
```

---

## Ví dụ đơn giản

```
17 ÷ 5 = 3 dư 2
⇒ 17 = 5 × 3 + 2
⇒ 17 % 5 = 2
```

---

# 2️⃣ Ý nghĩa của phép chia dư

### 🔹 Kiểm tra chia hết

```
a chia hết cho b ⇔ a % b == 0
```

Ví dụ:

```cpp
18 % 6 == 0  // true
17 % 6 == 5  // false
```

---

### 🔹 Phân loại số

| Bài toán  | Điều kiện     |   |                               |
|-----------|---------------|---|-------------------------------|
| Số chẵn   | `n % 2 == 0`  |   |                               |
| Số lẻ     | `n % 2 == 1`  |   |                               |
| Năm nhuận | `y % 400 == 0 |   | (y % 4 == 0 && y % 100 != 0)` |

---

# 3️⃣ Phép chia dư trong C++

```cpp
int r = a % b;
```

📌 **Lưu ý quan trọng**:

* `b` **không được bằng 0**
* Với số âm:

```cpp
-7 % 3 = -1   // C++
```

---

# 4️⃣ Các tính chất quan trọng của modulo

## 4.1️⃣ Tính chất cộng

```
(a + b) % m = (a % m + b % m) % m
```

### Ví dụ

```
(17 + 29) % 5
= 46 % 5
= 1

(17 % 5 + 29 % 5) % 5
= (2 + 4) % 5
= 1
```

---

## 4.2️⃣ Tính chất trừ

```
(a − b) % m = (a % m − b % m + m) % m
```

📌 Cộng thêm `+ m` để tránh số âm

---

## 4.3️⃣ Tính chất nhân

```
(a × b) % m = (a % m × b % m) % m
```

### Ví dụ

```
(123 × 456) % 7
= (4 × 1) % 7
= 4
```

---

## 4.4️⃣ Lũy thừa (rất quan trọng)

```
(a^b) % m
```

👉 **Không được** tính `a^b` trước (tràn số)

### Cách đúng

```cpp
long long fastPowMod(long long a, long long b, long long m) {
    long long res = 1;
    a %= m;
    while (b > 0) {
        if (b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
```

---

# 5️⃣ Minh họa bằng bảng chia dư

### Ví dụ: chia cho 5

| n | n % 5 |
|---|-------|
| 0 | 0     |
| 1 | 1     |
| 2 | 2     |
| 3 | 3     |
| 4 | 4     |
| 5 | 0     |
| 6 | 1     |
| 7 | 2     |
| 8 | 3     |
| 9 | 4     |

📌 **Chu kỳ lặp lại**

---

# 6️⃣ Ứng dụng cực kỳ phổ biến

### 🔹 Đếm theo vòng (circular)

```cpp
next = (i + 1) % n;
```

---

### 🔹 Hashing

```cpp
hash = value % MOD;
```

---

### 🔹 DP / Số lớn

```cpp
dp[i] = (dp[i-1] + dp[i-2]) % MOD;
```

---

# 7️⃣ Lỗi rất hay gặp (thi cử & code)

❌ Quên `% m` sau phép nhân
❌ `% m` khi `m = 0`
❌ Không xử lý số âm
❌ Tính `a^b` trước rồi mới `% m`

---

# 8️⃣ Câu chốt (nhớ câu này là đủ)

> **Modulo giữ lại “phần dư”, loại bỏ phần nguyên lớn**
> → giúp tính toán nhanh, tránh tràn số, và tạo chu kỳ.

---

Nếu bạn muốn, mình có thể:

* cho **10 bài mẫu từ dễ → khó**
* giải thích **mod nghịch đảo**
* hoặc liên hệ **mod với fastPow & Fibonacci**

👉 cứ nói, mình đi tiếp đúng mạch bạn đang học 👍
