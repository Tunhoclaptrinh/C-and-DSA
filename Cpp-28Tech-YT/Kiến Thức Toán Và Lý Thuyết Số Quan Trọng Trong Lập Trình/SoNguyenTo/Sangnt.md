Đây là **hàm sàng Eratosthenes** dùng để **khởi tạo mảng đánh dấu số nguyên tố** từ `0` đến `MAXN`. Mình giải thích **từng dòng – từng ý**, kèm ví dụ cho dễ hiểu.

---

## Mục đích của hàm

👉 Xác định nhanh **số nào là số nguyên tố** trong đoạn `[0, MAXN]`.

Sau khi chạy `initPrime()`:

* `prime[x] == true` → `x` là **số nguyên tố**
* `prime[x] == false` → `x` **không phải số nguyên tố**

---

## Phân tích chi tiết từng phần

### 1️⃣ Khởi tạo toàn bộ là `true`

```cpp
memset(prime, true, sizeof(prime));
```

* Gán **tất cả phần tử** của mảng `prime[]` = `true`
* Ý tưởng: *tạm thời coi tất cả đều là số nguyên tố*

Ví dụ:

```
prime = [true, true, true, true, true, ...]
```

---

### 2️⃣ Loại bỏ 0 và 1

```cpp
prime[0] = false;
prime[1] = false;
```

* `0` và `1` **không phải số nguyên tố** (định nghĩa toán học)

---

### 3️⃣ Vòng lặp chính – duyệt từ 2 đến √MAXN

```cpp
for (int i = 2; i * i <= MAXN; i++)
```

📌 Vì sao chỉ cần tới `i * i <= MAXN`?

👉 Mọi hợp số `n` đều có **ít nhất một ước ≤ √n**

➡️ Duyệt tới √MAXN là đủ, giúp **tối ưu thời gian**

---

### 4️⃣ Nếu `i` là số nguyên tố

```cpp
if (prime[i]) {
```

* Chỉ khi `i` **chưa bị đánh dấu là hợp số** → `i` là nguyên tố
* Khi đó ta dùng `i` để **loại các bội của nó**

---

### 5️⃣ Loại các bội của `i`

```cpp
for (int j = i * i; j <= MAXN; j += i) {
    prime[j] = false;
}
```

#### ❓ Vì sao bắt đầu từ `i * i`?

* Các bội nhỏ hơn như `2*i`, `3*i`, ...
  👉 **đã bị loại bởi các số nhỏ hơn rồi**

Ví dụ với `i = 5`:

```
5*2 = 10 (đã bị loại bởi 2)
5*3 = 15 (đã bị loại bởi 3)
5*4 = 20 (đã bị loại bởi 2)
👉 Bắt đầu từ 5*5 = 25
```

---

## Ví dụ minh họa (MAXN = 20)

Sau khi chạy xong:

```
Chỉ số:   0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20
prime[]:  F  F  T  T  F  T  F  T  F  F  F  T  F  T  F  F  F  T  F  T  F
```

👉 Các số nguyên tố:

```
2 3 5 7 11 13 17 19
```

---

## Độ phức tạp

* ⏱ **O(n log log n)** → rất nhanh
* 📦 Bộ nhớ: `O(n)`

---

## Khi nào nên dùng?

✔ Kiểm tra số nguyên tố **nhiều lần**
✔ Bài toán **đếm số nguyên tố**, **liệt kê**, **prefix prime**
✔ Giới hạn `MAXN` lớn (10⁶ – 10⁷)

---

Nếu bạn muốn:

* 🔹 Viết lại bằng `vector<bool>` / `bitset`
* 🔹 Giải thích bằng **hình ảnh từng bước**
* 🔹 So sánh với kiểm tra nguyên tố thông thường

👉 cứ nói, mình giải tiếp 👍
