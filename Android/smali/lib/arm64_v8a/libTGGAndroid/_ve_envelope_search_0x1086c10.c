// 函数: _ve_envelope_search
// 地址: 0x1086c10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_70 = v8
int32_t* x19 = **(arg1 + 0x88)
int64_t x10 = sx.q(x19[2])
int64_t* x8_2 = *(*(arg1 + 8) + 0x30)
int32_t x8_3 = *(arg1 + 0x24) s/ x10.d
int32_t x21 = (*(x19 + 0x100) s/ x10).d
int64_t x8_5 = sx.q(x8_3 + 2)

if (*(x19 + 0xf8) s< x8_5)
    int64_t oldmem = *(x19 + 0xf0)
    *(x19 + 0xf8) = x8_5
    *(x19 + 0xf0) = realloc(oldmem, x8_5 << 2)

int64_t x25

if (x21 s< 0)
    x25 = 0
else
    x25 = sx.q(x21)

int64_t x26 = sx.q(x8_3 - 4)

if (x25 s< x26)
    v8.d = 1
    v8:4.d = 1
    
    do
        int32_t x8_7 = x19[0x3a]
        int32_t x8_8
        
        if (x8_7 s> 0x17)
            x8_8 = 0x18
        else
            x8_8 = x8_7 + 1
        
        bool cond:4_1 = *x19 s< 1
        x19[0x3a] = x8_8
        
        if (cond:4_1)
            *(*(x19 + 0xf0) + (x25 << 2) + 8) = 0
        else
            int64_t x23_1 = 0
            int64_t i = 0
            int32_t x28_1 = 0
            
            do
                int32_t x0_2
                x0_2, v8 = sub_1086e50(x19, &x8_2[0x26a], 
                    *(*(arg1 + 0x10) + (i << 3)) + ((x25 * sx.q(x19[2])) << 2), &x19[0xe], 
                    *(x19 + 0xe0) + x23_1)
                i += 1
                x28_1 |= x0_2
                x23_1 += 0x3f0
            while (i s< sx.q(*x19))
            
            int64_t* x8_12 = *(x19 + 0xf0)
            *(x8_12 + (x25 << 2) + 8) = 0
            
            if ((x28_1 & 1) != 0)
                *(x8_12 + (x25 << 2)) = v8
            
            if ((x28_1 & 2) != 0)
                *(x8_12 + (x25 << 2)) = 1
                
                if (x25 != 0)
                    *(x8_12 + (x25 << 2) - 4) = 1
            
            if ((x28_1 & 4) != 0)
                x19[0x3a] = 0xffffffff
        
        x25 += 1
    while (x25 s< x26)

int64_t x8_16 = sx.q(x19[2])
int64_t x10_2 = x8_16 * (sx.q(x8_3) - 4)
*(x19 + 0x100) = x10_2
int64_t x14 = *x8_2
int64_t x13 = x8_2[1]
int64_t x10_3 = x10_2 - x8_16
int64_t x11_1 = x8_2[*(arg1 + 0x40)]
int64_t x9_10 = *(x19 + 0x110)
int64_t x12_3

if (x11_1 s< 0)
    x12_3 = x11_1 + 3
else
    x12_3 = x11_1

int64_t x13_1

if (x13 s< 0)
    x13_1 = x13 + 1
else
    x13_1 = x13

int64_t x14_1

if (x14 s< 0)
    x14_1 = x14 + 3
else
    x14_1 = x14

if (x9_10 s< x10_3)
    int64_t x11_3 = *(arg1 + 0x50)
    int64_t result = 1
    
    while (true)
        if (x9_10 s< x11_3 + (x12_3 s>> 2) + (x13_1 s>> 1) + (x14_1 s>> 2))
            *(x19 + 0x110) = x9_10
            
            if (x9_10 s<= x11_3 || *(*(x19 + 0xf0) + ((x9_10 s/ x8_16) << 2)) == 0)
                x9_10 += x8_16
                
                if (x9_10 s>= x10_3)
                    break
                
                continue
            else
                result = 0
                *(x19 + 0x108) = x9_10
        
        return result

return -1
