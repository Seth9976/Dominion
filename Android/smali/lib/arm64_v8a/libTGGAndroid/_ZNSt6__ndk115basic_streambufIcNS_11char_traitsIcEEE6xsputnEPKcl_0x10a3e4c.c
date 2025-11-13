// 函数: _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6xsputnEPKcl
// 地址: 0x10a3e4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2

if (entry_x2 s< 1)
    return 0

int64_t x20_1 = arg2
int64_t result = 0

while (true)
    int64_t x0 = *(arg1 + 0x30)
    int64_t x8_2 = *(arg1 + 0x38)
    
    if (x0 u>= x8_2)
        if ((*(*arg1 + 0x68))(arg1, zx.q(*x20_1)) == 0xffffffff)
            break
        
        x20_1 += 1
        result += 1
        
        if (result s>= entry_x2)
            break
    else
        size_t x8_3 = x8_2 - x0
        size_t x9_1 = entry_x2 - result
        size_t x23_1
        
        x23_1 = x9_1 s< x8_3 ? x9_1 : x8_3
        
        if (x23_1 != 0)
            memcpy(x0, x20_1, x23_1)
            x0 = *(arg1 + 0x30)
        
        x20_1 += x23_1
        result += x23_1
        *(arg1 + 0x30) = x0 + x23_1
        
        if (result s>= entry_x2)
            break

return result
