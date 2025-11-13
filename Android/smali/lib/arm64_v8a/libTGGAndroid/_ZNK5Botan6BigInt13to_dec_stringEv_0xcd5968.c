// 函数: _ZNK5Botan6BigInt13to_dec_stringEv
// 地址: 0xcd5968
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* result_1
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&result_1)
void* entry_x0
int64_t x8 = *(entry_x0 + 0x18)
void* var_90_1
__builtin_memset(&var_90_1, 0, 0x18)
int32_t var_58 = 1
int64_t var_60 = x8

if (x8 == -1)
label_cd59c8:
    int32_t* result_4 = result_1
    int64_t var_70
    void* x10_1 = var_70 - result_4
    
    if (var_70 == result_4)
        x8 = 0
        var_60 = 0
        goto label_cd5a40
    
    void* x12_1
    
    x12_1 = x10_1 s>= 0 ? x10_1 : -ffffffffffffffff
    
    void* x11_2 = result_4 - var_70
    void* x12_2
    
    x12_2 = x12_1 s< 1 ? x12_1 : 1
    
    x8 = x10_1 s>> 2
    void* x10_2
    
    x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
    
    int64_t i_1 = x12_2 * (x10_2 u>> 2)
    uint64_t x11_3 = 1
    int64_t i
    
    do
        int32_t x12_3 = *(result_4 - 4 + (i_1 << 2))
        i = i_1
        i_1 -= 1
        x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
        x8 -= x11_3
    while (i != 1)
    var_60 = x8
    
    if (x8 u<= 1)
        goto label_cd5a40
    
    goto label_cd5a8c

while (true)
    void* var_88_1
    int64_t var_68
    char* entry_x8
    
    if (x8 u<= 1)
    label_cd5a40:
        
        if (x8 != 0)
            int32_t* result_5 = result_1
            int32_t x10_4 = 0
        label_cd5a4c:
            int32_t x11_4 = *result_5
            result_5 = &result_5[1]
            int64_t temp0_1 = x8
            x8 -= 1
            int32_t x11_6 = ((x11_4 - 1) & not.d(x11_4)) s>> 0x1f
            x10_4 = (x10_4 & x11_6) | (not.d(x11_6) & 1)
            
            if (temp0_1 != 1)
                goto label_cd5a4c
            
            if (x10_4 s>= 1)
                goto label_cd5a8c
    else
    label_cd5a8c:
        uint8_t var_44
        Botan::ct_divide_u8(&result_1, 0xa, &result_1, &var_44)
        uint8_t* x8_1 = var_88_1
        void* var_80_1
        
        if (x8_1 == var_80_1)
            void* x20_1 = var_90_1
            size_t x21_1 = x8_1 - x20_1
            
            if (x21_1 + 1 s< 0)
                int64_t* x0_11 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
                void* x0_12
                
                if ((zx.d(*entry_x8) & 1) == 0)
                    x0_12 = var_90_1
                    
                    if (x0_12 != 0)
                        goto label_cd5c44
                    
                    goto label_cd5c28
                
                operator delete(*(entry_x8 + 0x10))
                x0_12 = var_90_1
                int32_t* result_6
                int32_t* result_3
                
                if (x0_12 == 0)
                label_cd5c28:
                    result_3 = result_1
                    
                    if (result_3 != 0)
                        result_6 = result_3
                        Botan::deallocate_memory(result_3, (var_68 - result_3) s>> 2, 4)
                else
                label_cd5c44:
                    void* var_88_3 = x0_12
                    operator delete(x0_12)
                    result_3 = result_1
                    
                    if (result_3 != 0)
                        result_6 = result_3
                        Botan::deallocate_memory(result_3, (var_68 - result_3) s>> 2, 4)
                sub_1101e04(x0_11)
                noreturn
            
            int64_t x9_4 = x21_1 << 1
            int64_t x8_4
            
            if (x9_4 u< x21_1 + 1)
                x8_4 = x21_1 + 1
            else
                x8_4 = x9_4
            
            int64_t x22_1
            
            x22_1 = x21_1 u< 0x3fffffffffffffff ? x8_4 : 0x7fffffffffffffff
            
            void* x23_1
            
            if (x22_1 == 0)
                x23_1 = nullptr
            else
                x23_1 = operator new(x22_1)
            
            void* x26_1 = x23_1 + x21_1
            *x26_1 = var_44
            
            if (x21_1 s>= 1)
                memcpy(x23_1, x20_1, x21_1)
            
            var_90_1 = x23_1
            var_88_1 = x26_1 + 1
            var_80_1 = x23_1 + x22_1
            
            if (x20_1 != 0)
                operator delete(x20_1)
        else
            *x8_1 = var_44
            var_88_1 = &x8_1[1]
        
        if (var_58 != 0)
            x8 = var_60
            
            if (x8 == -1)
                break
            
            continue
    
    void* x20_2 = var_88_1
    __builtin_memset(entry_x8, 0, 0x18)
    
    while (x20_2 != var_90_1)
        x20_2 -= 1
        Botan::Charset::digit2char(*x20_2)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
            entry_x8.b)
    
    uint64_t x8_9 = zx.q(*entry_x8)
    uint64_t x8_10
    
    if ((x8_9.d & 1) == 0)
        x8_10 = x8_9 u>> 1
    else
        x8_10 = *(entry_x8 + 8)
    
    if (x8_10 == 0)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            entry_x8)
        x20_2 = var_90_1
    
    if (x20_2 != 0)
        void* var_88_2 = x20_2
        operator delete(x20_2)
    
    int32_t* result = result_1
    
    if (result == 0)
        return result
    
    int32_t* result_2 = result
    return Botan::deallocate_memory(result, (var_68 - result) s>> 2, 4)

goto label_cd59c8
