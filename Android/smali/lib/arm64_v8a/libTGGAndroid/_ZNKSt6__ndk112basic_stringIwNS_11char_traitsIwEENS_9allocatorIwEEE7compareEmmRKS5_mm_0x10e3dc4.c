// 函数: _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7compareEmmRKS5_mm
// 地址: 0x10e3dc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg4)
uint64_t x11 = zx.q(*arg1)
int32_t temp0 = x8.d & 1
int64_t x8_1

if (temp0 == 0)
    x8_1 = arg4 + 4
else
    x8_1 = *(arg4 + 0x10)

uint64_t x10_1

if (temp0 == 0)
    x10_1 = x8 u>> 1
else
    x10_1 = *(arg4 + 8)

int64_t x9_1
uint64_t x11_1

if ((x11.d & 1) != 0)
    x11_1 = *(arg1 + 8)
    x9_1 = *(arg1 + 0x10)
else
    x9_1 = arg1 + 4
    x11_1 = x11 u>> 1

uint64_t n_4 = x11_1 - arg2

if (x11_1 u>= arg2)
    uint64_t n_1
    
    n_1 = n_4 u< arg3 ? n_4 : arg3
    
    uint64_t n_3 = x10_1 - arg5
    
    if (x10_1 u>= arg5)
        uint64_t entry_n
        uint64_t n_2
        
        n_2 = n_3 u< entry_n ? n_3 : entry_n
        
        uint64_t n
        
        n = n_2 u< n_1 ? n_2 : n_1
        
        if (n != 0)
            int64_t result = wmemcmp(x9_1 + (arg2 << 2), x8_1 + (arg5 << 2), n)
            
            if (result.d != 0)
                return result
        
        if (n_1 == n_2)
            return 0
        
        if (n_1 u>= n_2)
            return 1
        
        return 0xffffffff

sub_f28374()
noreturn
