// 函数: sub_f0734c
// 地址: 0xf0734c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0_1 = Botan::BigInt::bits()
int64_t x23 = *(arg1 + 0x88)
__builtin_memset(arg2, 0, 0x18)
arg2[2].d = 1
*(arg2 + 0x18) = -1
void* result = std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg2)
**arg2 = 1
void* x9 = *arg2
int64_t x10 = *(arg2 + 8)
*(arg2 + 0x18) = -1

if ((x10 - x9) s>> 2 u>= 2)
    *(x9 + 4) = 0

if (x23 u<= x0_1 + x23 - 1)
    uint64_t i = (x0_1 + x23 - 1) u/ x23
    
    do
        void* result_1
        int64_t var_70
        int64_t var_68
        int32_t var_60
        int64_t j
        
        if (*(arg1 + 0x88) == 0)
            j = 0
        else if (&result_1 == arg2)
            j = 0
            
            do
                Botan::Modular_Reducer::square(arg1 + 8)
                void* result_4 = result_1
                
                if (result_4 != 0)
                    void* result_6 = result_4
                    Botan::deallocate_memory(result_4, (var_70 - result_4) s>> 2, 4)
                
                j += 1
            while (j != *(arg1 + 0x88))
        else
            j = 0
            
            do
                Botan::Modular_Reducer::square(arg1 + 8)
                void* result_3 = *arg2
                int128_t v0_1 = result_1.o
                int64_t x8_5 = arg2[1].q
                int64_t x11_1 = *(arg2 + 0x18)
                arg2[1].q = var_70
                *(arg2 + 0x18) = var_68
                int32_t x9_2 = arg2[2].d
                var_70 = x8_5
                var_68 = x11_1
                *arg2 = v0_1
                result_1 = result_3
                arg2[2].d = var_60
                var_60 = x9_2
                
                if (result_3 != 0)
                    void* result_5 = result_3
                    Botan::deallocate_memory(result_3, (x8_5 - result_3) s>> 2, 4)
                
                j += 1
            while (j != *(arg1 + 0x88))
        
        i -= 1
        Botan::BigInt::get_substring(arg1 + 0x60, j * i)
        *(arg1 + 0x90)
        Botan::Modular_Reducer::multiply(arg1 + 8, arg2)
        void* result_2
        
        if (&result_1 == arg2)
            result = result_1
            
            if (result != 0)
                result_2 = result
                result = Botan::deallocate_memory(result, (var_70 - result) s>> 2, 4)
        else
            int64_t x10_5 = var_70
            int64_t x11_2 = var_68
            result = *arg2
            int128_t v0_2 = result_1.o
            var_70 = arg2[1].q
            var_68 = *(arg2 + 0x18)
            arg2[1].q = x10_5
            *(arg2 + 0x18) = x11_2
            int32_t x10_6 = arg2[2].d
            result_1 = result
            *arg2 = v0_2
            arg2[2].d = var_60
            var_60 = x10_6
            
            if (result != 0)
                result_2 = result
                result = Botan::deallocate_memory(result, (var_70 - result) s>> 2, 4)
    while (i != 0)

return result
