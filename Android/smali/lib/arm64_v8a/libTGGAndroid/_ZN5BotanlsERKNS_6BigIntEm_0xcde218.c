// 函数: _ZN5BotanlsERKNS_6BigIntEm
// 地址: 0xcde218
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x23 = *(arg1 + 0x18)
uint64_t x22 = arg2 u>> 5
int64_t x21 = arg2 & 0x1f

if (x23 == -1)
    int64_t x8 = *arg1
    int64_t x10_1 = *(arg1 + 8)
    int64_t x9_1 = x10_1 - x8
    
    if (x10_1 == x8)
        x23 = 0
    else
        int64_t x11_1
        
        x11_1 = x9_1 s>= 0 ? x9_1 : -1
        
        int64_t x10_2 = x8 - x10_1
        int64_t x11_2
        
        x11_2 = x11_1 s< 1 ? x11_1 : 1
        
        x23 = x9_1 s>> 2
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
            x23 -= x10_3
        while (i != 1)
    
    *(arg1 + 0x18) = x23

int32_t x25 = *(arg1 + 0x20)
uint64_t x9_4

if (x21 != 0)
    x9_4 = x22 + 1
else
    x9_4 = x22

int64_t* entry_x8
entry_x8[4].d = 1
__builtin_memset(entry_x8, 0, 0x18)
entry_x8[3] = -1
int64_t x24

if (((x9_4 + x23) & 0xfffffffffffffff8) != -8)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(entry_x8)
    x24 = *entry_x8
    entry_x8[4].d = x25
    entry_x8[3] = -1
    
    if (x23 != 0)
        goto label_cde310
    
    goto label_cde2f4

x24 = 0
entry_x8[4].d = x25
entry_x8[3] = -1
int64_t i_2

if (x23 == 0)
label_cde2f4:
    i_2 = x23 + 1
    
    if (x23 u>= -1)
        return 
    
label_cde340:
    int32_t x9_5 = 0
    int32_t* x12_3 = x24 + (x22 << 2)
    int64_t i_1
    
    do
        int32_t x13_1 = *x12_3
        i_1 = i_2
        i_2 -= 1
        *x12_3 = x13_1 << x21.d | x9_5
        x12_3 = &x12_3[1]
        x9_5 = x13_1 u>> ((0x20 - x21.d) & not.d((x21.d - 1) s>> 0x1f))
            & (0xffffffff ^ (x21.d - 1) s>> 0x1f)
    while (i_1 != 1)
    return 

label_cde310:

if (x24 != 0)
    int64_t x1_1 = *arg1
    
    if (x1_1 != 0)
        memmove(x24 + (x22 << 2), x1_1, x23 << 2)
        i_2 = x23 + 1
        
        if (x23 u>= -1)
            return 
        
        goto label_cde340

int64_t* x0_2 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
void* x8_4 = *entry_x8

if (x8_4 != 0)
    int64_t x9_7 = entry_x8[2]
    entry_x8[1] = x8_4
    Botan::deallocate_memory(x8_4, (x9_7 - x8_4) s>> 2, 4)

sub_1101e04(x0_2)
noreturn
