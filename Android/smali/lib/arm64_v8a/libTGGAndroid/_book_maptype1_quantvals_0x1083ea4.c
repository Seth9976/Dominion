// 函数: _book_maptype1_quantvals
// 地址: 0x1083ea4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19 = arg1[1]

if (x19 s< 1)
    return 0

int64_t x20_1 = *arg1
double v0
v0.d = float.s(sx.d(x19))
double v1
v1.d = float.s(sx.d(x20_1))
v1.d = fconvert.s(1f) f/ v1.d
uint64_t result_1 = vcvtmd_s64_f64(pow(fconvert.d(v0.d), fconvert.d(v1.d)))
uint64_t result

result = result_1 s> 1 ? result_1 : 1

if (x20_1 s>= 1)
    goto label_1083f28

label_1083f04:
int64_t x10_2 = 1
int64_t x11_1 = 1

if (1 s<= x19)
    goto label_1083f6c

while (true)
    int64_t x10_1
    
    x10_1 = x10_2 s<= x19 ? 1 : -1
    
label_1083f1c:
    result += x10_1
    
    if (x20_1 s< 1)
        break
    
label_1083f28:
    int64_t x12_1 = 0
    x11_1 = 1
    x10_2 = 1
label_1083f3c:
    
    if (x19 s/ result s< x10_2)
        x10_1 = -1
        goto label_1083f1c
    
    x12_1 += 1
    
    if (0x7fffffffffffffff s/ (result + 1) s< x11_1)
        x11_1 = 0x7fffffffffffffff
    else
        x11_1 *= result + 1
    
    x10_2 *= result
    
    if (x20_1 s> x12_1)
        goto label_1083f3c
    
    if (x10_2 s<= x19)
    label_1083f6c:
        
        if (x11_1 s> x19)
            return result

goto label_1083f04
