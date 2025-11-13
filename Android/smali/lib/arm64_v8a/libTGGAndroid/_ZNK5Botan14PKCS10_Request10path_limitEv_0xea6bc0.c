// 函数: _ZNK5Botan14PKCS10_Request10path_limitEv
// 地址: 0xea6bc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_result
int64_t entry_result_1 = entry_result
void* x0 = Botan::PKCS10_Request::data()
void* x0_1
int128_t v0
x0_1, v0 = operator new(0x20)
int128_t var_60 = data_71c520
__builtin_strncpy(x0_1, "X509v3.BasicConstraints", 0x18)
Botan::OID::from_string(&var_60)
int64_t* i = *(x0 + 0xc8)
int32_t* var_38
int64_t* x19_2

if (i == 0)
label_ea6cf0:
    x19_2 = nullptr
else
    int32_t* x8_1 = var_38
    int64_t var_30
    int64_t* i_1
    
    if (x8_1 == var_30)
        do
            i_1 = i
            i = *i
        while (i != 0)
    else
        i_1 = x0 + 0xc8
        
        while (true)
        label_ea6c4c:
            int32_t* x13_1 = i[5]
            int32_t* x14_1 = x8_1
            
            while (true)
                if (i[6] != x13_1)
                    int32_t x15_1 = *x13_1
                    int32_t x16_1 = *x14_1
                    
                    if (x15_1 u>= x16_1)
                        if (x16_1 u< x15_1)
                            break
                        
                        x14_1 = &x14_1[1]
                        x13_1 = &x13_1[1]
                        
                        if (var_30 == x14_1)
                            break
                        
                        continue
                
                i = i[1]
                
                if (i == 0)
                    goto label_ea6c90
                
                goto label_ea6c4c
            
            i_1 = i
            i = *i
            
            if (i == 0)
                break
    
label_ea6c90:
    
    if (i_1 == x0 + 0xc8)
    label_ea6cf0_1:
        x19_2 = nullptr
    else
        int32_t* x11_1 = i_1[5]
        int64_t x12_2 = i_1[6]
        
        if (x11_1 != x12_2)
            do
                if (var_30 == x8_1)
                    goto label_ea6cf0_1
                
                int32_t x13_2 = *x8_1
                int32_t x14_2 = *x11_1
                
                if (x13_2 u< x14_2)
                    goto label_ea6cf0_1
                
                if (x14_2 u< x13_2)
                    break
                
                x11_1 = &x11_1[1]
                x8_1 = &x8_1[1]
            while (x12_2 != x11_1)
        
        int64_t* x0_3 = i_1[8]
        
        if (x0_3 == 0)
            int64_t* x0_12 = Botan::assertion_failure("m_obj.get() is not null", &data_793a18, 
                "obj", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x306a)
            void* __offset(vtable_for_Botan::OID, 0x10) var_40_1 = _vtable_for_Botan::OID + 0x10
            
            if (var_38 != 0)
                int32_t* var_30_2 = var_38
                operator delete(var_38)
            
            if ((zx.d(var_60.b) & 1) == 0)
                sub_1101e04(x0_12)
                noreturn
            
            operator delete(x0_1)
            sub_1101e04(x0_12)
            noreturn
        
        x19_2 = (*(*x0_3 + 0x10))()

void* __offset(vtable_for_Botan::OID, 0x10) var_40 = _vtable_for_Botan::OID + 0x10

if (var_38 != 0)
    int32_t* var_30_1 = var_38
    operator delete(var_38)

if ((zx.d(var_60.b) & 1) != 0)
    operator delete(x0_1)

if (x19_2 != 0)
    void* x0_8 = __dynamic_cast(x19_2, _typeinfo_for_Botan::Certificate_Extension, 
        _typeinfo_for_Botan::Cert_Extension::Basic_Constraints, 0)
    
    if (x0_8 == 0)
        __cxa_bad_cast()
        noreturn
    
    uint32_t x21_1 = zx.d(*(x0_8 + 8))
    
    if (x21_1 != 0)
        entry_result = Botan::Cert_Extension::Basic_Constraints::get_path_limit()
    
    (*(*x19_2 + 0x30))(x19_2)
    
    if (x21_1 != 0)
        return entry_result

return 0
