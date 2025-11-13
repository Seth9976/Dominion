// 函数: _ZN5Botan12ct_divide_u8ERKNS_6BigIntEhRS0_Rh
// 地址: 0xcd5c78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x24 = *(arg1 + 0x18)

if (x24 == -1)
    int64_t x8_1 = *arg1
    int64_t x10_1 = *(arg1 + 8)
    int64_t x9_1 = x10_1 - x8_1
    
    if (x10_1 == x8_1)
        x24 = 0
    else
        int64_t x11_1
        
        x11_1 = x9_1 s>= 0 ? x9_1 : -1
        
        int64_t x10_2 = x8_1 - x10_1
        int64_t x11_2
        
        x11_2 = x11_1 s< 1 ? x11_1 : 1
        
        x24 = x9_1 s>> 2
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
            x24 -= x10_3
        while (i != 1)
    
    *(arg1 + 0x18) = x24

int64_t i_5 = Botan::BigInt::bits()
uint32_t* result_1
__builtin_memset(&result_1, 0, 0x18)
int32_t var_70 = 1
int64_t var_78 = -1

if ((x24 & 0xfffffffffffffff8) != -8)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&result_1)

int32_t var_70_1 = 1
void* var_88_1
int64_t var_80
uint8_t x20_1
int32_t x24_1

if (i_5 == 0)
    x20_1 = arg2
    x24_1 = 0
else
    x24_1 = 0
    x20_1 = arg2
    int64_t i_1
    
    do
        int64_t x8_7 = *arg1
        uint64_t x27_1 = (i_5 - 1) u>> 5
        int32_t x9_7
        
        if (x27_1 u>= (*(arg1 + 8) - x8_7) s>> 2)
            x9_7 = 0
        else
            x9_7 = *(x8_7 + (x27_1 << 2))
        
        uint32_t* result_3 = result_1
        int32_t x28_2 = (1 & x9_7 u>> (i_5.d - 1)) | (0x7fffffff & x24_1) << 1
        int32_t x24_2 = x28_2 - zx.d(arg2)
        int32_t fp_1 = (x24_2 & not.d(x24_1 << 1)) s>> 0x1f
        int64_t x9_9 = (var_88_1 - result_3) s>> 2
        int32_t x21_1 = (fp_1 != 0xffffffff ? 1 : 0) << (i_5.d - 1)
        
        if (x9_9 u> x27_1)
            var_78 = -1
            result_1[x27_1] = result_3[x27_1] | x21_1
        else
            var_78 = -1
            
            if (x21_1 != 0)
                if (x27_1 u< (var_80 - result_3) s>> 2)
                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                        &result_1)
                else if (((x27_1 + 1) & 0xffffffffffffff8) + 8 u> x9_9)
                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                        &result_1)
                else if (((x27_1 + 1) & 0xffffffffffffff8) + 8 u< x9_9)
                    var_88_1 = &result_3[((x27_1 + 1) & 0xffffffffffffff8) + 8]
                
                result_1[x27_1] = x21_1
        
        i_1 = i_5
        i_5 -= 1
        x24_1 = (fp_1 & (x24_2 ^ x28_2)) ^ x24_2
    while (i_1 != 1)

if (*(arg1 + 0x20) == 0)
    if (var_70_1 != 1)
        var_70_1 = 1
        
        if (x24_1 != 0)
        label_cd5ef8:
            int32_t var_64 = 1
            Botan::BigInt::add(&result_1, &var_64, 1)
            x24_1 = zx.d(x20_1) - x24_1
    else
        int64_t x8_11 = var_78
        
        if (x8_11 == -1)
            uint32_t* result_4 = result_1
            void* x10_11 = var_88_1 - result_4
            
            if (var_88_1 == result_4)
                x8_11 = 0
            else
                void* x12_3
                
                x12_3 = x10_11 s>= 0 ? x10_11 : -ffffffffffffffff
                
                void* x11_9 = result_4 - var_88_1
                void* x12_4
                
                x12_4 = x12_3 s< 1 ? x12_3 : 1
                
                x8_11 = x10_11 s>> 2
                void* x10_12
                
                x10_12 = x11_9 s> x10_11 ? x11_9 : x10_11
                
                int64_t i_4 = x12_4 * (x10_12 u>> 2)
                uint64_t x11_10 = 1
                int64_t i_2
                
                do
                    int32_t x12_5 = *(result_4 - 4 + (i_4 << 2))
                    i_2 = i_4
                    i_4 -= 1
                    x11_10 = zx.q(x11_10.d) & zx.q(((x12_5 - 1) & not.d(x12_5)) s>> 0x1f)
                    x8_11 -= x11_10
                while (i_2 != 1)
            
            var_78 = x8_11
        
        var_70_1 = x8_11 == 0 ? 1 : 0
        
        if (x24_1 != 0)
            goto label_cd5ef8

*arg4 = x24_1.b

if (&result_1 != arg3)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(arg3, 
        result_1)

*(arg3 + 0x18) = var_78
*(arg3 + 0x20) = var_70_1
uint32_t* result = result_1

if (result == 0)
    return result

uint32_t* result_2 = result
return Botan::deallocate_memory(result, (var_80 - result) s>> 2, 4)
