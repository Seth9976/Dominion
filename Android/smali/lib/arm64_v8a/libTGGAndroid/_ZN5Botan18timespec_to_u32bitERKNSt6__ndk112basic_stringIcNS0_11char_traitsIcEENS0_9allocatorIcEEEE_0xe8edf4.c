// 函数: _ZN5Botan18timespec_to_u32bitERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// 地址: 0xe8edf4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
int32_t x19_1
std::__ndk1::allocator<char>* x3_1
uint32_t x20_1

if ((x8.d & 1) != 0)
    int64_t x8_3 = *(arg1 + 8)
    
    if (x8_3 == 0)
        x19_1 = 0
    else
        x3_1 = x8_3 - 1
        x20_1 = zx.d(*(*(arg1 + 0x10) + x3_1))
    label_e8ee4c:
        char var_38
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &var_38, arg1, 0, x3_1)
        int32_t x20_2
        
        if (x20_1 - 0x30 u> 9)
            uint64_t x8_6 = zx.q(x20_1 - 0x64)
            
            if (x8_6.d u> 0x15)
            label_e8eef8:
                void** x0_6 = __cxa_allocate_exception(0x20)
                std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                    "timespec_to_u32bit: Bad input ", arg1)
                *x0_6 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_6[1])
                *x0_6 = _vtable_for_Botan::Decoding_Error + 0x10
                __cxa_throw(x0_6, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
                noreturn
            
            x20_2 = 1
            
            switch (x8_6)
                case 0
                    x20_2 = 0x15180
                case 1, 2, 3, 5, 6, 7, 8, 0xa, 0xb, 0xc, 0xd, 0xe, 0x10, 0x11, 0x12, 0x13, 0x14
                    goto label_e8eef8
                case 4
                    x20_2 = 0xe10
                case 9
                    x20_2 = 0x3c
                case 0x15
                    x20_2 = 0x1e13380
        else
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                &var_38)
            x20_2 = 1
        
        x19_1 = Botan::to_u32bit(&var_38) * x20_2
        void* var_28
        
        if ((zx.d(var_38) & 1) != 0)
            operator delete(var_28)
else
    if (x8.d u>= 2)
        x3_1 = (x8 u>> 1) - 1
        x20_1 = zx.d(*(arg1 + x3_1 + 1))
        goto label_e8ee4c
    
    x19_1 = 0
return zx.q(x19_1)
