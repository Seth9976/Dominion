// 函数: _ZN5Botan6BigIntrSEm
// 地址: 0xcdb5bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = *arg1
int64_t entry_x1
uint64_t x23 = entry_x1 u>> 5
int64_t x24 = (*(arg1 + 8) - x20) s>> 2
int64_t i_3

if (x24 u< x23)
    i_3 = 0
else
    i_3 = x24 - x23

*(arg1 + 0x18) = -1

if (x24 u> x23)
    if (x20 == 0)
        Botan::BigInt* x0_3
        Botan::BigInt* x1_1
        x0_3, x1_1 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        return Botan::operator/(x0_3, x1_1) __tailcall
    
    memmove(x20, x20 + (x23 << 2), i_3 << 2)

int64_t x8_3

x8_3 = x24 u< x23 ? x24 : x23

if (x8_3 != 0)
    memset(x20 + (i_3 << 2), 0, x8_3 << 2)

if (x24 u> x23)
    int32_t x9_1 = entry_x1.d & 0x1f
    int32_t x8_4 = 0
    int64_t i
    
    do
        int32_t x14_1 = (x20 - 4)[i_3]
        i = i_3
        i_3 -= 1
        (x20 - 4)[i_3] = x14_1 u>> x9_1 | x8_4
        x8_4 = x14_1 << ((0x20 - x9_1) & not.d((x9_1 - 1) s>> 0x1f))
            & (0xffffffff ^ (x9_1 - 1) s>> 0x1f)
    while (i != 1)

if (*(arg1 + 0x20) == 0)
    int64_t x8_7 = *(arg1 + 0x18)
    
    if (x8_7 == -1)
        int64_t x9_2 = *arg1
        int64_t x11_3 = *(arg1 + 8)
        int64_t x10_2 = x11_3 - x9_2
        
        if (x11_3 == x9_2)
            *(arg1 + 0x18) = 0
            *(arg1 + 0x20) = 1
        else
            int64_t x12_3
            
            x12_3 = x10_2 s>= 0 ? x10_2 : -1
            
            int64_t x11_4 = x9_2 - x11_3
            int64_t x12_4
            
            x12_4 = x12_3 s< 1 ? x12_3 : 1
            
            int64_t x8_8 = x10_2 s>> 2
            int64_t x10_3
            
            x10_3 = x11_4 s> x10_2 ? x11_4 : x10_2
            
            int64_t i_2 = x12_4 * (x10_3 u>> 2)
            uint64_t x11_5 = 1
            int64_t i_1
            
            do
                int32_t x12_5 = *(x9_2 - 4 + (i_2 << 2))
                i_1 = i_2
                i_2 -= 1
                x11_5 = zx.q(x11_5.d) & zx.q(((x12_5 - 1) & not.d(x12_5)) s>> 0x1f)
                x8_8 -= x11_5
            while (i_1 != 1)
            *(arg1 + 0x18) = x8_8
            
            if (x8_8 == 0)
                *(arg1 + 0x20) = 1
    else if (x8_7 == 0)
        *(arg1 + 0x20) = 1

return arg1
