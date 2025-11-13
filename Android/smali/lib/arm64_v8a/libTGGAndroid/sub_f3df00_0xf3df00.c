// 函数: sub_f3df00
// 地址: 0xf3df00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* var_70 = nullptr
Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*(arg1 + 8))
char* x21 = *(arg1 + 0x10)
int32_t x20_1
int64_t* x1_1

if (x21 == 0)
    x20_1 = -0x1f
    x1_1 = var_70
    var_70 = nullptr
    
    if (x1_1 != 0)
        sub_f3e270(&var_70, x1_1)
else
    void* __offset(vtable_for_Botan::Null_RNG, 0x10) var_38 = _vtable_for_Botan::Null_RNG + 0x10
    size_t x0_3 = strlen(x21)
    int64_t* var_48
    
    if (x0_3 u>= -0x10)
        int64_t* x0_17 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
        *(x21 + 0x38) =
            construction_vtable_for_Botan::EC_PublicKey-in-Botan::ECDSA_PrivateKey + 0x88
        *x21 = construction_vtable_for_Botan::EC_PublicKey-in-Botan::ECDSA_PrivateKey + 0x180
        Botan::PointGFp::~PointGFp()
        int64_t* x20_3 = *(x21 + 0x48)
        
        if (x20_3 != 0)
            int64_t x9_7
            int32_t i
            
            do
                x9_7 = __ldaxr(&x20_3[1])
                i = __stlxr(x9_7 - 1, &x20_3[1])
            while (i != 0)
            
            if (x9_7 == 0)
                (*(*x20_3 + 0x10))(x20_3)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        operator delete(x21)
        
        if (var_48 != 0)
            int64_t x9_8
            int32_t i_1
            
            do
                x9_8 = __ldaxr(&var_48[1])
                i_1 = __stlxr(x9_8 - 1, &var_48[1])
            while (i_1 != 0)
            
            if (x9_8 == 0)
                (*(*var_48 + 0x10))(var_48)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        int64_t (** x1_5)() = var_70
        var_70 = nullptr
        
        if (x1_5 != 0)
            sub_f3e270(&var_70, x1_5)
        
        sub_1101e04(x0_17)
        noreturn
    
    int64_t var_68
    void* var_58
    void* x23_1
    
    if (x0_3 u>= 0x17)
        uint64_t x24_1 = (x0_3 + 0x10) & 0xfffffffffffffff0
        void* x0_5 = operator new(x24_1)
        x23_1 = x0_5
        size_t var_60_1 = x0_3
        var_58 = x0_5
        var_68 = x24_1 | 1
        memcpy(x23_1, x21, x0_3)
    else
        x23_1 = &var_68 | 1
        var_68.b = (x0_3.d << 1).b
        
        if (x0_3 != 0)
            memcpy(x23_1, x21, x0_3)
    
    *(x23_1 + x0_3) = 0
    void var_50
    Botan::EC_Group::EC_Group(&var_50)
    
    if ((zx.d(var_68.b) & 1) != 0)
        operator delete(var_58)
    
    int64_t* x0_9 = operator new(0xe0)
    __builtin_memset(&x0_9[0xe], 0, 0x20)
    *(x0_9 + 0xa0) = zx.o(0)
    __builtin_memset(&x0_9[0x18], 0, 0x20)
    x0_9[0xf] = -1
    x0_9[0x14] = -1
    x0_9[0x19] = -1
    x0_9[0x10].d = 1
    x0_9[0x15].d = 1
    x0_9[0x1a].d = 1
    *(x0_9 + 0x90) = zx.o(0)
    *(x0_9 + 0xb0) = zx.o(0)
    __builtin_memset(&x0_9[8], 0, 0x30)
    __builtin_memset(&x0_9[0x11], 0, 0x18)
    __builtin_memset(&x0_9[0x16], 0, 0x18)
    x0_9[1] = construction_vtable_for_Botan::Private_Key-in-Botan::ECDSA_PrivateKey + 0xc0
    x0_9[7] = construction_vtable_for_Botan::ECDSA_PublicKey-in-Botan::ECDSA_PrivateKey + 0x190
    *x0_9 = construction_vtable_for_Botan::ECDSA_PublicKey-in-Botan::ECDSA_PrivateKey + 0x90
    Botan::EC_PrivateKey::EC_PrivateKey(&x0_9[1], _VTT_for_Botan::ECDSA_PrivateKey + 0x20, &var_38, 
        &var_50)
    int64_t* x1_4 = var_70
    var_70 = x0_9
    x0_9[7] = _vtable_for_Botan::ECDSA_PrivateKey + 0x320
    *x0_9 = _vtable_for_Botan::ECDSA_PrivateKey + 0x98
    x0_9[1] = _vtable_for_Botan::ECDSA_PrivateKey + 0x1e8
    
    if (x1_4 != 0)
        sub_f3e270(&var_70, x1_4)
    
    if (var_48 != 0)
        int64_t x9_4
        int32_t i_2
        
        do
            x9_4 = __ldaxr(&var_48[1])
            i_2 = __stlxr(x9_4 - 1, &var_48[1])
        while (i_2 != 0)
        
        if (x9_4 == 0)
            (*(*var_48 + 0x10))(var_48)
            std::__ndk1::__shared_weak_count::__release_weak()
    
    int64_t* x0_14 = operator new(0x18)
    int64_t* x8_11 = var_70
    var_70 = nullptr
    x0_14[1].d = 0x7f96385e
    void* x8_12
    
    if (x8_11 == 0)
        x8_12 = nullptr
    else
        x8_12 = &x8_11[1]
    
    x0_14[2] = x8_12
    *x0_14 = _vtable_for_botan_privkey_struct + 0x10
    x20_1 = 0
    **(arg1 + 0x18) = x0_14
    x1_1 = var_70
    var_70 = nullptr
    
    if (x1_1 != 0)
        sub_f3e270(&var_70, x1_1)
return zx.q(x20_1)
