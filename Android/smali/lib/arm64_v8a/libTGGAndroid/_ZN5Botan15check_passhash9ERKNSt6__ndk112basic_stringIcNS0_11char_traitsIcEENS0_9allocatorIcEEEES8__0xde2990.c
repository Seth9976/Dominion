// 函数: _ZN5Botan15check_passhash9ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_
// 地址: 0xde2990
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x12 = zx.q(data_23ecc00)
uint64_t x8 = zx.q(*arg2)
uint64_t i_2

if ((x12.d & 1) == 0)
    i_2 = x12 u>> 1
else
    i_2 = data_23ecc08

uint64_t x10_1

if ((x8.d & 1) == 0)
    x10_1 = x8 u>> 1
else
    x10_1 = *(arg2 + 8)

int32_t x20_2

if (x10_1 != i_2 + 0x34)
label_de2a68:
    x20_2 = 0
else
    void* x10_2 = *(arg2 + 0x10)
    
    if (i_2 != 0)
        void* __offset(
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
            0x1) x11_1
        
        if ((x8.d & 1) != 0)
            x11_1 = x10_2
        else
            x11_1 = arg2 + 1
        
        char* x12_1
        
        if ((x12.d & 1) == 0)
            x12_1 = &data_23ecc01
        else
            x12_1 = data_23ecc10
        
        uint64_t i_1 = i_2
        uint64_t i
        
        do
            if (zx.d(*x11_1) != zx.d(*x12_1))
                goto label_de2a68
            
            i = i_1
            i_1 -= 1
            x11_1 += 1
            x12_1 = &x12_1[1]
        while (i != 1)
    
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x1) x8_1
    
    if ((x8.d & 1) != 0)
        x8_1 = x10_2
    else
        x8_1 = arg2 + 1
    
    void* x21_1 = x8_1 + i_2
    size_t x0_1 = strlen(x21_1)
    void* __offset(vtable_for_Botan::PKCS5_PBKDF2, 0x10) var_98
    int128_t var_80
    int128_t var_60
    
    if (x0_1 u>= -0x10)
        std::__ndk1::__basic_string_common<true>::__throw_length_error()
    label_de2ee4:
        void** x0_18 = __cxa_allocate_exception(0x20)
        std::__ndk1::to_string(x21_1)
        int128_t* x0_21
        int128_t v0
        x0_21, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            &var_98, nullptr)
        int64_t var_70_1 = x0_21[1].q
        var_80 = *x0_21
        __builtin_memset(x0_21, 0, 0x18)
        int128_t* x0_23
        int128_t v0_1
        x0_23, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_80)
        int64_t var_50_2 = x0_23[1].q
        var_60 = *x0_23
        __builtin_memset(x0_23, 0, 0x18)
        *x0_18 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_18[1])
        *x0_18 = _vtable_for_Botan::Invalid_Argument + 0x10
        __cxa_throw(x0_18, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
        noreturn
    
    char* var_50
    char* x22_1
    
    if (x0_1 u>= 0x17)
        uint64_t x23_1 = (x0_1 + 0x10) & 0xfffffffffffffff0
        char* x0_3 = operator new(x23_1)
        x22_1 = x0_3
        var_60:8.q = x0_1
        var_50 = x0_3
        var_60.q = x23_1 | 1
        memcpy(x22_1, x21_1, x0_1)
    else
        x22_1 = &var_60 | 1
        var_60.b = (x0_1.d << 1).b
        
        if (x0_1 != 0)
            memcpy(x22_1, x21_1, x0_1)
    
    x22_1[x0_1] = 0
    uint64_t x8_5 = zx.q(var_60.b)
    int32_t temp0_1 = x8_5.d & 1
    char* x0_5
    
    if (temp0_1 != 0)
        x0_5 = var_50
    else
        x0_5 = &var_60:1
    
    uint64_t x1_1
    
    if (temp0_1 == 0)
        x1_1 = x8_5 u>> 1
    else
        x1_1 = var_60:8.q
    
    Botan::base64_decode(x0_5, x1_1, true)
    
    if ((zx.d(var_60.b) & 1) != 0)
        operator delete(var_50)
    
    char* var_48
    int64_t var_40
    char* var_40_1
    int64_t var_38
    
    if (var_40 - var_48 != 0x27)
        x20_2 = 0
        
        if (var_48 != 0)
            var_40_1 = var_48
            Botan::deallocate_memory(var_48, var_38 - var_48, 1)
    else
        uint32_t x8_9 = zx.d(*(var_48 + 1))
        
        if (x8_9 == 0)
            x20_2 = 0
            var_40_1 = var_48
            Botan::deallocate_memory(var_48, var_38 - var_48, 1)
        else
            x21_1 = zx.q(_byteswap(x8_9))
            
            if ((x21_1.d & 0xffff) u>= 0x201)
                goto label_de2ee4
            
            int64_t* var_a0
            sub_de2784(&var_a0, *var_48)
            int64_t* x8_11 = var_a0
            
            if (x8_11 == 0)
                x20_2 = 0
            else
                var_a0 = nullptr
                var_98 = _vtable_for_Botan::PKCS5_PBKDF2 + 0x10
                Botan::PBKDF::derive_key(&var_98, 0x18, arg1, &var_48[3], 0xc)
                void* x20_3 = var_80.q
                int64_t x8_12 = var_80:8.q
                __builtin_memset(&var_60, 0, 0x18)
                uint64_t x21_2 = x8_12 - x20_3
                void* var_50_1
                char* x19_2
                void* var_70
                
                if (x8_12 == x20_3)
                    x19_2 = nullptr
                    
                    if (x20_3 != 0)
                    label_de2be4:
                        var_80:8.q = x20_3
                        Botan::deallocate_memory(x20_3, var_70 - x20_3, 1)
                        x19_2 = var_60.q
                else
                    if ((x21_2 & 0xffffffff80000000) != 0)
                        int64_t* x0_26 =
                            std::__ndk1::__vector_base_common<true>::__throw_length_error()
                        
                        if ((zx.d(var_60.b) & 1) == 0)
                            if ((zx.d(var_80.b) & 1) != 0)
                                goto label_de3000
                            
                            goto label_de2fcc
                        
                        operator delete(var_50_1)
                        void* var_88
                        
                        if ((zx.d(var_80.b) & 1) == 0)
                        label_de2fcc:
                            
                            if ((zx.d(var_98.b) & 1) != 0)
                                operator delete(var_88)
                        else
                        label_de3000:
                            operator delete(var_70)
                            
                            if ((zx.d(var_98.b) & 1) != 0)
                                operator delete(var_88)
                        
                        if (var_48 != 0)
                            char* var_40_2 = var_48
                            Botan::deallocate_memory(var_48, var_38 - var_48, 1)
                        
                        sub_1101e04(x0_26)
                        noreturn
                    
                    void* x0_10 = Botan::allocate_memory(x21_2, 1)
                    x20_3 = var_80.q
                    x19_2 = x0_10
                    var_60.q = x0_10
                    var_60:8.q = x0_10
                    size_t x21_3 = var_80:8.q - x20_3
                    void* x8_14 = x0_10
                    var_50_1 = x0_10 + x21_2
                    
                    if (x21_3 s>= 1)
                        memcpy(x19_2, x20_3, x21_3)
                        x8_14 = &x19_2[x21_3]
                    
                    var_60:8.q = x8_14
                    
                    if (x20_3 != 0)
                        goto label_de2be4
                var_80.b = 0
                var_80.b |= var_48[0xf] ^ *x19_2
                var_80.b |= var_48[0x10] ^ x19_2[1]
                var_80.b |= var_48[0x11] ^ x19_2[2]
                var_80.b |= var_48[0x12] ^ x19_2[3]
                var_80.b |= var_48[0x13] ^ x19_2[4]
                var_80.b |= var_48[0x14] ^ x19_2[5]
                var_80.b |= var_48[0x15] ^ x19_2[6]
                var_80.b |= var_48[0x16] ^ x19_2[7]
                var_80.b |= var_48[0x17] ^ x19_2[8]
                var_80.b |= var_48[0x18] ^ x19_2[9]
                var_80.b |= var_48[0x19] ^ x19_2[0xa]
                var_80.b |= var_48[0x1a] ^ x19_2[0xb]
                var_80.b |= var_48[0x1b] ^ x19_2[0xc]
                var_80.b |= var_48[0x1c] ^ x19_2[0xd]
                var_80.b |= var_48[0x1d] ^ x19_2[0xe]
                var_80.b |= var_48[0x1e] ^ x19_2[0xf]
                var_80.b |= var_48[0x1f] ^ x19_2[0x10]
                var_80.b |= var_48[0x20] ^ x19_2[0x11]
                var_80.b |= var_48[0x21] ^ x19_2[0x12]
                var_80.b |= var_48[0x22] ^ x19_2[0x13]
                var_80.b |= var_48[0x23] ^ x19_2[0x14]
                var_80.b |= var_48[0x24] ^ x19_2[0x15]
                var_80.b |= var_48[0x25] ^ x19_2[0x16]
                var_80.b |= var_48[0x26] ^ x19_2[0x17]
                uint32_t x8_20 = zx.d(var_80.b)
                var_60:8.q = x19_2
                x20_2 = sx.d((x8_20.b - 1) & (not.d(x8_20)).b) s< 0 ? 1 : 0
                Botan::deallocate_memory(x19_2, var_50_1 - x19_2, 1)
                var_98 = _vtable_for_Botan::PKCS5_PBKDF2 + 0x10
                int64_t var_90_2 = 0
                
                if (x8_11 != 0)
                    (*(*x8_11 + 0x10))()
                
                int64_t* x0_15 = var_a0
                
                if (x0_15 != 0)
                    (*(*x0_15 + 0x10))()
            
            if (var_48 != 0)
                var_40_1 = var_48
                Botan::deallocate_memory(var_48, var_38 - var_48, 1)

return zx.q(x20_2)
