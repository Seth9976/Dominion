// 函数: _ZN5BotanrsERKNS_6BigIntEm
// 地址: 0xcdde1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x24 = *(arg1 + 0x18)
uint64_t x23 = arg2 u>> 5

if (x24 == -1)
    int64_t x8 = *arg1
    int64_t x10_1 = *(arg1 + 8)
    int64_t x9_1 = x10_1 - x8
    
    if (x10_1 == x8)
        x24 = 0
    else
        int64_t x11_1
        
        x11_1 = x9_1 s>= 0 ? x9_1 : -1
        
        int64_t x10_2 = x8 - x10_1
        int64_t x11_2
        
        x11_2 = x11_1 s< 1 ? x11_1 : 1
        
        x24 = x9_1 s>> 2
        int64_t x9_2
        
        x9_2 = x10_2 s> x9_1 ? x10_2 : x9_1
        
        int64_t i_3 = x11_2 * (x9_2 u>> 2)
        uint64_t x10_3 = 1
        int64_t i
        
        do
            int32_t x11_3 = *(x8 - 4 + (i_3 << 2))
            i = i_3
            i_3 -= 1
            x10_3 = zx.q(x10_3.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
            x24 -= x10_3
        while (i != 1)
    
    *(arg1 + 0x18) = x24

int32_t x25 = *(arg1 + 0x20)
int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
entry_x8[4].d = 1
entry_x8[3] = -1
int64_t x22

if (x24 - ((zx.q(x24.d - x23.d) & 7) + x23) == -8)
    x22 = 0
else
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(entry_x8)
    x22 = *entry_x8

entry_x8[4].d = x25
int64_t i_5

if (x24 u< x23)
    i_5 = 0
else
    i_5 = x24 - x23

entry_x8[3] = -1

if (x24 u> x23)
    int64_t x8_7
    
    if (x22 != 0)
        x8_7 = *arg1
    
    if (x22 == 0 || x8_7 == 0)
        int64_t* x0_2 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        void* x8_13 = *entry_x8
        
        if (x8_13 != 0)
            int64_t x9_7 = entry_x8[2]
            entry_x8[1] = x8_13
            Botan::deallocate_memory(x8_13, (x9_7 - x8_13) s>> 2, 4)
        
        sub_1101e04(x0_2)
        noreturn
    
    memmove(x22, x8_7 + (x23 << 2), i_5 << 2)

if (x24 u> x23)
    int32_t x9_4 = arg2.d & 0x1f
    int32_t x8_8 = 0
    int64_t i_1
    
    do
        int32_t x14_1 = (x22 - 4)[i_5]
        i_1 = i_5
        i_5 -= 1
        (x22 - 4)[i_5] = x14_1 u>> x9_4 | x8_8
        x8_8 = x14_1 << ((0x20 - x9_4) & not.d((x9_4 - 1) s>> 0x1f))
            & (0xffffffff ^ (x9_4 - 1) s>> 0x1f)
    while (i_1 != 1)

if (*(arg1 + 0x20) != 0)
    return 

int64_t x8_11 = entry_x8[3]

if (x8_11 == -1)
    int64_t x9_5 = *entry_x8
    int64_t x11_7 = entry_x8[1]
    int64_t x10_5 = x11_7 - x9_5
    
    if (x11_7 == x9_5)
        entry_x8[3] = 0
        entry_x8[4].d = 1
    else
        int64_t x12_4
        
        x12_4 = x10_5 s>= 0 ? x10_5 : -1
        
        int64_t x11_8 = x9_5 - x11_7
        int64_t x12_5
        
        x12_5 = x12_4 s< 1 ? x12_4 : 1
        
        int64_t x8_12 = x10_5 s>> 2
        int64_t x10_6
        
        x10_6 = x11_8 s> x10_5 ? x11_8 : x10_5
        
        int64_t i_4 = x12_5 * (x10_6 u>> 2)
        uint64_t x11_9 = 1
        int64_t i_2
        
        do
            int32_t x12_6 = *(x9_5 - 4 + (i_4 << 2))
            i_2 = i_4
            i_4 -= 1
            x11_9 = zx.q(x11_9.d) & zx.q(((x12_6 - 1) & not.d(x12_6)) s>> 0x1f)
            x8_12 -= x11_9
        while (i_2 != 1)
        entry_x8[3] = x8_12
        
        if (x8_12 == 0)
            entry_x8[4].d = 1
else if (x8_11 == 0)
    entry_x8[4].d = 1
