// 函数: _ZNSt6__ndk18ios_base5pwordEi
// 地址: 0x10b02e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1
int64_t x21 = sx.q(entry_x1)
void* x19 = arg1
int64_t* result
int64_t x20_1
int64_t x23_1

if (x21 + 1 u<= *(arg1 + 0x80))
    x20_1 = *(x19 + 0x70)
    x23_1 = *(x19 + 0x78)
label_10b0398:
    int64_t x8_9
    
    if (x23_1 u< x21 + 1)
        x8_9 = x21 + 1
    else
        x8_9 = x23_1
    
    result = x20_1 + (x21 << 3)
    *(x19 + 0x78) = x8_9
else
    int64_t x8_2 = *(x19 + 0x68) << 1
    int64_t x8_3
    
    if (x8_2 u< x21 + 1)
        x8_3 = x21 + 1
    else
        x8_3 = x8_2
    
    int64_t x24_1
    
    if (x21 + 1 u< 0xfffffffffffffff)
        x24_1 = x8_3
    else
        x24_1 = 0x1fffffffffffffff
    
    int64_t x0_1 = realloc(*(x19 + 0x70), x24_1 << 3)
    
    if (x0_1 != 0)
        x23_1 = *(x19 + 0x78)
        x20_1 = x0_1
        *(x19 + 0x70) = x0_1
        
        if (x23_1 s< x24_1)
            int64_t x9_1 = x23_1 << 3
            int64_t x0_2 = x20_1 + x9_1
            int64_t x8_4 = x20_1 + (x24_1 << 3)
            int64_t x8_5
            
            if (x0_2 + 8 u> x8_4)
                x8_5 = x0_2 + 8
            else
                x8_5 = x8_4
            
            memset(x0_2, 0, (x8_5 - x9_1 + not.q(x20_1) + 8) & 0xfffffffffffffff8)
        
        *(x19 + 0x80) = x24_1
        goto label_10b0398
    
    int32_t x8_11 = *(x19 + 0x20) | 1
    bool cond:1_1 = (*(x19 + 0x24) & x8_11) != 0
    *(x19 + 0x20) = x8_11
    
    if (cond:1_1)
        sub_10b053c()
        noreturn
    
    result = &data_24babb8
    data_24babb8 = 0
return result
