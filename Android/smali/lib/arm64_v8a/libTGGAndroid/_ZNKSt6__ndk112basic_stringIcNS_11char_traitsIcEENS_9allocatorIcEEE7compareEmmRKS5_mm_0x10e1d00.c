// 函数: _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEmmRKS5_mm
// 地址: 0x10e1d00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg4)
uint64_t x11 = zx.q(*arg1)
int32_t temp0 = x8.d & 1
int64_t x8_1

if (temp0 != 0)
    x8_1 = *(arg4 + 0x10)
else
    x8_1 = arg4 + 1

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
    x9_1 = arg1 + 1
    x11_1 = x11 u>> 1

uint64_t x11_2 = x11_1 - arg2

if (x11_1 u>= arg2)
    uint64_t x19_1
    
    x19_1 = x11_2 u< arg3 ? x11_2 : arg3
    
    uint64_t x10_2 = x10_1 - arg5
    
    if (x10_1 u>= arg5)
        uint64_t entry_x5
        uint64_t x20
        
        x20 = x10_2 u< entry_x5 ? x10_2 : entry_x5
        
        uint64_t x2
        
        x2 = x20 u< x19_1 ? x20 : x19_1
        
        if (x2 != 0)
            int64_t result = memcmp(x9_1 + arg2, x8_1 + arg5, x2)
            
            if (result.d != 0)
                return result
        
        if (x19_1 == x20)
            return 0
        
        if (x19_1 u>= x20)
            return 1
        
        return 0xffffffff

sub_f28374()
noreturn
