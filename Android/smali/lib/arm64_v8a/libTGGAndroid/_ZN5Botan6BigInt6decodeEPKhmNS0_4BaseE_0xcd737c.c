// 函数: _ZN5Botan6BigInt6decodeEPKhmNS0_4BaseE
// 地址: 0xcd737c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_1 = arg2
uint8_t const* x21 = arg1
uint32_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
*(entry_x8 + 0x18) = -1
entry_x8[8] = 1

if (arg3 == 0x100)
    Botan::BigInt::binary_decode(entry_x8, x21)
else
    uint64_t var_60
    
    if (arg3 == 0x10)
        __builtin_memset(&var_60, 0, 0x18)
        int64_t var_50
        uint64_t x1_4
        int128_t var_80
        
        if ((i_1.d & 1) != 0)
            char var_34 = 0x30
            uint8_t const var_33_1 = *x21
            Botan::hex_decode_locked(&var_34, 2, true)
            var_60.o = var_80
            int64_t var_70
            var_50 = var_70
            Botan::hex_decode_locked(&x21[1], i_1 - 1, false)
            Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, Botan::secure_allocator<uint8_t> >(
                &var_60, &var_80)
            void* x0_9 = var_80.q
            
            if (x0_9 != 0)
                var_80:8.q = x0_9
                Botan::deallocate_memory(x0_9, var_70 - x0_9, 1)
            
            x1_4 = var_60
        else
            Botan::hex_decode_locked(x21, i_1, false)
            uint64_t x0_4 = var_60
            uint64_t var_58
            
            if (x0_4 != 0)
                var_58 = x0_4
                Botan::deallocate_memory(x0_4, var_50 - x0_4, 1)
            
            int128_t v0_1 = var_80
            x1_4 = var_80.q
            var_60 = x1_4
            var_58.o = v0_1
        Botan::BigInt::binary_decode(entry_x8, x1_4)
        arg1 = var_60
        
        if (arg1 != 0)
            uint8_t const* var_58_1 = arg1
            Botan::deallocate_memory(arg1, var_50 - arg1, 1)
    else
        if (arg3 != 0xa)
            void** x0_16 = __cxa_allocate_exception(0x20)
            int64_t x0_17
            int128_t v0_4
            x0_17, v0_4 = operator new(0x20)
            int64_t var_50_2 = x0_17
            var_60.o = data_71c370
            __builtin_strncpy(x0_17, "Unknown BigInt decoding method", 0x1f)
            *x0_16 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_16[1])
            *x0_16 = _vtable_for_Botan::Invalid_Argument + 0x10
            __cxa_throw(x0_16, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
            noreturn
        
        if (i_1 != 0)
            uint64_t i
            
            do
                arg1 = zx.q(*x21)
                
                if (arg1.d u> 0x20 || (1 << arg1 & 0x100002600) == 0)
                    if (arg1.d - 0x30 u>= 0xa)
                        void** x0_11 = __cxa_allocate_exception(0x20)
                        int64_t x0_12
                        int128_t v0_3
                        x0_12, v0_3 = operator new(0x40)
                        v0_3 = data_71ac10
                        int64_t var_50_1 = x0_12
                        __builtin_strncpy(x0_12, 
                            "BigInt::decode: Invalid character in decimal input", 0x33)
                        var_60.o = v0_3
                        *x0_11 = _vtable_for_Botan::Exception + 0x10
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            &x0_11[1])
                        *x0_11 = _vtable_for_Botan::Invalid_Argument + 0x10
                        __cxa_throw(x0_11, _typeinfo_for_Botan::Invalid_Argument, 
                            Botan::Exception::~Exception)
                        noreturn
                    
                    char x0 = Botan::Charset::char2digit(arg1.b)
                    Botan::BigInt::operator*=(entry_x8.d)
                    var_60.d = zx.d(x0)
                    Botan::BigInt::add(entry_x8, &var_60, 1)
                
                i = i_1
                i_1 -= 1
                x21 = &x21[1]
            while (i != 1)
