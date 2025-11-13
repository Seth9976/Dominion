// 函数: _ZN5Botan6BigIntC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xcde970
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = -1
*(arg1 + 0x20) = 1
char* entry_x1
uint64_t x9 = zx.q(*entry_x1)
void* x0
int64_t x2
uint64_t x8_2
uint64_t x10_3
int32_t x20
uint64_t x11_1
void* x12_1

if ((x9.d & 1) != 0)
    x8_2 = *(entry_x1 + 8)
    
    if (x8_2 == 0)
        x20 = 0
        x10_3 = 0
        x2 = 0xa
        x0 = *(entry_x1 + 0x10) + x8_2
    else
        x10_3 = *(entry_x1 + 8)
        x8_2 = zx.q(zx.d(**(entry_x1 + 0x10)) == 0x2d ? 1 : 0)
        x11_1 = x8_2 | 2
        x20 = x8_2.d
        
        if (x10_3 u<= x11_1)
            x2 = 0xa
            x0 = *(entry_x1 + 0x10) + x8_2
        else
            x12_1 = *(entry_x1 + 0x10)
            
            if (zx.d(*(x12_1 + x8_2)) == 0x30)
                goto label_cdea18
            
            x2 = 0xa
            x0 = *(entry_x1 + 0x10) + x8_2
else
    x8_2 = zx.q(zx.d(entry_x1[1]) == 0x2d ? 1 : 0) & zx.q(x9.d u> 1 ? 1 : 0)
    x11_1 = x8_2 | 2
    x20 = x8_2.d
    
    if (x11_1 u>= x9 u>> 1 || zx.d(entry_x1[x8_2 + 1]) != 0x30)
        x2 = 0xa
        x0 = &entry_x1[x8_2 + 1]
        x10_3 = x9 u>> 1
    else
        x12_1 = &entry_x1[1]
    label_cdea18:
        uint32_t x10_5 = zx.d(*(x8_2 + x12_1 + 1))
        
        x2 = x10_5 == 0x78 ? 0x10 : 0xa
        
        if (x10_5 == 0x78)
            x8_2 = x11_1
        
        if ((x9.d & 1) == 0)
            x0 = &entry_x1[x8_2 + 1]
            x10_3 = x9 u>> 1
        else
            x10_3 = *(entry_x1 + 8)
            x0 = *(entry_x1 + 0x10) + x8_2
int128_t v0
int128_t v1
v0, v1 = Botan::BigInt::decode(x0, x10_3 - x8_2, x2)
int128_t var_50
uint64_t result
int64_t var_40

if (&var_50 == arg1)
    result = *arg1
    
    if (result != 0)
        var_50:8.q = result
        result = Botan::deallocate_memory(result, (var_40 - result) s>> 2, 4)
else
    v1 = *arg1
    *arg1 = var_50
    var_50 = v1
    int64_t x11_2 = *(arg1 + 0x10)
    int64_t x9_2 = *(arg1 + 0x18)
    result = v1.q
    *(arg1 + 0x10) = var_40
    int64_t var_38
    *(arg1 + 0x18) = var_38
    int64_t var_38_1 = x9_2
    int32_t x9_3 = *(arg1 + 0x20)
    int32_t var_30
    *(arg1 + 0x20) = var_30
    int32_t var_30_1 = x9_3
    
    if (result != 0)
        var_50:8.q = result
        result = Botan::deallocate_memory(result, (x11_2 - result) s>> 2, 4)
int32_t x8_10

if (x20 == 0)
    x8_10 = 1
else
    int64_t x8_9 = *(arg1 + 0x18)
    
    if (x8_9 == -1)
        int64_t x9_4 = *arg1
        int64_t x11_3 = *(arg1 + 8)
        int64_t x10_8 = x11_3 - x9_4
        
        if (x11_3 == x9_4)
            x8_9 = 0
        else
            int64_t x12_2
            
            x12_2 = x10_8 s>= 0 ? x10_8 : -1
            
            int64_t x11_4 = x9_4 - x11_3
            int64_t x12_3
            
            x12_3 = x12_2 s< 1 ? x12_2 : 1
            
            x8_9 = x10_8 s>> 2
            int64_t x10_9
            
            x10_9 = x11_4 s> x10_8 ? x11_4 : x10_8
            
            int64_t i_1 = x12_3 * (x10_9 u>> 2)
            uint64_t x11_5 = 1
            int64_t i
            
            do
                int32_t x12_4 = *(x9_4 - 4 + (i_1 << 2))
                i = i_1
                i_1 -= 1
                x11_5 = zx.q(x11_5.d) & zx.q(((x12_4 - 1) & not.d(x12_4)) s>> 0x1f)
                x8_9 -= x11_5
            while (i != 1)
        
        *(arg1 + 0x18) = x8_9
    
    x8_10 = x8_9 == 0 ? 1 : 0

*(arg1 + 0x20) = x8_10
return result
