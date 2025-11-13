// 函数: _ZN5Botan17EC_Group_Data_Map16lookup_or_createERKNS_6BigIntES3_S3_S3_S3_S3_S3_RKNS_3OIDENS_15EC_Group_SourceE
// 地址: 0xd25140
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::OID* x21 = arg9.q
std::__ndk1::mutex::lock()
int64_t* x23 = *(arg1 + 0x28)
int64_t x24 = *(arg1 + 0x30)

while (true)
    Botan::BigInt** entry_x8
    
    if (x23 == x24)
        if (*(x21 + 8) == *(x21 + 0x10))
        label_d25424:
            int64_t* x0_16 = operator new(0x210)
            x0_16[2] = 0
            *x0_16 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::EC_Group_Data, std::__ndk1::allocator<Botan::EC_Group_Data> >
                + 0x10
            x0_16[1] = 0
            int32_t arg_8
            int32_t var_128_1 = arg_8
            Botan::OID* var_130_1 = x21
            Botan::EC_Group_Data::EC_Group_Data(&x0_16[3], arg2, arg3, arg4, arg5, arg6, arg7, arg8)
            Botan::BigInt** x8_19 = *(arg1 + 0x30)
            
            if (x8_19 == *(arg1 + 0x38))
                std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::EC_Group_Data>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::EC_Group_Data> > >::__push_back_slow_path<std::__ndk1::shared_ptr<Botan::EC_Group_Data> const&>(
                    arg1 + 0x28)
            else
                *x8_19 = &x0_16[3]
                x8_19[1] = x0_16
                
                if (x0_16 != 0)
                    int32_t i
                    
                    do
                        i = __stxr(__ldxr(&x0_16[1]) + 1, &x0_16[1])
                    while (i != 0)
                
                *(arg1 + 0x30) = &x8_19[2]
            
            *entry_x8 = &x0_16[3]
            entry_x8[1] = x0_16
        else
            Botan::EC_Group::EC_group_info(x21)
            Botan::BigInt* x9_7 = *entry_x8
            
            if (x9_7 == 0)
                int64_t* x19_2 = entry_x8[1]
                
                if (x19_2 != 0)
                    int64_t x9_11
                    int32_t i_1
                    
                    do
                        x9_11 = __ldaxr(&x19_2[1])
                        i_1 = __stlxr(x9_11 - 1, &x19_2[1])
                    while (i_1 != 0)
                    
                    if (x9_11 == 0)
                        (*(*x19_2 + 0x10))(x19_2)
                        std::__ndk1::__shared_weak_count::__release_weak()
                
                goto label_d25424
            
            Botan::BigInt** x8_13 = *(arg1 + 0x30)
            
            if (x8_13 == *(arg1 + 0x38))
                std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::EC_Group_Data>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::EC_Group_Data> > >::__push_back_slow_path<std::__ndk1::shared_ptr<Botan::EC_Group_Data> const&>(
                    arg1 + 0x28)
            else
                *x8_13 = x9_7
                int64_t x9_8 = entry_x8[1]
                x8_13[1] = x9_8
                
                if (x9_8 != 0)
                    int32_t i_2
                    
                    do
                        i_2 = __stxr(__ldxr(x9_8 + 8) + 1, x9_8 + 8)
                    while (i_2 != 0)
                
                *(arg1 + 0x30) = &x8_13[2]
        
        break
    
    *entry_x8 = *x23
    int64_t x8_1 = x23[1]
    entry_x8[1] = x8_1
    
    if (x8_1 != 0)
        int32_t i_3
        
        do
            i_3 = __stxr(__ldxr(x8_1 + 8) + 1, x8_1 + 8)
        while (i_3 != 0)
    
    int32_t* x8_3 = *(x21 + 8)
    int64_t x11_1 = *(x21 + 0x10)
    Botan::BigInt* x0 = *entry_x8
    int128_t var_c0
    int128_t var_a0
    int64_t var_80
    int64_t* x19_1
    int32_t x25_1
    
    if (x8_3 != x11_1)
        int32_t* x10_2 = *(x0 + 0x1c8)
        int64_t x9_3 = *(x0 + 0x1d0)
        
        if (x9_3 - x10_2 == x11_1 - x8_3)
            if (x10_2 == x9_3)
            label_d252c4:
                
                if ((Botan::EC_Group_Data::match(x0, arg2, arg3, arg4, arg5, arg6, arg7) & 1) != 0)
                    break
                
                void** x0_5 = __cxa_allocate_exception(0x20)
                Botan::OID::to_string()
                int128_t* x0_8
                int128_t v0
                x0_8, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
                    &var_c0, nullptr)
                int64_t var_90 = x0_8[1].q
                var_a0 = *x0_8
                __builtin_memset(x0_8, 0, 0x18)
                int128_t* x0_10
                int128_t v0_1
                x0_10, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    &var_a0)
                int64_t var_70 = x0_10[1].q
                var_80.o = *x0_10
                __builtin_memset(x0_10, 0, 0x18)
                *x0_5 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_5[1])
                *x0_5 = _vtable_for_Botan::Invalid_Argument + 0x10
                __cxa_throw(x0_5, _typeinfo_for_Botan::Invalid_Argument, 
                    Botan::Exception::~Exception)
                noreturn
            
            int32_t* x11_3 = x10_2
            
            while (*x11_3 == *x8_3)
                x11_3 = &x11_3[1]
                x8_3 = &x8_3[1]
                
                if (x9_3 == x11_3)
                    goto label_d252c4
        
        if (x10_2 == x9_3)
            goto label_d2524c
        
        x25_1 = 3
        x19_1 = entry_x8[1]
        
        if (x19_1 != 0)
            goto label_d25270
        
        goto label_d25278
    
label_d2524c:
    
    if ((Botan::EC_Group_Data::match(x0, arg2, arg3, arg4, arg5, arg6, arg7) & 1) != 0)
        uint32_t* x1_6 = *(x21 + 8)
        int64_t x2_5 = *(x21 + 0x10)
        
        if (x1_6 != x2_5)
            Botan::BigInt* x8_22 = *entry_x8
            
            if (*(x8_22 + 0x1c8) != *(x8_22 + 0x1d0))
                void** x0_23 = __cxa_allocate_exception(0x20, x1_6, x2_5)
                Botan::OID::to_string()
                void var_d8
                int128_t* x0_26
                int128_t v0_2
                x0_26, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
                    &var_d8, nullptr)
                int64_t var_b0 = x0_26[1].q
                var_c0 = *x0_26
                __builtin_memset(x0_26, 0, 0x18)
                int128_t* x0_28
                int128_t v0_3
                x0_28, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    &var_c0)
                int64_t var_90_1 = x0_28[1].q
                var_a0 = *x0_28
                __builtin_memset(x0_28, 0, 0x18)
                *entry_x8
                Botan::OID::to_string()
                char var_f0
                uint64_t x1_8
                uint64_t var_e0
                
                if ((zx.d(var_f0) & 1) == 0)
                    x1_8 = &var_f0 | 1
                else
                    x1_8 = var_e0
                int128_t* x0_31
                int128_t v0_4
                x0_31, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    &var_a0, x1_8)
                int64_t var_70_1 = x0_31[1].q
                var_80.o = *x0_31
                __builtin_memset(x0_31, 0, 0x18)
                *x0_23 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_23[1])
                *x0_23 = _vtable_for_Botan::Invalid_Argument + 0x10
                __cxa_throw(x0_23, _typeinfo_for_Botan::Invalid_Argument, 
                    Botan::Exception::~Exception)
                noreturn
            
            if (x8_22 + 0x1c0 != x21)
                std::__ndk1::vector<uint32_t, std::__ndk1::allocator<uint32_t> >::assign<uint32_t*>(
                    x8_22 + 0x1c8, x1_6)
        
        break
    
    x25_1 = 0
    x19_1 = entry_x8[1]
    
    if (x19_1 == 0)
    label_d25278:
        
        if (x25_1 != 3)
        label_d25280:
            
            if (x25_1 != 0)
                break
    else
    label_d25270:
        int64_t x9_4
        int32_t i_4
        
        do
            x9_4 = __ldaxr(&x19_1[1])
            i_4 = __stlxr(x9_4 - 1, &x19_1[1])
        while (i_4 != 0)
        
        if (x9_4 != 0)
            goto label_d25278
        
        (*(*x19_1 + 0x10))(x19_1)
        std::__ndk1::__shared_weak_count::__release_weak()
        
        if (x25_1 != 3)
            goto label_d25280
    
    x23 = &x23[2]

return std::__ndk1::mutex::unlock()
