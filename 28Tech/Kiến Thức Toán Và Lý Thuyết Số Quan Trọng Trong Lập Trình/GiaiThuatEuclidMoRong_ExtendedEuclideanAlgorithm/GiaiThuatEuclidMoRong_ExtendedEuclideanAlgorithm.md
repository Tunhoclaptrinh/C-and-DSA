Ok 👍 mình nói **giải thuật Euclid mở rộng** theo đúng kiểu bạn đang học:
**từ Euclid thường → mở rộng → vì sao cần → code → ví dụ cụ thể**. Không lan man.

---

# 1️⃣ Nhắc nhanh Euclid thường

Mục tiêu: tìm

```
gcd(a, b)
```

Quy tắc:

```
gcd(a, b) = gcd(b, a % b)
```

Ví dụ:

```
gcd(30, 18)
= gcd(18, 12)
= gcd(12, 6)
= 6
```

---

# 2️⃣ Euclid mở rộng là gì?

Ngoài `gcd(a, b)`, ta tìm **hai số x, y** sao cho:

```
a·x + b·y = gcd(a, b)
```

📌 Đây gọi là **đẳng thức Bézout**

---

## Ví dụ

```
a = 30, b = 18
gcd = 6

→ 30·(-1) + 18·2 = 6
```

---

# 3️⃣ Vì sao cần Euclid mở rộng?

Nó dùng để:

### ✅ Tìm nghịch đảo modulo

Tìm `x` sao cho:

```
a·x ≡ 1 (mod m)
```

⇔

```
a·x + m·y = 1
```

👉 Chỉ tồn tại khi:

```
gcd(a, m) = 1
```

---

### ✅ Giải phương trình Diophantine

```
a·x + b·y = c
```

Có nghiệm ⇔ `gcd(a, b) | c`

---

# 4️⃣ Ý tưởng thuật toán (cốt lõi)

Ta biết:

```
gcd(a, b) = gcd(b, a % b)
```

Giả sử:

```
b·x1 + (a % b)·y1 = gcd(a, b)
```

Mà:

```
a % b = a − (a / b)·b
```

Thay vào:

```
b·x1 + (a − (a / b)·b)·y1
= a·y1 + b·(x1 − (a / b)·y1)
```

👉 So sánh:

```
x = y1
y = x1 − (a / b)·y1
```

---

# 5️⃣ Code chuẩn (đệ quy – dễ hiểu nhất)

```cpp
long long extended_gcd(long long a, long long b, long long &x, long long &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    long long x1, y1;
    long long g = extended_gcd(b, a % b, x1, y1);

    x = y1;
    y = x1 - (a / b) * y1;

    return g;
}
```

---

# 6️⃣ Ví dụ chạy tay: `a = 30, b = 18`

Quá trình:

```
gcd(30,18)
→ gcd(18,12)
→ gcd(12,6)
→ gcd(6,0)
```

Quay ngược:

```
6 = 12 − 2·6
6 = 18 − 1·12
6 = 30 − 1·18
```

Kết quả:

```
x = -1, y = 2
```

---

# 7️⃣ Dùng để tìm nghịch đảo modulo

```cpp
long long modInverse(long long a, long long m) {
    long long x, y;
    long long g = extended_gcd(a, m, x, y);
    if (g != 1) return -1; // không tồn tại
    return (x % m + m) % m;
}
```

---

# 8️⃣ So sánh nhanh

| Thuật toán     | Làm được gì     |
|----------------|-----------------|
| Euclid thường  | gcd             |
| Euclid mở rộng | gcd + hệ số x,y |

---

# 9️⃣ Câu chốt (nhớ câu này là đủ)

> **Euclid mở rộng = Euclid + truy vết ngược để tìm x, y**

---

Nếu bạn muốn, bước tiếp theo hợp lý là:

* áp dụng vào **chia modulo**
* giải **ax + by = c**
* hoặc so sánh với **fastPow (mod prime)**

👉 nói tiếp phần nào, mình đi sâu phần đó 👍
