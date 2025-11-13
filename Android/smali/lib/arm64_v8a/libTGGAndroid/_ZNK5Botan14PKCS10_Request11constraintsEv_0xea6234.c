// 函数: _ZNK5Botan14PKCS10_Request11constraintsEv
// 地址: 0xea6234
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = Botan::PKCS10_Request::data()
char var_58 = 0x1e
int64_t var_57
__builtin_strncpy(&var_57, "X509v3.KeyUsage", 0x10)
Botan::OID::from_string(&var_58)
int64_t* i = *(x0 + 0xc8)
char var_48
int32_t* var_38
int64_t* x19_2

if (i == 0)
label_ea6354:
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
        label_ea62b0:
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
                    goto label_ea62f4
                
                goto label_ea62b0
            
            i_1 = i
            i = *i
            
            if (i == 0)
                break
    
label_ea62f4:
    
    if (i_1 == x0 + 0xc8)
    label_ea6354_1:
        x19_2 = nullptr
    else
        int32_t* x11_1 = i_1[5]
        int64_t x12_2 = i_1[6]
        
        if (x11_1 != x12_2)
            do
                if (var_30 == x8_1)
                    goto label_ea6354_1
                
                int32_t x13_2 = *x8_1
                int32_t x14_2 = *x11_1
                
                if (x13_2 u< x14_2)
                    goto label_ea6354_1
                
                if (x14_2 u< x13_2)
                    break
                
                x11_1 = &x11_1[1]
                x8_1 = &x8_1[1]
            while (x12_2 != x11_1)
        
        int64_t* x0_2 = i_1[8]
        
        if (x0_2 == 0)
            int64_t* x0_10 = Botan::assertion_failure("m_obj.get() is not null", &data_793a18, 
                "obj", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x306a)
            void* __offset(vtable_for_Botan::OID, 0x10) var_40_1 = _vtable_for_Botan::OID + 0x10
            
            if (var_38 != 0)
                int32_t* var_30_2 = var_38
                operator delete(var_38)
            
            if ((zx.d(var_58) & 1) == 0)
                sub_1101e04(x0_10)
                noreturn
            
            operator delete(var_48.q)
            sub_1101e04(x0_10)
            noreturn
        
        x19_2 = (*(*x0_2 + 0x10))()

void* __offset(vtable_for_Botan::OID, 0x10) var_40 = _vtable_for_Botan::OID + 0x10

if (var_38 != 0)
    int32_t* var_30_1 = var_38
    operator delete(var_38)

if ((zx.d(var_58) & 1) != 0)
    operator delete(var_48.q)

int32_t x20

if (x19_2 == 0)
    x20 = 0
else
    void* x0_7 = __dynamic_cast(x19_2, _typeinfo_for_Botan::Certificate_Extension, 
        _typeinfo_for_Botan::Cert_Extension::Key_Usage, 0)
    
    if (x0_7 == 0)
        __cxa_bad_cast()
        noreturn
    
    x20 = *(x0_7 + 8)
    (*(*x19_2 + 0x30))(x19_2)

return zx.q(x20)
