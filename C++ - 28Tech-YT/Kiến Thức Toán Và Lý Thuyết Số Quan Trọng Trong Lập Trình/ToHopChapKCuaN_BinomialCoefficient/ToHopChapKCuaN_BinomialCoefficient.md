                                                                                                                                                                                               **TỔ HỢP CHẬP K CỦA N (Binomial Coefficient)** từ **lý thuyết → công thức → tính thường → tính modulo (chuẩn thi & code)

**.

---

# 1️⃣ Tổ hợp chập K của N là gì?

Ký hiệu:

```
C(n, k) hoặc nCk
```

Ý nghĩa:

> Số cách chọn **k phần tử** từ **n phần tử**, **không phân biệt thứ tự**.

---

# 2️⃣ Công thức cơ bản

```
C(n, k) = n! / (k! · (n - k)!)
```

📌 Điều kiện:

```
0 ≤ k ≤ n
```

---

# 3️⃣ Tính chất quan trọng

### 🔹 Đối xứng

```
C(n, k) = C(n, n-k)
```

→ luôn nên đổi:

```
k = min(k, n-k)
```

---

### 🔹 Biên

```
C(n, 0) = C(n, n) = 1
C(n, 1) = n
```

---

### 🔹 Công thức Pascal

```
C(n, k) = C(n-1, k) + C(n-1, k-1)
```

→ nền tảng cho DP.

---

# 4️⃣ Cách 1: Tính trực tiếp (n nhỏ)

```cpp
long long C(int n, int k) {
    if (k > n) return 0;
    long long res = 1;
    for (int i = 1; i <= k; i++) {
        res = res * (n - k + i) / i;
    }
    return res;
}
```

📌 **Chỉ dùng khi n nhỏ** (tránh tràn số).

---

# 5️⃣ Cách 2: DP Pascal (n ≤ 1000)

```cpp
long long C[1001][1001];

void build() {
    for (int i = 0; i <= 1000; i++) {
        C[i][0] = C[i][i] = 1;
        for (int j = 1; j < i; j++) {
            C[i][j] = C[i-1][j] + C[i-1][j-1];
        }
    }
}
```

⛔ Không dùng cho modulo lớn vì tràn.

---

# 6️⃣ Cách 3 (QUAN TRỌNG): Tổ hợp MOD (1e9+7)

Giả sử:

```
MOD = 1e9 + 7 (số nguyên tố)
```

---

## 🔑 Ý tưởng cốt lõi

```
C(n,k) = n! · (k!)⁻¹ · ((n-k)!)⁻¹  (mod MOD)
```

👉 Cần:

* giai thừa
* nghịch đảo modulo

---

## 6.1 Precompute giai thừa

```cpp
const int MAXN = 1e6;
const long long MOD = 1e9 + 7;

long long fact[MAXN+1], invFact[MAXN+1];

long long fastPow(long long a, long long b) {
    long long res = 1;
    a %= MOD;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

void init() {
    fact[0] = 1;
    for (int i = 1; i <= MAXN; i++) {
        fact[i] = fact[i-1] * i % MOD;
    }

    invFact[MAXN] = fastPow(fact[MAXN], MOD-2);
    for (int i = MAXN-1; i >= 0; i--) {
        invFact[i] = invFact[i+1] * (i+1) % MOD;
    }
}
```

---

## 6.2 Hàm tính C(n,k)

```cpp
long long C(int n, int k) {
    if (k < 0 || k > n) return 0;
    return fact[n] * invFact[k] % MOD * invFact[n-k] % MOD;
}
```

⏱️ **O(1) mỗi truy vấn**

---

# 7️⃣ Ví dụ minh họa

### Ví dụ:

```
n = 5, k = 2
```

```
C(5,2) = 5! / (2!·3!) = 10
```

---

### Ví dụ MOD:

```
C(10^6, 5) mod 1e9+7
```

👉 chạy cực nhanh nhờ precompute.

---

# 8️⃣ Khi nào dùng cách nào?

| Trường hợp          | Cách                   |
|---------------------|------------------------|
| n ≤ 20              | Trực tiếp              |
| n ≤ 1000            | Pascal                 |
| n ≤ 1e6, nhiều test | Giai thừa + nghịch đảo |
| MOD không nguyên tố | Euclid mở rộng         |

---

# 9️⃣ Câu nhớ nằm lòng

> **Tổ hợp MOD = giai thừa × nghịch đảo giai thừa**
> **Không bao giờ chia trực tiếp trong modulo**

---

Nếu bạn muốn, mình có thể tiếp:

* 🔥 **Bài mẫu + giải**
* 🔥 **Tổ hợp khi MOD không nguyên tố**
* 🔥 **Lucas theorem (n,k lớn 10¹⁸)**

👉 chọn tiếp nhé.
