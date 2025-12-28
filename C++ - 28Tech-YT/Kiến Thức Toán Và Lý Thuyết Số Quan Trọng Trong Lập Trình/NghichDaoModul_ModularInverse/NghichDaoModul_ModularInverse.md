**Nghịch đảo modulo (Modular Inverse)** một cách **chuẩn nền tảng → áp dụng được ngay**, đúng kiểu bạn đang học Euclid
mở rộng.

---

# 1️⃣ Nghịch đảo modulo là gì?

Cho hai số **a, m**.
Số **x** được gọi là **nghịch đảo modulo m của a** nếu:

```
a · x ≡ 1 (mod m)
```

Ký hiệu:

```
x = a⁻¹ (mod m)
```

📌 Nghĩa là:

```
(a * x) % m == 1
```

---

# 2️⃣ Khi nào nghịch đảo tồn tại?

👉 **Tồn tại khi và chỉ khi**:

```
gcd(a, m) = 1
```

Nếu **không nguyên tố cùng nhau** → ❌ KHÔNG có nghịch đảo.

---

# 3️⃣ Liên hệ với Euclid mở rộng (CỐT LÕI)

Từ **Euclid mở rộng**, ta tìm được:

```
a*x + m*y = gcd(a, m)
```

Nếu:

```
gcd(a, m) = 1
```

Thì:

```
a*x + m*y = 1
```

Lấy modulo m:

```
a*x ≡ 1 (mod m)
```

👉 **x chính là nghịch đảo modulo của a** 🎯

---

# 4️⃣ Code tìm nghịch đảo modulo bằng Euclid mở rộng

### Hàm Euclid mở rộng

```cpp
long long x, y, d;

void extended(long long a, long long b) {
    if (b == 0) {
        x = 1;
        y = 0;
        d = a;
    } else {
        extended(b, a % b);
        long long tmp = x;
        x = y;
        y = tmp - (a / b) * y;
    }
}
```

---

### Hàm nghịch đảo modulo

```cpp
long long modInverse(long long a, long long m) {
    extended(a, m);

    if (d != 1) {
        return -1; // không tồn tại
    }

    // đảm bảo x dương
    return (x % m + m) % m;
}
```

---

# 5️⃣ Ví dụ minh họa

### Ví dụ 1

```
a = 3, m = 11
```

Chạy Euclid mở rộng:

```
3x + 11y = 1
```

→ `x = 4`

👉 Kiểm tra:

```
3 * 4 % 11 = 1 ✔
```

---

### Ví dụ 2 (KHÔNG tồn tại)

```
a = 6, m = 9
```

```
gcd(6, 9) = 3 ≠ 1
```

👉 ❌ Không có nghịch đảo

---

# 6️⃣ Ứng dụng cực kỳ quan trọng

### 🔹 Chia modulo

```
a / b (mod m)
= a * b⁻¹ (mod m)
```

📌 **Không bao giờ chia trực tiếp trong modulo**

---

### 🔹 Tính tổ hợp

```
nCr mod p
```

→ cần nghịch đảo của `r!` và `(n-r)!`

---

### 🔹 Giải phương trình đồng dư

```
ax ≡ b (mod m)
```

---

# 7️⃣ Trường hợp đặc biệt: m là số nguyên tố

Nếu `m` là số nguyên tố:

```
a⁻¹ ≡ a^(m-2) (mod m)
```

📌 Dùng **Fast Power**

```cpp
long long fastPow(long long a, long long b, long long m) {
    long long res = 1;
    a %= m;
    while (b) {
        if (b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
```

---

# 8️⃣ So sánh 2 cách

| Cách           | Điều kiện   | Độ phức tạp |
|----------------|-------------|-------------|
| Euclid mở rộng | gcd(a,m)=1  | O(log m)    |
| Fermat         | m nguyên tố | O(log m)    |

---

# 9️⃣ Câu chốt để nhớ

> **Nghịch đảo modulo = nghiệm x của a·x ≡ 1 (mod m)**
> **→ dùng Euclid mở rộng là chuẩn bài nhất**

---

Nếu bạn muốn, bước tiếp theo rất hợp lý là:

* 🚀 giải `ax ≡ b (mod m)`
* 🚀 chia modulo trong bài lớn
* 🚀 áp dụng vào tổ hợp / DP / đồ thị

👉 chọn một cái, mình đi tiếp cho bạn.
