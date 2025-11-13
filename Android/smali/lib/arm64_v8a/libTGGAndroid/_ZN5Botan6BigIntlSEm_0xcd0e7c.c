// 函数: _ZN5Botan6BigIntlSEm
// 地址: 0xcd0e7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *arg1
int64_t x11 = *(arg1 + 8)
int64_t x21 = *(arg1 + 0x18)
int64_t x9 = x11 - x8
int64_t x10_1
int64_t x12_1

if (x21 != -1)
    x10_1 = x9 s>> 2
    x12_1 = x21
else if (x9 == 0)
    x21 = 0
    *(arg1 + 0x18) = 0
    x10_1 = x9 s>> 2
    x12_1 = x21
else
    int64_t x14_2
    
    x14_2 = x9 s>= 0 ? x9 : -1
    
    int64_t x13_11 = x8 - x11
    int64_t x14_3
    
    x14_3 = x14_2 s< 1 ? x14_2 : 1
    
    int64_t x15_1
    
    x15_1 = x13_11 s> x9 ? x13_11 : x9
    
    x10_1 = x9 s>> 2
    int64_t i_5 = x14_3 * (x15_1 u>> 2)
    uint64_t x15_3 = 1
    x21 = x10_1
    int64_t i
    
    do
        int32_t x16_1 = *(x8 - 4 + (i_5 << 2))
        i = i_5
        i_5 -= 1
        x15_3 = zx.q(x15_3.d) & zx.q(((x16_1 - 1) & not.d(x16_1)) s>> 0x1f)
        x21 -= x15_3
    while (i != 1)
    *(arg1 + 0x18) = x21
    
    if (x21 != -1)
        x10_1 = x9 s>> 2
        x12_1 = x21
    else
        int64_t x12_5
        
        x12_5 = x9 s>= 0 ? x9 : -1
        
        int64_t x12_6
        
        x12_6 = x12_5 s< 1 ? x12_5 : 1
        
        int64_t x13_12
        
        x13_12 = x13_11 s> x9 ? x13_11 : x9
        
        int64_t i_4 = x12_6 * (x13_12 u>> 2)
        uint64_t x14_4 = 1
        x12_1 = x10_1
        int64_t i_1
        
        do
            int32_t x15_4 = *(x8 - 4 + (i_4 << 2))
            i_1 = i_4
            i_4 -= 1
            x14_4 = zx.q(x14_4.d) & zx.q(((x15_4 - 1) & not.d(x15_4)) s>> 0x1f)
            x12_1 -= x14_4
        while (i_1 != 1)
        *(arg1 + 0x18) = x12_1
        x21 = -1

int64_t entry_x1
uint64_t x23 = entry_x1 u>> 5
int64_t x22 = entry_x1 & 0x1f
uint64_t x10_4
int32_t x11_2

if (x10_1 u<= x12_1 - 1)
    x11_2 = 0
    x10_4 = 0
else
    x11_2 = *(x8 + ((x12_1 - 1) << 2))
    x10_4 = zx.q(x11_2 u>> 0x10 != 0 ? 1 : 0) << 4

uint32_t x11_3 = x11_2 u>> x10_4.d
uint64_t x13_2 = zx.q(x11_3 u> 0xff ? 1 : 0) << 3
uint32_t x11_4 = x11_3 u>> x13_2.d
uint64_t x13_4 = zx.q(x11_4 u> 0xf ? 1 : 0) << 2
uint32_t x11_5 = x11_4 u>> x13_4.d
uint64_t x13_6 = zx.q(x11_5 u> 3 ? 1 : 0) << 1
uint32_t x11_6 = x11_5 u>> x13_6.d
int64_t x12_2

x12_2 = x11_6 u<= 1 ? 0x20 : 0x1f

int64_t x10_9 = x12_2 - (x13_6 | x10_4 | x13_2 | x13_4) - zx.q(x11_6 u>> (x11_6 u> 1 ? 1 : 0))
int64_t x13_8 = x21 + x23
int64_t x25

if (x10_9 u< x22)
    x25 = x13_8 + 1
else
    x25 = x13_8

int64_t x9_1 = x9 s>> 2

if (x25 u> x9_1)
    if (x25 u<= (*(arg1 + 0x10) - x8) s>> 2 || (x25 & 0xfffffffffffffff8) + 8 u> x9_1)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg1)
    else if ((x25 & 0xfffffffffffffff8) + 8 u< x9_1)
        *(arg1 + 8) = x8 + (((x25 & 0xfffffffffffffff8) + 8) << 2)

int64_t x20 = *arg1
*(arg1 + 0x18) = -1

if (x21 != 0)
    if (x20 == 0)
        uint64_t x0_4
        int64_t x1_3
        x0_4, x1_3 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        return sub_cd1114(x0_4, x1_3) __tailcall
    
    memmove(x20 + (x23 << 2), x20, x21 << 2)

if (x23 != 0)
    memset(x20, 0, x23 << 2)

if (x23 != x25)
    int32_t x8_1 = 0
    int64_t i_3 = x21 + zx.q(x10_9 u< x22 ? 1 : 0)
    int32_t* x12_4 = x20 + (x23 << 2)
    int64_t i_2
    
    do
        int32_t x13_9 = *x12_4
        i_2 = i_3
        i_3 -= 1
        *x12_4 = x13_9 << x22.d | x8_1
        x12_4 = &x12_4[1]
        x8_1 = x13_9 u>> ((0x20 - x22.d) & not.d((x22.d - 1) s>> 0x1f))
            & (0xffffffff ^ (x22.d - 1) s>> 0x1f)
    while (i_2 != 1)

return arg1
