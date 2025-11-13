// 函数: _ZN5Botan13DH_PrivateKeyC1ERNS_21RandomNumberGeneratorERKNS_8DL_GroupERKNS_6BigIntE
// 地址: 0xd0fc60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x20) = 0
*(arg1 + 0x28) = 0
void* __offset(Botan::RandomNumberGenerator, 0x18) x26_1 = arg1 + 0x18
*x26_1 = 0
*(arg1 + 0x30) = -1
*(arg1 + 0x38) = 1
*(arg1 + 0x40) = 0
void* __offset(Botan::RandomNumberGenerator, 0x58) x20_1 = arg1 + 0x58
*x20_1 = 0
*(arg1 + 0x70) = -1
*(arg1 + 0x78) = 1
*(arg1 + 0x60) = 0
*(arg1 + 0x68) = 0
*arg1 = _vtable_for_Botan::DH_PrivateKey + 0xa0
*(arg1 + 8) = _vtable_for_Botan::DH_PrivateKey + 0x1f8
*(arg1 + 0x10) = _vtable_for_Botan::DH_PrivateKey + 0x340
*(arg1 + 0x48) = 0
*(arg1 + 0x50) = _vtable_for_Botan::DH_PrivateKey + 0x490
int64_t x9_1 = *arg3
int64_t x8_1 = *(arg3 + 8)
Botan::RandomNumberGenerator& x19 = arg1
uint32_t** entry_x3

if (x8_1 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_1 + 8) + 1, x8_1 + 8)
    while (i != 0)
    int64_t* x25_1 = *(x19 + 0x48)
    *(x19 + 0x40) = x9_1
    *(x19 + 0x48) = x8_1
    
    if (x25_1 != 0)
        int64_t x9_2
        int32_t i_1
        
        do
            x9_2 = __ldaxr(&x25_1[1])
            i_1 = __stlxr(x9_2 - 1, &x25_1[1])
        while (i_1 != 0)
        
        if (x9_2 == 0)
            (*(*x25_1 + 0x10))(x25_1)
            std::__ndk1::__shared_weak_count::__release_weak()
    
    if (entry_x3[4].d != 0)
        goto label_d0fd54
    
    goto label_d0fe20

*(x19 + 0x40) = x9_1
*(x19 + 0x48) = x8_1
Botan::RandomNumberGenerator& var_80
int64_t var_70
int64_t var_68
int32_t var_60

if (entry_x3[4].d == 0)
label_d0fe20:
    
    if (x20_1 != entry_x3)
        entry_x3[1]
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(x20_1, 
            *entry_x3)
    
    int32_t x9_6 = *(x19 + 0x38)
    *(x19 + 0x70) = entry_x3[3]
    *(x19 + 0x78) = entry_x3[4].d
    
    if (x9_6 != 0)
        int64_t i_7 = *(x19 + 0x30)
        
        if (i_7 == -1)
            int64_t x9_9 = *(x19 + 0x18)
            int64_t x11_13 = *(x19 + 0x20)
            int64_t x10_9 = x11_13 - x9_9
            
            if (x11_13 == x9_9)
                i_7 = 0
                *(x19 + 0x30) = 0
            label_d0ff7c:
                
                if (i_7 == 0)
                label_d0ffbc:
                    *(Botan::DL_Group::data() + 0x148)
                    Botan::Montgomery_Exponentation_State::exponentiation(
                        *(Botan::DL_Group::data() + 0x138), x20_1)
                    Botan::RandomNumberGenerator& var_78_2
                    
                    if (x26_1 == &var_80)
                        arg1 = var_80
                        
                        if (arg1 != 0)
                            var_78_2 = arg1
                            Botan::deallocate_memory(arg1, (var_70 - arg1) s>> 2, 4)
                    else
                        arg1 = *(x19 + 0x18)
                        int128_t v0_2 = var_80.o
                        var_80 = arg1
                        *(x19 + 0x18) = v0_2
                        int64_t x11_21 = *(x19 + 0x28)
                        int64_t x9_12 = *(x19 + 0x30)
                        *(x19 + 0x28) = var_70
                        *(x19 + 0x30) = var_68
                        int64_t var_68_2 = x9_12
                        int32_t x9_13 = *(x19 + 0x38)
                        *(x19 + 0x38) = var_60
                        int32_t var_60_2 = x9_13
                        
                        if (arg1 != 0)
                            var_78_2 = arg1
                            Botan::deallocate_memory(arg1, (x11_21 - arg1) s>> 2, 4)
                else
                    int32_t* x9_11 = *x26_1
                    int32_t x10_12 = 0
                    int64_t i_2
                    
                    do
                        int32_t x11_16 = *x9_11
                        x9_11 = &x9_11[1]
                        i_2 = i_7
                        i_7 -= 1
                        int32_t x11_18 = ((x11_16 - 1) & not.d(x11_16)) s>> 0x1f
                        x10_12 = (x10_12 & x11_18) | (not.d(x11_18) & 1)
                    while (i_2 != 1)
                    
                    if (x10_12 == 0)
                        goto label_d0ffbc
            else
                int64_t x12_7
                
                x12_7 = x10_9 s>= 0 ? x10_9 : -1
                
                int64_t x11_14 = x9_9 - x11_13
                int64_t x12_8
                
                x12_8 = x12_7 s< 1 ? x12_7 : 1
                
                i_7 = x10_9 s>> 2
                int64_t x10_10
                
                x10_10 = x11_14 s> x10_9 ? x11_14 : x10_9
                
                int64_t i_9 = x12_8 * (x10_10 u>> 2)
                uint64_t x11_15 = 1
                int64_t i_3
                
                do
                    int32_t x12_9 = *(x9_9 - 4 + (i_9 << 2))
                    i_3 = i_9
                    i_9 -= 1
                    x11_15 = zx.q(x11_15.d) & zx.q(((x12_9 - 1) & not.d(x12_9)) s>> 0x1f)
                    i_7 -= x11_15
                while (i_3 != 1)
                *(x19 + 0x30) = i_7
                
                if (i_7 u<= 1)
                    goto label_d0ff7c
        else if (i_7 u<= 1)
            goto label_d0ff7c
else
label_d0fd54:
    int64_t i_6 = entry_x3[3]
    
    if (i_6 != -1)
        if (i_6 u<= 1)
            goto label_d0fde4
        
        goto label_d0fe20
    
    uint32_t* x9_3 = *entry_x3
    int64_t x11_4 = entry_x3[1]
    void* x10_3 = x11_4 - x9_3
    
    if (x11_4 == x9_3)
        i_6 = 0
        entry_x3[3] = 0
    else
        void* x12_2
        
        x12_2 = x10_3 s>= 0 ? x10_3 : -ffffffffffffffff
        
        void* x11_5 = x9_3 - x11_4
        void* x12_3
        
        x12_3 = x12_2 s< 1 ? x12_2 : 1
        
        i_6 = x10_3 s>> 2
        void* x10_4
        
        x10_4 = x11_5 s> x10_3 ? x11_5 : x10_3
        
        int64_t i_8 = x12_3 * (x10_4 u>> 2)
        uint64_t x11_6 = 1
        int64_t i_4
        
        do
            int32_t x12_4 = *(x9_3 - 4 + (i_8 << 2))
            i_4 = i_8
            i_8 -= 1
            x11_6 = zx.q(x11_6.d) & zx.q(((x12_4 - 1) & not.d(x12_4)) s>> 0x1f)
            i_6 -= x11_6
        while (i_4 != 1)
        entry_x3[3] = i_6
        
        if (i_6 u> 1)
            goto label_d0fe20
    
label_d0fde4:
    
    if (i_6 != 0)
        uint32_t* x9_5 = *entry_x3
        int32_t x10_6 = 0
        int32_t i_5
        
        do
            uint32_t x11_7 = *x9_5
            x9_5 = &x9_5[1]
            i_5 = i_6
            i_6 -= 1
            int32_t x11_9 = ((x11_7 - 1) & not.d(x11_7)) s>> 0x1f
            x10_6 = (x10_6 & x11_9) | (not.d(x11_9) & 1)
        while (i_5 != 1)
        
        if (x10_6 == 0)
            goto label_d0fe7c
        
        goto label_d0fe20
    
label_d0fe7c:
    Botan::BigInt::randomize(x20_1, arg2, (*(Botan::DL_Group::data() + 0x160)).b)
    Botan::Montgomery_Exponentation_State::exponentiation(*(Botan::DL_Group::data() + 0x138), x20_1)
    Botan::RandomNumberGenerator& var_78_1
    
    if (x26_1 == &var_80)
        arg1 = var_80
        
        if (arg1 != 0)
            var_78_1 = arg1
            Botan::deallocate_memory(arg1, (var_70 - arg1) s>> 2, 4)
    else
        arg1 = *(x19 + 0x18)
        int128_t v0_1 = var_80.o
        var_80 = arg1
        *(x19 + 0x18) = v0_1
        int64_t x11_12 = *(x19 + 0x28)
        int64_t x9_7 = *(x19 + 0x30)
        *(x19 + 0x28) = var_70
        *(x19 + 0x30) = var_68
        int64_t var_68_1 = x9_7
        int32_t x9_8 = *(x19 + 0x38)
        *(x19 + 0x38) = var_60
        int32_t var_60_1 = x9_8
        
        if (arg1 != 0)
            var_78_1 = arg1
            Botan::deallocate_memory(arg1, (x11_12 - arg1) s>> 2, 4)
