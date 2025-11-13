// 函数: _ZN5Botan20mceliece_work_factorEmm
// 地址: 0xd9d844
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8_1

if ((arg1 & 0xffffffff80000000) != 0)
    x8_1 = 0x40
else if (arg1 u< 2)
    x8_1 = 0
else
    int32_t x8 = 0
    int64_t x9_1 = 1
    
    do
        x9_1 <<= 1
        x8 += 1
    while (x9_1 u< arg1)
    
    x8_1 = zx.q(x8.b)

int64_t x23 = x8_1 * arg2
double v8 = 0.0
double v9 = 0.0
int64_t x21 = arg1 - x23
double v10 = 0.0

if (arg2 != 0)
    v9 = 0.0
    int64_t x22_1 = x23
    uint64_t i = arg2
    
    do
        v9 = v9 + log(float.d(x22_1)) - log(float.d(i))
        i -= 1
        x22_1 -= 1
    while (i != 0)
    
    v10 = 0.0
    uint64_t x22_2 = arg1
    uint64_t i_1 = arg2
    
    do
        v10 = v10 + log(float.d(x22_2)) - log(float.d(i_1))
        i_1 -= 1
        x22_2 -= 1
    while (i_1 != 0)

uint64_t x8_2 = arg2 u>> 1
v9 = v10 / 0.69314718055994529 - (v9 / 0.69314718055994529 + v8)
    + log(float.d(x23) * fconvert.d(0.5) * float.d(x21) + v8 + ldexp(0, fconvert.d(1.0)) * v8)
    / 0.69314718055994529

if (x8_2 != 0)
    uint64_t x9_2 = (x21 + 1) u>> 1
    
    if (x9_2 != 0)
        uint64_t x24_1
        
        if (x8_2 - 1 u< x9_2 - 1)
            x24_1 = x8_2
        else
            x24_1 = x9_2
        
        if (arg1 - (x21 + 1) u<= 1)
            int64_t x22_4 = 0
            
            do
                double v0_7
                v0_7, v9 = sub_d9da60(arg1, x21 + 1, arg2, x22_4, 0)
                
                if (v0_7 < 0.0)
                    break
                
                x22_4 += 1
                
                if (v0_7 < v9)
                    v9 = v0_7
            while (x24_1 != x22_4)
        else
            int64_t x22_3 = 0
            
            do
                sub_d9da60(arg1, x21 + 1, arg2, x22_3, 0)
                int64_t x25_1 = 2
                double v8_2
                
                do
                    double v0_6
                    v0_6, v8_2, v9 = sub_d9da60(arg1, x21 + 1, arg2, x22_3, x25_1 - 1)
                    
                    if (v0_6 >= v8_2)
                        break
                    
                    x25_1 += 1
                    v8_2 = v0_6
                while (x23 != x25_1)
                
                if (v8_2 < 0.0)
                    break
                
                x22_3 += 1
                
                if (v8_2 < v9)
                    v9 = v8_2
            while (x22_3 != x24_1)

return vcvtd_u64_f64(v9)
