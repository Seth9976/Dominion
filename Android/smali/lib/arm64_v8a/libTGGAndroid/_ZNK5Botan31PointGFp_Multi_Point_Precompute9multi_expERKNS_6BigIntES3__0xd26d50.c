// 函数: _ZNK5Botan31PointGFp_Multi_Point_Precompute9multi_expERKNS_6BigIntES3_
// 地址: 0xd26d50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = operator new(0x140)
__builtin_memset(x0, 0, 0x20)
*(x0 + 0x18) = -1
*(x0 + 0x20) = 0
*(x0 + 0x20) = 1
__builtin_memset(x0 + 0x28, 0, 0x20)
*(x0 + 0x40) = -1
*(x0 + 0x48) = 0
*(x0 + 0x48) = 1
__builtin_memset(x0 + 0x50, 0, 0x20)
*(x0 + 0x68) = -1
*(x0 + 0x70) = 0
*(x0 + 0x70) = 1
__builtin_memset(x0 + 0x78, 0, 0x20)
*(x0 + 0x90) = -1
*(x0 + 0x98) = 0
*(x0 + 0x98) = 1
__builtin_memset(x0 + 0xa0, 0, 0x20)
*(x0 + 0xb8) = -1
*(x0 + 0xc0) = 0
*(x0 + 0xc0) = 1
__builtin_memset(x0 + 0xc8, 0, 0x20)
*(x0 + 0xe0) = -1
*(x0 + 0xe8) = 0
*(x0 + 0xe8) = 1
__builtin_memset(x0 + 0xf0, 0, 0x20)
*(x0 + 0x108) = -1
*(x0 + 0x110) = 0
*(x0 + 0x110) = 1
__builtin_memset(x0 + 0x118, 0, 0x28)
*(x0 + 0x130) = -1
*(x0 + 0x138) = 1
void* var_48 = x0 + 0x140
int64_t x0_2 = Botan::BigInt::bits()
int64_t x0_4 = Botan::BigInt::bits()
*arg1
int64_t x24

x24 = x0_2 u< x0_4 ? x0_4 : x0_2

Botan::CurveGFp* entry_x8
int64_t result = Botan::PointGFp::PointGFp(entry_x8)
int64_t x8_2 = (x24 & 1) << 0x3f s>> 0x3f & (2 - (x24 & 1))
int64_t* entry_x2

if (x8_2 + x24 != 0)
    int64_t x23_1 = 0
    int64_t i = x8_2 + x24 - 2
    
    do
        if (x23_1 != 0)
            result = Botan::PointGFp::mult2i(entry_x8, 2)
        
        int64_t x12_1 = *arg2
        uint64_t x8_4 = i u>> 5
        int64_t x13_1 = (*(arg2 + 8) - x12_1) s>> 2
        int32_t x10_1
        
        if (x13_1 u<= x8_4)
            x10_1 = 0
        else
            x10_1 = *(x12_1 + (x8_4 << 2))
        
        int64_t x9_5 = i & 0x1f
        int32_t x11_3 = (x9_5 == 0 ? 1 : 0) | (x8_4 == (i + 2) u>> 5 ? 1 : 0)
        uint32_t x10_2
        
        if (x11_3 != 1)
            int32_t x12_2
            
            if (x13_1 u<= x8_4 + 1)
                x12_2 = 0
            else
                x12_2 = *(x12_1 + ((x8_4 + 1) << 2))
            
            x10_2 = x12_2 << 1 << not.d(i.d) | x10_1 u>> i.d
        else
            x10_2 = x10_1 u>> x9_5.d
        
        int64_t x13_3 = *entry_x2
        int64_t x14_3 = (entry_x2[1] - x13_3) s>> 2
        int32_t x12_7
        
        if (x14_3 u> x8_4)
            x12_7 = *(x13_3 + (x8_4 << 2))
            
            if (x11_3 != 0)
                goto label_d26f48
            
            goto label_d26f2c
        
        x12_7 = 0
        int32_t x9_7
        
        if (x11_3 == 0)
        label_d26f2c:
            int32_t x8_6
            
            if (x14_3 u<= x8_4 + 1)
                x8_6 = 0
            else
                x8_6 = *(x13_3 + ((x8_4 + 1) << 2))
            
            x9_7 = (x10_2 & 3) | (3 & (x8_6 << 1 << not.d(i.d) | x12_7 u>> i.d)) << 2
            
            if (x9_7 != 0)
                goto label_d26f84
        else
        label_d26f48:
            x9_7 = (x10_2 & 3) | (3 & x12_7 u>> x9_5.d) << 2
            
            if (x9_7 != 0)
            label_d26f84:
                std::__ndk1::vector<Botan::BigInt, std::__ndk1::allocator<Botan::BigInt> >* x1_1 =
                    *arg1 + mulu.dp.d(x9_7 - 1, 0x88)
                
                if (zx.d(*(arg1 + 0x18)) == 0)
                    result = Botan::PointGFp::add(entry_x8, x1_1)
                else
                    result = Botan::PointGFp::add_affine(entry_x8, x1_1)
        i -= 2
        x23_1 -= 2
    while (i != -2)

if ((*(arg2 + 0x20) == 0 ? 1 : 0) != (entry_x2[4].d == 0 ? 1 : 0))
    result = Botan::PointGFp::negate()

if (x0 == 0)
    return result

void* x8_14 = x0 + 0x140
void* x0_11

if (x8_14 == x0)
    x0_11 = x0
else
    void* x20_1 = x8_14
    
    do
        x20_1 -= 0x28
        void* x0_10 = *x20_1
        
        if (x0_10 != 0)
            int64_t x9_13 = *(x8_14 - 0x18)
            *(x8_14 - 0x20) = x0_10
            Botan::deallocate_memory(x0_10, (x9_13 - x0_10) s>> 2, 4)
        
        x8_14 = x20_1
    while (x0 != x20_1)
    
    x0_11 = x0

void* var_50_1 = x0
return operator delete(x0_11)
