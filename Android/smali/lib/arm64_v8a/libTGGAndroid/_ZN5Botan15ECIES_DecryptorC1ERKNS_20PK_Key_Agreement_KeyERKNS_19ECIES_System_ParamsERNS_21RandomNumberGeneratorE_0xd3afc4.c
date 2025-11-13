// 函数: _ZN5Botan15ECIES_DecryptorC1ERKNS_20PK_Key_Agreement_KeyERKNS_19ECIES_System_ParamsERNS_21RandomNumberGeneratorE
// 地址: 0xd3afc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::ECIES_Decryptor + 0x10
Botan::ECIES_KA_Operation::ECIES_KA_Operation(arg1 + 8, arg2, arg3.b, nullptr)
Botan::ECIES_System_Params::ECIES_System_Params(arg1 + 0x50)
*(arg1 + 0xd0) = 0
*(arg1 + 0xd8) = 0
int16_t var_80 = 0
Botan::OctetString::OctetString(arg1 + 0xe0)
__builtin_memset(arg1 + 0xf8, 0, 0x18)
void* var_70

if ((zx.d(*(arg3 + 0x3c)) & 8) == 0)
    void* x0_4 = Botan::EC_Group::data()
    
    if (*(x0_4 + 0x130) != 0)
        int64_t i_4 = *(x0_4 + 0x128)
        void* x23_1
        
        if (i_4 == -1)
            int64_t x9_1 = *(x0_4 + 0x110)
            int64_t x11_1 = *(x0_4 + 0x118)
            int64_t x10_1 = x11_1 - x9_1
            
            if (x11_1 == x9_1)
                i_4 = 0
                *(x0_4 + 0x128) = 0
                x23_1 = x0_4 + 0x110
            else
                int64_t x12_1
                
                x12_1 = x10_1 s>= 0 ? x10_1 : -1
                
                int64_t x11_2 = x9_1 - x11_1
                int64_t x12_2
                
                x12_2 = x12_1 s< 1 ? x12_1 : 1
                
                i_4 = x10_1 s>> 2
                int64_t x10_2
                
                x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
                
                int64_t i_6 = x12_2 * (x10_2 u>> 2)
                uint64_t x11_3 = 1
                int64_t i
                
                do
                    int32_t x12_3 = *(x9_1 - 4 + (i_6 << 2))
                    i = i_6
                    i_6 -= 1
                    x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                    i_4 -= x11_3
                while (i != 1)
                *(x0_4 + 0x128) = i_4
                x23_1 = x0_4 + 0x110
                
                if (i_4 u> 1)
                    goto label_d3b15c
            
        label_d3b0fc:
            
            if (i_4 != 0)
                int32_t* x9_3 = *x23_1
                int32_t x10_4 = 0
                int64_t i_1
                
                do
                    int32_t x11_4 = *x9_3
                    x9_3 = &x9_3[1]
                    i_1 = i_4
                    i_4 -= 1
                    int32_t x11_6 = (((x11_4 ^ 1) - 1) & not.d(x11_4)) s>> 0x1f
                    x10_4 = (x10_4 & x11_6)
                        | ((((x11_4 - 1) & not.d(x11_4)) s>> 0x1f | 1) & not.d(x11_6))
                while (i_1 != 1)
                
                if (x10_4 s>= 1)
                    goto label_d3b15c
        else
            x23_1 = x0_4 + 0x110
            
            if (i_4 u<= 1)
                goto label_d3b0fc
            
        label_d3b15c:
            Botan::gcd(x23_1, Botan::EC_Group::data() + 0xe8)
            int32_t var_60
            int32_t x22_2
            void* var_78_1
            void* x0_8
            
            if (var_60 == 0)
                x22_2 = 1
                x0_8 = var_80.q
                
                if (x0_8 != 0)
                    var_78_1 = x0_8
                    Botan::deallocate_memory(x0_8, (var_70 - x0_8) s>> 2, 4)
            else
                int64_t i_8
                int64_t i_5 = i_8
                
                if (i_5 == -1)
                    int64_t x9_4 = var_80.q
                    int64_t var_78
                    int64_t x10_6 = var_78 - x9_4
                    
                    if (var_78 == x9_4)
                        i_5 = 0
                        int64_t var_68 = 0
                        
                        if (i_5 == 0)
                            goto label_d3b268
                        
                        goto label_d3b20c
                    
                    int64_t x12_10
                    
                    x12_10 = x10_6 s>= 0 ? x10_6 : -1
                    
                    int64_t x11_8 = x9_4 - var_78
                    int64_t x12_11
                    
                    x12_11 = x12_10 s< 1 ? x12_10 : 1
                    
                    i_5 = x10_6 s>> 2
                    int64_t x10_7
                    
                    x10_7 = x11_8 s> x10_6 ? x11_8 : x10_6
                    
                    int64_t i_7 = x12_11 * (x10_7 u>> 2)
                    uint64_t x11_9 = 1
                    int64_t i_2
                    
                    do
                        int32_t x12_12 = *(x9_4 - 4 + (i_7 << 2))
                        i_2 = i_7
                        i_7 -= 1
                        x11_9 = zx.q(x11_9.d) & zx.q(((x12_12 - 1) & not.d(x12_12)) s>> 0x1f)
                        i_5 -= x11_9
                    while (i_2 != 1)
                    int64_t i_9 = i_5
                    
                    if (i_5 u> 1 || i_5 == 0)
                        goto label_d3b268
                    
                    goto label_d3b20c
                
                if (i_5 u<= 1 && i_5 != 0)
                label_d3b20c:
                    int32_t* x10_9 = var_80.q
                    int32_t x9_6 = 0
                    int64_t i_3
                    
                    do
                        int32_t x11_10 = *x10_9
                        x10_9 = &x10_9[1]
                        i_3 = i_5
                        i_5 -= 1
                        int32_t x11_12 = (((x11_10 ^ 1) - 1) & not.d(x11_10)) s>> 0x1f
                        x9_6 = (x9_6 & x11_12)
                            | ((((x11_10 - 1) & not.d(x11_10)) s>> 0x1f | 1) & not.d(x11_12))
                    while (i_3 != 1)
                    x22_2 = x9_6 != 0 ? 1 : 0
                    x0_8 = var_80.q
                    
                    if (x0_8 != 0)
                        var_78_1 = x0_8
                        Botan::deallocate_memory(x0_8, (var_70 - x0_8) s>> 2, 4)
                else
                label_d3b268:
                    x22_2 = 1
                    x0_8 = var_80.q
                    
                    if (x0_8 != 0)
                        var_78_1 = x0_8
                        Botan::deallocate_memory(x0_8, (var_70 - x0_8) s>> 2, 4)
            
            if (x22_2 != 0)
                void** x0_14 = __cxa_allocate_exception(0x20)
                int64_t x0_15
                int128_t v2
                x0_15, v2 = operator new(0x40)
                (*" check_mode is 0")[0].o
                int64_t var_70_1 = x0_15
                v2 = data_71a790
                __builtin_strncpy(x0_15, 
                    "ECIES: gcd of cofactor and order must be 1 if check_mode is 0", 0x3e)
                var_80.o = v2
                *x0_14 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_14[1])
                *x0_14 = _vtable_for_Botan::Invalid_Argument + 0x10
                __cxa_throw(x0_14, _typeinfo_for_Botan::Invalid_Argument, 
                    Botan::Exception::~Exception)
                noreturn

var_80 = 0
Botan::MessageAuthenticationCode::create_or_throw(arg1 + 0xb0, &var_80)

if ((zx.d(var_80.b) & 1) != 0)
    operator delete(var_70)

int64_t* x0_11 = *(arg1 + 0xd0)
int64_t var_48
*(arg1 + 0xd0) = var_48

if (x0_11 != 0)
    (*(*x0_11 + 0x10))()

var_80 = 0
Botan::Cipher_Mode::create_or_throw(arg1 + 0x90, 1, &var_80)

if ((zx.d(var_80.b) & 1) != 0)
    operator delete(var_70)

int64_t* result = *(arg1 + 0xd8)
*(arg1 + 0xd8) = var_48

if (result == 0)
    return result

return (*(*result + 8))()
