// 函数: _ZN5Botan9ct_divideERKNS_6BigIntES2_RS0_S3_
// 地址: 0xce1400
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x25 = *(arg1 + 0x18)
int64_t x23

if (x25 == -1)
    int64_t x8_1 = *arg1
    int64_t x10_1 = *(arg1 + 8)
    int64_t x9_1 = x10_1 - x8_1
    
    if (x10_1 == x8_1)
        x25 = 0
    else
        int64_t x11_1
        
        x11_1 = x9_1 s>= 0 ? x9_1 : -1
        
        int64_t x10_2 = x8_1 - x10_1
        int64_t x11_2
        
        x11_2 = x11_1 s< 1 ? x11_1 : 1
        
        x25 = x9_1 s>> 2
        int64_t x9_2
        
        x9_2 = x10_2 s> x9_1 ? x10_2 : x9_1
        
        int64_t i_3 = x11_2 * (x9_2 u>> 2)
        uint64_t x10_3 = 1
        int64_t i
        
        do
            int32_t x11_3 = *(x8_1 - 4 + (i_3 << 2))
            i = i_3
            i_3 -= 1
            x10_3 = zx.q(x10_3.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
            x25 -= x10_3
        while (i != 1)
    
    *(arg1 + 0x18) = x25
    x23 = *(arg2 + 0x18)
    
    if (x23 == -1)
        goto label_ce14b8
else
    x23 = *(arg2 + 0x18)
    
    if (x23 == -1)
    label_ce14b8:
        int64_t x8_3 = *arg2
        int64_t x10_4 = *(arg2 + 8)
        int64_t x9_4 = x10_4 - x8_3
        
        if (x10_4 == x8_3)
            x23 = 0
        else
            int64_t x11_5
            
            x11_5 = x9_4 s>= 0 ? x9_4 : -1
            
            int64_t x10_5 = x8_3 - x10_4
            int64_t x11_6
            
            x11_6 = x11_5 s< 1 ? x11_5 : 1
            
            x23 = x9_4 s>> 2
            int64_t x9_5
            
            x9_5 = x10_5 s> x9_4 ? x10_5 : x9_4
            
            int64_t i_4 = x11_6 * (x9_5 u>> 2)
            uint64_t x10_6 = 1
            int64_t i_1
            
            do
                int32_t x11_7 = *(x8_3 - 4 + (i_4 << 2))
                i_1 = i_4
                i_4 -= 1
                x10_6 = zx.q(x10_6.d) & zx.q(((x11_7 - 1) & not.d(x11_7)) s>> 0x1f)
                x23 -= x10_6
            while (i_1 != 1)
        
        *(arg2 + 0x18) = x23

int64_t i_5 = Botan::BigInt::bits()
uint32_t* result_1
__builtin_memset(&result_1, 0, 0x18)
int32_t var_68 = 1
int64_t var_70 = -1

if ((x25 & 0xfffffffffffffff8) != -8)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&result_1)

int64_t x8_6 = x23 & 0xfffffffffffffff8
int32_t var_68_1 = 1
uint32_t* var_b0
__builtin_memset(&var_b0, 0, 0x18)
int32_t var_90 = 1
int64_t var_98 = -1

if (x8_6 != -8)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_b0)

uint32_t* var_d8
__builtin_memset(&var_d8, 0, 0x18)
int32_t var_90_1 = 1
int32_t var_b8 = 1
int64_t var_c0 = -1

if (x8_6 != -8)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_d8)

int32_t var_b8_1 = 1
int64_t var_a0
int64_t var_78

if (i_5 != 0)
    int64_t i_2
    
    do
        int64_t x8_7 = *arg1
        uint64_t fp_1 = (i_5 - 1) u>> 5
        int32_t x25_2
        
        if (fp_1 u>= (*(arg1 + 8) - x8_7) s>> 2)
            x25_2 = 0
        else
            x25_2 = *(x8_7 + (fp_1 << 2))
        
        Botan::BigInt::operator*=(&var_b0)
        uint32_t* x1_4 = var_b0
        int32_t x28_1 = (i_5.d - 1) & 0x1f
        int32_t x9_11 = x25_2 & 1 << x28_1
        int64_t var_a8
        void* x8_13
        uint32_t x25_3
        
        if (var_a8 == x1_4)
            var_98 = -1
            
            if (x9_11 != 0)
                if (var_a0 == x1_4)
                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                        &var_b0)
                    x25_3 = 1
                else
                    x25_3 = 1
                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                        &var_b0)
                
                goto label_ce1614
            
            x8_13 = nullptr
        else
            var_98 = -1
            x25_3 = *x1_4 | (x9_11 != 0 ? 1 : 0)
        label_ce1614:
            *var_b0 = x25_3
            x1_4 = var_b0
            x8_13 = var_a8 - x1_4
        int64_t var_c0_1 = -1
        int32_t x0_7 = Botan::bigint_sub3(var_d8, x1_4, x8_13 s>> 2, *arg2, x23)
        uint32_t* result_3 = result_1
        void* var_80_1
        int64_t x9_15 = (var_80_1 - result_3) s>> 2
        int32_t x28_2 = (x0_7 == 0 ? 1 : 0) << x28_1
        
        if (x9_15 u<= fp_1)
            var_70 = -1
            
            if (x28_2 != 0)
                if (fp_1 u< (var_78 - result_3) s>> 2)
                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                        &result_1)
                else if (((fp_1 + 1) & 0xffffffffffffff8) + 8 u> x9_15)
                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                        &result_1)
                else if (((fp_1 + 1) & 0xffffffffffffff8) + 8 u< x9_15)
                    var_80_1 = &result_3[((fp_1 + 1) & 0xffffffffffffff8) + 8]
                
                result_1[fp_1] = x28_2
        else
            var_70 = -1
            result_1[fp_1] = result_3[fp_1] | x28_2
        
        Botan::BigInt::ct_cond_swap(&var_b0, zx.q(x0_7 == 0 ? 1 : 0))
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

sub_ce1930(arg1, arg2, &result_1, &var_b0)

if (&var_b0 != arg4)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(arg4, 
        var_b0)

*(arg4 + 0x18) = var_98
*(arg4 + 0x20) = var_90_1

if (&result_1 != arg3)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(arg3, 
        result_1)

*(arg3 + 0x18) = var_70
*(arg3 + 0x20) = var_68_1
uint32_t* x0_16 = var_d8

if (x0_16 != 0)
    uint32_t* var_d0_1 = x0_16
    int64_t var_c8
    Botan::deallocate_memory(x0_16, (var_c8 - x0_16) s>> 2, 4)

uint32_t* x0_17 = var_b0

if (x0_17 != 0)
    uint32_t* var_a8_1 = x0_17
    Botan::deallocate_memory(x0_17, (var_a0 - x0_17) s>> 2, 4)

uint32_t* result = result_1

if (result == 0)
    return result

uint32_t* result_2 = result
return Botan::deallocate_memory(result, (var_78 - result) s>> 2, 4)
