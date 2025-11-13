// 函数: _ZNK5Botan14PKCS10_Request14ex_constraintsEv
// 地址: 0xea658c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = Botan::PKCS10_Request::data()
void* x0_1
int128_t v0
x0_1, v0 = operator new(0x20)
int128_t var_60 = data_71c520
__builtin_strncpy(x0_1, "X509v3.ExtendedKeyUsage", 0x18)
Botan::OID::from_string(&var_60)
int64_t* i = *(x0 + 0xc8)
int32_t* result_1
int64_t* x20_2

if (i == 0)
label_ea66c0:
    x20_2 = nullptr
else
    int32_t* result_4 = result_1
    int64_t var_30
    int64_t* i_1
    
    if (result_4 == var_30)
        do
            i_1 = i
            i = *i
        while (i != 0)
    else
        i_1 = x0 + 0xc8
        
        while (true)
        label_ea661c:
            int32_t* x13_1 = i[5]
            int32_t* result_5 = result_4
            
            while (true)
                if (i[6] != x13_1)
                    int32_t x15_1 = *x13_1
                    int32_t x16_1 = *result_5
                    
                    if (x15_1 u>= x16_1)
                        if (x16_1 u< x15_1)
                            break
                        
                        result_5 = &result_5[1]
                        x13_1 = &x13_1[1]
                        
                        if (var_30 == result_5)
                            break
                        
                        continue
                
                i = i[1]
                
                if (i == 0)
                    goto label_ea6660
                
                goto label_ea661c
            
            i_1 = i
            i = *i
            
            if (i == 0)
                break
    
label_ea6660:
    
    if (i_1 == x0 + 0xc8)
    label_ea66c0_1:
        x20_2 = nullptr
    else
        int32_t* x11_1 = i_1[5]
        int64_t x12_2 = i_1[6]
        
        if (x11_1 != x12_2)
            do
                if (var_30 == result_4)
                    goto label_ea66c0_1
                
                int32_t x13_2 = *result_4
                int32_t x14_1 = *x11_1
                
                if (x13_2 u< x14_1)
                    goto label_ea66c0_1
                
                if (x14_1 u< x13_2)
                    break
                
                x11_1 = &x11_1[1]
                result_4 = &result_4[1]
            while (x12_2 != x11_1)
        
        int64_t* x0_3 = i_1[8]
        
        if (x0_3 == 0)
            int64_t* x0_11 = Botan::assertion_failure("m_obj.get() is not null", &data_793a18, 
                "obj", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x306a)
            void* __offset(vtable_for_Botan::OID, 0x10) var_40_1 = _vtable_for_Botan::OID + 0x10
            
            if (result_1 != 0)
                int32_t* result_3 = result_1
                operator delete(result_1)
            
            if ((zx.d(var_60.b) & 1) == 0)
                sub_1101e04(x0_11)
                noreturn
            
            operator delete(x0_1)
            sub_1101e04(x0_11)
            noreturn
        
        x20_2 = (*(*x0_3 + 0x10))()

int32_t* result = result_1
void* __offset(vtable_for_Botan::OID, 0x10) var_40 = _vtable_for_Botan::OID + 0x10

if (result != 0)
    int32_t* result_2 = result
    result = operator delete(result)

if ((zx.d(var_60.b) & 1) != 0)
    result = operator delete(x0_1)

std::__ndk1::vector<Botan::OID, std::__ndk1::allocator<Botan::OID> >* entry_x8

if (x20_2 == 0)
    __builtin_memset(entry_x8, 0, 0x18)
    return result

if (__dynamic_cast(x20_2, _typeinfo_for_Botan::Certificate_Extension, 
        _typeinfo_for_Botan::Cert_Extension::Extended_Key_Usage, 0) == 0)
    __cxa_bad_cast()
    noreturn

std::__ndk1::vector<Botan::OID, std::__ndk1::allocator<Botan::OID> >::vector(entry_x8)
return (*(*x20_2 + 0x30))(x20_2)
