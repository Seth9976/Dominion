// 函数: _ZN5BotanmlERKNS_6BigIntEj
// 地址: 0xcdcd9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x22 = *(arg1 + 0x18)

if (x22 == -1)
    int64_t x8 = *arg1
    int64_t x10_1 = *(arg1 + 8)
    int64_t x9_1 = x10_1 - x8
    
    if (x10_1 == x8)
        x22 = 0
    else
        int64_t x11_1
        
        x11_1 = x9_1 s>= 0 ? x9_1 : -1
        
        int64_t x10_2 = x8 - x10_1
        int64_t x11_2
        
        x11_2 = x11_1 s< 1 ? x11_1 : 1
        
        x22 = x9_1 s>> 2
        int64_t x9_2
        
        x9_2 = x10_2 s> x9_1 ? x10_2 : x9_1
        
        int64_t i_4 = x11_2 * (x9_2 u>> 2)
        uint64_t x10_3 = 1
        int64_t i
        
        do
            int32_t x11_3 = *(x8 - 4 + (i_4 << 2))
            i = i_4
            i_4 -= 1
            x10_3 = zx.q(x10_3.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
            x22 -= x10_3
        while (i != 1)
    
    *(arg1 + 0x18) = x22

int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
entry_x8[4].d = 1
entry_x8[3] = -1

if (((x22 + 1) & 0xfffffffffffffff8) != -8)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(entry_x8)

entry_x8[4].d = 1

if (arg2 == 0 || x22 == 0)
    return 

entry_x8[3] = -1
void* x8_4 = *entry_x8
void* x9_4 = *arg1
int64_t i_8 = x22 & 0xfffffffffffffff8
uint32_t x11_6

if (i_8 == 0)
    x11_6 = 0
    
    if (i_8 != x22)
    label_cdcf34:
        int64_t x14_1 = i_8 << 2
        int64_t i_6 = x22 - i_8
        void* x10_4 = x8_4 + x14_1
        void* x9_5 = x9_4 + x14_1
        int64_t i_1
        
        do
            uint64_t x14_2 = zx.q(*x9_5)
            x9_5 += 4
            i_1 = i_6
            i_6 -= 1
            int64_t x14_4 = x14_2 * zx.q(arg2) + zx.q(x11_6)
            x11_6 = (x14_4 u>> 0x20).d
            *x10_4 = x14_4.d
            x10_4 += 4
        while (i_1 != 1)
else
    uint64_t x15_1 = 0
    uint64_t x11_5 = zx.q(arg2)
    void* x12_2 = x8_4 + 0x10
    void* x13_1 = x9_4 + 0x10
    int64_t i_7 = i_8
    int64_t i_2
    
    do
        i_2 = i_7
        i_7 -= 8
        int64_t x15_2 = x15_1 + zx.q(*(x13_1 - 0x10)) * x11_5
        *(x12_2 - 0x10) = x15_2.d
        int64_t x15_3 = zx.q(*(x13_1 - 0xc)) * x11_5 + (x15_2 u>> 0x20)
        *(x12_2 - 0xc) = x15_3.d
        int64_t x15_4 = zx.q(*(x13_1 - 8)) * x11_5 + (x15_3 u>> 0x20)
        *(x12_2 - 8) = x15_4.d
        int64_t x15_5 = zx.q(*(x13_1 - 4)) * x11_5 + (x15_4 u>> 0x20)
        *(x12_2 - 4) = x15_5.d
        int64_t x15_6 = zx.q(*x13_1) * x11_5 + (x15_5 u>> 0x20)
        *x12_2 = x15_6.d
        int64_t x15_7 = zx.q(*(x13_1 + 4)) * x11_5 + (x15_6 u>> 0x20)
        *(x12_2 + 4) = x15_7.d
        int64_t x15_8 = zx.q(*(x13_1 + 8)) * x11_5 + (x15_7 u>> 0x20)
        *(x12_2 + 8) = x15_8.d
        uint64_t x16_14 = zx.q(*(x13_1 + 0xc))
        x13_1 += 0x20
        int64_t x16_16 = x16_14 * x11_5 + (x15_8 u>> 0x20)
        x15_1 = x16_16 u>> 0x20
        *(x12_2 + 0xc) = x16_16.d
        x12_2 += 0x20
    while (i_2 != 8)
    x11_6 = x15_1.d
    
    if (i_8 != x22)
        goto label_cdcf34

*(x8_4 + (x22 << 2)) = x11_6
int32_t x8_5 = *(arg1 + 0x20)

if (x8_5 == 0)
    int64_t x8_6 = entry_x8[3]
    
    if (x8_6 == -1)
        int64_t x9_6 = *entry_x8
        int64_t x11_7 = entry_x8[1]
        int64_t x10_5 = x11_7 - x9_6
        
        if (x11_7 == x9_6)
            x8_6 = 0
        else
            int64_t x12_4
            
            x12_4 = x10_5 s>= 0 ? x10_5 : -1
            
            int64_t x11_8 = x9_6 - x11_7
            int64_t x12_5
            
            x12_5 = x12_4 s< 1 ? x12_4 : 1
            
            x8_6 = x10_5 s>> 2
            int64_t x10_6
            
            x10_6 = x11_8 s> x10_5 ? x11_8 : x10_5
            
            int64_t i_5 = x12_5 * (x10_6 u>> 2)
            uint64_t x11_9 = 1
            int64_t i_3
            
            do
                int32_t x12_6 = *(x9_6 - 4 + (i_5 << 2))
                i_3 = i_5
                i_5 -= 1
                x11_9 = zx.q(x11_9.d) & zx.q(((x12_6 - 1) & not.d(x12_6)) s>> 0x1f)
                x8_6 -= x11_9
            while (i_3 != 1)
        
        entry_x8[3] = x8_6
    
    x8_5 = x8_6 == 0 ? 1 : 0

entry_x8[4].d = x8_5
