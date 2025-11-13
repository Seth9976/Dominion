// 函数: _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6xsgetnEPcl
// 地址: 0x10a3d1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2

if (entry_x2 s< 1)
    return 0

int64_t x21_1 = arg2
int64_t result = 0

do
    int64_t x1 = *(arg1 + 0x18)
    int64_t x8_2 = *(arg1 + 0x20)
    size_t x23_1
    
    if (x1 u>= x8_2)
        int32_t x0_2 = (*(*arg1 + 0x50))(arg1, x1)
        
        if (x0_2 == 0xffffffff)
            break
        
        *x21_1 = x0_2.b
        x21_1 += 1
        x23_1 = 1
    else
        size_t x8_3 = x8_2 - x1
        size_t x9_1 = entry_x2 - result
        size_t x8_4
        
        x8_4 = x9_1 s< x8_3 ? x9_1 : x8_3
        
        x23_1 = x8_4 s< 0x7fffffff ? x8_4 : 0x7fffffff
        
        if (x23_1 != 0)
            memcpy(x21_1, x1, x23_1)
            x1 = *(arg1 + 0x18)
        
        x21_1 += x23_1
        *(arg1 + 0x18) = x1 + sx.q(x23_1.d)
    
    result += x23_1
while (result s< entry_x2)

return result
