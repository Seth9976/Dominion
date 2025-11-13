// 函数: _ZNK5Botan10Extensions23get_extension_object_asINS_14Cert_Extension14Subject_Key_IDEEEPKT_RKNS_3OIDE
// 地址: 0xf1fce0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* i = *(arg1 + 0x28)

if (i != 0)
    void* entry_x1
    int32_t* x8_1 = *(entry_x1 + 8)
    int64_t x9_1 = *(entry_x1 + 0x10)
    void* __offset(Botan::OID, 0x28) i_1
    
    if (x8_1 == x9_1)
        do
            i_1 = i
            i = *i
        while (i != 0)
    else
        i_1 = arg1 + 0x28
        
        while (true)
        label_f1fd24:
            int32_t* x13_1 = *(i + 0x28)
            int32_t* x14_1 = x8_1
            
            while (true)
                if (*(i + 0x30) != x13_1)
                    int32_t x15_1 = *x13_1
                    int32_t x16_1 = *x14_1
                    
                    if (x15_1 u>= x16_1)
                        if (x16_1 u< x15_1)
                            break
                        
                        x14_1 = &x14_1[1]
                        x13_1 = &x13_1[1]
                        
                        if (x9_1 == x14_1)
                            break
                        
                        continue
                
                i = *(i + 8)
                
                if (i == 0)
                    goto label_f1fd68
                
                goto label_f1fd24
            
            i_1 = i
            i = *i
            
            if (i == 0)
                break
    
label_f1fd68:
    
    if (i_1 != arg1 + 0x28)
        int32_t* x11_1 = *(i_1 + 0x28)
        int64_t x12_2 = *(i_1 + 0x30)
        
        if (x11_1 != x12_2)
            do
                if (x9_1 == x8_1)
                    return 0
                
                int32_t x13_2 = *x8_1
                int32_t x14_2 = *x11_1
                
                if (x13_2 u< x14_2)
                    return 0
                
                if (x14_2 u< x13_2)
                    break
                
                x11_1 = &x11_1[1]
                x8_1 = &x8_1[1]
            while (x12_2 != x11_1)
        
        int64_t* x19_1 = *(i_1 + 0x40)
        char var_40
        void* var_30
        
        if (x19_1 == 0)
            int64_t* x0_9 = Botan::assertion_failure("m_obj.get() is not null", &data_793a18, 
                "obj", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x306a)
            
            if ((zx.d(var_40) & 1) != 0)
                operator delete(var_30)
            
            sub_1101e04(x0_9)
            noreturn
        
        (*(*x19_1 + 8))(x19_1)
        uint32_t x8_3 = zx.d(var_40)
        
        if ((x8_3 & 1) != 0)
            operator delete(var_30)
            int64_t var_38
            
            if (var_38 != 0)
            label_f1fe10:
                int64_t result = __dynamic_cast(x19_1, _typeinfo_for_Botan::Certificate_Extension, 
                    _typeinfo_for_Botan::Cert_Extension::Subject_Key_ID, 0)
                
                if (result != 0)
                    return result
                
                void** x0_4 = __cxa_allocate_exception(0x20)
                int64_t x0_5
                int128_t v2
                x0_5, v2 = operator new(0x40)
                (*"as dynamic_cast failed")[0].o
                int64_t var_30_1 = x0_5
                v2 = data_71bff0
                __builtin_strncpy(x0_5, "Exception::get_extension_object_as dynamic_cast failed", 
                    0x37)
                var_40.o = v2
                *x0_4 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_4[1])
                *x0_4 = _vtable_for_Botan::Decoding_Error + 0x10
                __cxa_throw(x0_4, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
                noreturn
        else if (x8_3 u>= 2)
            goto label_f1fe10

return 0
