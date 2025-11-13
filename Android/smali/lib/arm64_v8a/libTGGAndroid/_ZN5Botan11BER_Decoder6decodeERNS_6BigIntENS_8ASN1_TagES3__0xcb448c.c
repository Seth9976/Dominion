// 函数: _ZN5Botan11BER_Decoder6decodeERNS_6BigIntENS_8ASN1_TagES3_
// 地址: 0xcb448c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = arg2
Botan::BER_Decoder::get_next_object()
uint8_t var_90 = 0xc
int32_t var_8f
__builtin_strncpy(&var_8f, "object", 7)
void var_50
int32_t entry_x3
Botan::BER_Object::assert_is_a(&var_50, zx.q(arg3), zx.q(entry_x3))
void* var_80

if ((zx.d(var_90) & 1) != 0)
    operator delete(var_80)
char* var_48
int64_t var_40
size_t x21_1 = var_40 - var_48

if (var_40 == var_48)
    void* x0_4 = *x20
    int64_t x8_5 = x20[2]
    x20[3] = -1
    __builtin_memset(x20, 0, 0x18)
    x20[4].d = 1
    
    if (x0_4 != 0)
        Botan::deallocate_memory(x0_4, (x8_5 - x0_4) s>> 2, 4)
else if ((sx.d(*var_48) & 0x80000000) != 0)
    int64_t var_68_1
    __builtin_memset(&var_68_1, 0, 0x18)
    
    if ((x21_1 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    char* x0_6 = Botan::allocate_memory(x21_1, 1)
    char* var_60_1 = x0_6
    memcpy(x0_6, var_48, x21_1)
    int64_t i = not.q(var_48) + var_40
    
    while (i != -1)
        uint32_t x10_2 = zx.d(x0_6[i])
        x0_6[i] = x10_2.b - 1
        i -= 1
        
        if (x10_2 != 0)
            break
    
    if (var_40 != var_48)
        int64_t i_1 = 0
        
        do
            x0_6[i_1] = (not.d(zx.d(x0_6[i_1]))).b
            i_1 += 1
        while (i_1 != var_40 - var_48)
    
    var_90.q = 0
    int64_t var_88_2 = 0
    int64_t var_80_2 = 0
    int64_t var_78_3 = -1
    int32_t var_70_3 = 1
    int128_t v0_2
    int128_t v1_1
    v0_2, v1_1 = Botan::BigInt::binary_decode(&var_90, x0_6)
    uint64_t var_88_4
    uint64_t x0_8
    
    if (&var_90 == x20)
        x0_8 = *x20
        
        if (x0_8 != 0)
            var_88_4 = x0_8
            Botan::deallocate_memory(x0_8, (var_80_2 - x0_8) s>> 2, 4)
    else
        v1_1 = *x20
        *x20 = var_90.o
        var_90.o = v1_1
        int64_t x11_3 = x20[2]
        int64_t x9_9 = x20[3]
        x0_8 = v1_1.q
        x20[2] = var_80_2
        x20[3] = var_78_3
        int64_t var_78_4 = x9_9
        x20[4].d = var_70_3
        int32_t var_70_4 = x20[4].d
        
        if (x0_8 != 0)
            var_88_4 = x0_8
            Botan::deallocate_memory(x0_8, (x11_3 - x0_8) s>> 2, 4)
    char* var_60_3
    
    if (x20[4].d != 1)
        x20[4].d = 1
        
        if (x0_6 != 0)
            var_60_3 = x0_6
            Botan::deallocate_memory(x0_6, &x0_6[x21_1] - x0_6, 1)
    else
        int64_t x8_18 = x20[3]
        
        if (x8_18 == -1)
            int64_t x9_11 = *x20
            int64_t x11_4 = x20[1]
            int64_t x10_7 = x11_4 - x9_11
            
            if (x11_4 == x9_11)
                x8_18 = 0
            else
                int64_t x12_1
                
                x12_1 = x10_7 s>= 0 ? x10_7 : -1
                
                int64_t x11_5 = x9_11 - x11_4
                int64_t x12_2
                
                x12_2 = x12_1 s< 1 ? x12_1 : 1
                
                x8_18 = x10_7 s>> 2
                int64_t x10_8
                
                x10_8 = x11_5 s> x10_7 ? x11_5 : x10_7
                
                int64_t i_3 = x12_2 * (x10_8 u>> 2)
                uint64_t x11_6 = 1
                int64_t i_2
                
                do
                    int32_t x12_3 = *(x9_11 - 4 + (i_3 << 2))
                    i_2 = i_3
                    i_3 -= 1
                    x11_6 = zx.q(x11_6.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                    x8_18 -= x11_6
                while (i_2 != 1)
            
            x20[3] = x8_18
        
        x20[4].d = x8_18 == 0 ? 1 : 0
        
        if (x0_6 != 0)
            var_60_3 = x0_6
            Botan::deallocate_memory(x0_6, &x0_6[x21_1] - x0_6, 1)
else
    var_90.q = 0
    int64_t var_88_1 = 0
    int64_t var_80_1 = 0
    int64_t var_78_1 = -1
    int32_t var_70_1 = 1
    Botan::BigInt::binary_decode(&var_90, var_48)
    void* var_88_3
    void* x0_3
    
    if (&var_90 == x20)
        x0_3 = *x20
        
        if (x0_3 != 0)
            var_88_3 = x0_3
            Botan::deallocate_memory(x0_3, (var_80_1 - x0_3) s>> 2, 4)
    else
        x0_3 = *x20
        var_90.q = x0_3
        *x20 = var_90.o
        int64_t x11_1 = x20[2]
        int64_t x9_1 = x20[3]
        x20[2] = var_80_1
        x20[3] = var_78_1
        int64_t var_78_2 = x9_1
        x20[4].d = var_70_1
        int32_t var_70_2 = x20[4].d
        
        if (x0_3 != 0)
            var_88_3 = x0_3
            Botan::deallocate_memory(x0_3, (x11_1 - x0_3) s>> 2, 4)

if (var_48 != 0)
    char* var_40_1 = var_48
    int64_t var_38
    Botan::deallocate_memory(var_48, var_38 - var_48, 1)

return arg1
