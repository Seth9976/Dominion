// 函数: _ZNK5Botan17Ed25519_PublicKey22create_verification_opERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
// 地址: 0xd4744c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x2
uint64_t x11 = zx.q(*entry_x2)
uint64_t x9 = *(entry_x2 + 8)
int32_t x10 = x11.d & 1
uint64_t x11_1 = x11 u>> 1
uint64_t x12

x12 = x10 == 0 ? x11_1 : x9

if (x12 != 4)
    goto label_d474bc

char var_48

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        entry_x2, 0, -ffffffffffffffff, "base") != 0)
    uint64_t x8 = zx.q(*entry_x2)
    x9 = *(entry_x2 + 8)
    x10 = x8.d & 1
    x11_1 = x8 u>> 1
label_d474bc:
    uint64_t x8_1
    
    if ((x10 & 0xff) == 0)
        x8_1 = x11_1
    else
        x8_1 = x9
    
    if (x8_1 != 0)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x0_13 = __cxa_allocate_exception(0x20)
        (*(*arg1 + 0x10))(arg1)
        Botan::Provider_Not_Found::Provider_Not_Found(x0_13, &var_48)
        __cxa_throw(x0_13, _typeinfo_for_Botan::Provider_Not_Found, Botan::Exception::~Exception)
        noreturn

uint64_t x10_1 = zx.q(*arg2)
uint64_t x8_2 = *(arg2 + 8)
int32_t x9_1 = x10_1.d & 1
uint64_t x10_2 = x10_1 u>> 1
uint64_t x11_2

x11_2 = x9_1 == 0 ? x10_2 : x8_2

int64_t* result
struct Botan::PK_Ops::Verification::Botan::(anonymous namespace)::Ed25519_Hashed_Verify_Operation::VTable
    *** entry_x8

if (x11_2 == 0)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg2, 0, -ffffffffffffffff, &data_793a18) != 0)
        uint64_t x10_3 = zx.q(*arg2)
        x8_2 = *(arg2 + 8)
        x9_1 = x10_3.d & 1
        x10_2 = x10_3 u>> 1
        uint64_t x11_5
        
        if ((x9_1 & 0xff) == 0)
            x11_5 = x10_2
        else
            x11_5 = x8_2
        
        if (x11_5 != 8)
            goto label_d474f0
        
        goto label_d47568
    
label_d47618:
    result = operator new(0x28)
    result[2] = 0
    result[3] = 0
    result[4] = arg1
    *result = &_vtable_for_Botan::(anonymous namespace)::Ed25519_Pure_Verify_Operation{for `Botan::PK_Ops::Verification'}
    result[1] = 0
    *entry_x8 = result
else
    uint64_t x11_3
    
    if ((x9_1 & 0xff) == 0)
        x11_3 = x10_2
    else
        x11_3 = x8_2
    
    if (x11_3 == 8)
    label_d47568:
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                arg2, 0, -ffffffffffffffff, "Identity") == 0)
            goto label_d47618
        
        uint64_t x10_4 = zx.q(*arg2)
        x8_2 = *(arg2 + 8)
        x9_1 = x10_4.d & 1
        x10_2 = x10_4 u>> 1
        uint64_t x11_6
        
        if ((x9_1 & 0xff) == 0)
            x11_6 = x10_2
        else
            x11_6 = x8_2
        
        if (x11_6 == 4)
            goto label_d475a8
    else
    label_d474f0:
        uint64_t x11_4
        
        if ((x9_1 & 0xff) == 0)
            x11_4 = x10_2
        else
            x11_4 = x8_2
        
        if (x11_4 == 4)
        label_d475a8:
            
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    arg2, 0, -ffffffffffffffff, "Pure") == 0)
                goto label_d47618
            
            uint64_t x10_5 = zx.q(*arg2)
            uint64_t x8_5
            
            if ((zx.d(x10_5.b) & 1) == 0)
                x8_5 = x10_5 u>> 1
            else
                x8_5 = *(arg2 + 8)
            
            if (x8_5 != 9)
                goto label_d475f4
            
            goto label_d475e8
    
    uint64_t x8_3
    
    if ((x9_1 & 0xff) == 0)
        x8_3 = x10_2
    else
        x8_3 = x8_2
    
    if (x8_3 == 9)
    label_d475e8:
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                arg2, 0, -ffffffffffffffff, "Ed25519ph") != 0)
            goto label_d475f4
        
        struct Botan::PK_Ops::Verification::Botan::(anonymous namespace)::Ed25519_Hashed_Verify_Operation::VTable
            ** x0_11 = operator new(0x30)
        var_48 = 0xe
        int32_t var_47
        __builtin_strncpy(&var_47, "SHA-512", 8)
        result = sub_d4776c(x0_11, arg1, &var_48, 1)
        uint32_t x8_6 = zx.d(var_48)
        *entry_x8 = x0_11
        void* var_38
        
        if ((x8_6 & 1) != 0)
            return operator delete(var_38)
    else
    label_d475f4:
        struct Botan::PK_Ops::Verification::Botan::(anonymous namespace)::Ed25519_Hashed_Verify_Operation::VTable
            ** x0_10 = operator new(0x30)
        result = sub_d4776c(x0_10, arg1, arg2, 0)
        *entry_x8 = x0_10
return result
