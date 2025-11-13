// 函数: _ZN5Botan13DH_PrivateKeyC2ERNS_21RandomNumberGeneratorERKNS_8DL_GroupERKNS_6BigIntE
// 地址: 0xd0f7bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg2 + 8)
Botan::RandomNumberGenerator& x19 = arg1
*arg1 = x8
*(arg1 + *(x8 - 0x88)) = *(arg2 + 0x10)
*(arg1 + *(*arg1 - 0x90)) = *(arg2 + 0x18)
void* x8_4 = *(arg2 + 0x20)
*(arg1 + 8) = x8_4
*(arg1 + 8 + *(x8_4 - 0xc8)) = *(arg2 + 0x28)
*(arg1 + 8 + *(*(arg1 + 8) - 0x88)) = *(arg2 + 0x30)
void* x8_8 = *arg2
*arg1 = x8_8
*(arg1 + *(x8_8 - 0x88)) = *(arg2 + 0x38)
*(arg1 + *(*arg1 - 0x90)) = *(arg2 + 0x40)
*(arg1 + 8) = *(arg2 + 0x48)
*(arg1 + *(*arg1 - 0x98)) = *(arg2 + 0x50)
*(arg1 + *(*arg1 - 0xa0)) = *(arg2 + 0x58)
int64_t* entry_x3
int64_t x9_6 = *entry_x3
int64_t x8_17 = entry_x3[1]

if (x8_17 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_17 + 8) + 1, x8_17 + 8)
    while (i != 0)

int64_t* x24 = *(x19 + 0x48)
*(x19 + 0x40) = x9_6
*(x19 + 0x48) = x8_17
int64_t x9_7

if (x24 != 0)
    int32_t i_1
    
    do
        x9_7 = __ldaxr(&x24[1])
        i_1 = __stlxr(x9_7 - 1, &x24[1])
    while (i_1 != 0)

int64_t* entry_x4

if (x24 != 0 && x9_7 == 0)
    (*(*x24 + 0x10))(x24)
    std::__ndk1::__shared_weak_count::__release_weak()
    
    if (entry_x4[4].d != 0)
        goto label_d0f8c4
    
    goto label_d0f9b8

Botan::RandomNumberGenerator& var_70
int64_t var_60
int64_t var_58
int32_t var_50

if (entry_x4[4].d == 0)
label_d0f9b8:
    
    if (x19 + 0x58 != entry_x4)
        entry_x4[1]
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(
            x19 + 0x58, *entry_x4)
    
    int32_t x9_11 = *(x19 + 0x38)
    *(x19 + 0x70) = entry_x4[3]
    *(x19 + 0x78) = entry_x4[4].d
    
    if (x9_11 != 0)
        int64_t i_7 = *(x19 + 0x30)
        
        if (i_7 == -1)
            int64_t x9_14 = *(x19 + 0x18)
            int64_t x11_13 = *(x19 + 0x20)
            int64_t x10_12 = x11_13 - x9_14
            
            if (x11_13 == x9_14)
                i_7 = 0
                *(x19 + 0x30) = 0
            label_d0fb20:
                
                if (i_7 == 0)
                label_d0fb60:
                    *(Botan::DL_Group::data() + 0x148)
                    Botan::Montgomery_Exponentation_State::exponentiation(
                        *(Botan::DL_Group::data() + 0x138), x19 + 0x58)
                    Botan::RandomNumberGenerator& var_68_2
                    
                    if (x19 + 0x18 == &var_70)
                        arg1 = var_70
                        
                        if (arg1 != 0)
                            var_68_2 = arg1
                            Botan::deallocate_memory(arg1, (var_60 - arg1) s>> 2, 4)
                    else
                        arg1 = *(x19 + 0x18)
                        int128_t v0_2 = var_70.o
                        var_70 = arg1
                        *(x19 + 0x18) = v0_2
                        int64_t x11_21 = *(x19 + 0x28)
                        int64_t x9_17 = *(x19 + 0x30)
                        *(x19 + 0x28) = var_60
                        *(x19 + 0x30) = var_58
                        int64_t var_58_2 = x9_17
                        int32_t x9_18 = *(x19 + 0x38)
                        *(x19 + 0x38) = var_50
                        int32_t var_50_2 = x9_18
                        
                        if (arg1 != 0)
                            var_68_2 = arg1
                            Botan::deallocate_memory(arg1, (x11_21 - arg1) s>> 2, 4)
                else
                    int32_t* x9_16 = *(x19 + 0x18)
                    int32_t x10_15 = 0
                    int64_t i_2
                    
                    do
                        int32_t x11_16 = *x9_16
                        x9_16 = &x9_16[1]
                        i_2 = i_7
                        i_7 -= 1
                        int32_t x11_18 = ((x11_16 - 1) & not.d(x11_16)) s>> 0x1f
                        x10_15 = (x10_15 & x11_18) | (not.d(x11_18) & 1)
                    while (i_2 != 1)
                    
                    if (x10_15 == 0)
                        goto label_d0fb60
            else
                int64_t x12_7
                
                x12_7 = x10_12 s>= 0 ? x10_12 : -1
                
                int64_t x11_14 = x9_14 - x11_13
                int64_t x12_8
                
                x12_8 = x12_7 s< 1 ? x12_7 : 1
                
                i_7 = x10_12 s>> 2
                int64_t x10_13
                
                x10_13 = x11_14 s> x10_12 ? x11_14 : x10_12
                
                int64_t i_9 = x12_8 * (x10_13 u>> 2)
                uint64_t x11_15 = 1
                int64_t i_3
                
                do
                    int32_t x12_9 = *(x9_14 - 4 + (i_9 << 2))
                    i_3 = i_9
                    i_9 -= 1
                    x11_15 = zx.q(x11_15.d) & zx.q(((x12_9 - 1) & not.d(x12_9)) s>> 0x1f)
                    i_7 -= x11_15
                while (i_3 != 1)
                *(x19 + 0x30) = i_7
                
                if (i_7 u<= 1)
                    goto label_d0fb20
        else if (i_7 u<= 1)
            goto label_d0fb20
else
label_d0f8c4:
    int64_t i_6 = entry_x4[3]
    
    if (i_6 != -1)
        if (i_6 u<= 1)
            goto label_d0f978
        
        goto label_d0f9b8
    
    int64_t x9_8 = *entry_x4
    int64_t x11_4 = entry_x4[1]
    int64_t x10_6 = x11_4 - x9_8
    
    if (x11_4 == x9_8)
        i_6 = 0
        entry_x4[3] = 0
    else
        int64_t x12_2
        
        x12_2 = x10_6 s>= 0 ? x10_6 : -1
        
        int64_t x11_5 = x9_8 - x11_4
        int64_t x12_3
        
        x12_3 = x12_2 s< 1 ? x12_2 : 1
        
        i_6 = x10_6 s>> 2
        int64_t x10_7
        
        x10_7 = x11_5 s> x10_6 ? x11_5 : x10_6
        
        int64_t i_8 = x12_3 * (x10_7 u>> 2)
        uint64_t x11_6 = 1
        int64_t i_4
        
        do
            int32_t x12_4 = *(x9_8 - 4 + (i_8 << 2))
            i_4 = i_8
            i_8 -= 1
            x11_6 = zx.q(x11_6.d) & zx.q(((x12_4 - 1) & not.d(x12_4)) s>> 0x1f)
            i_6 -= x11_6
        while (i_4 != 1)
        entry_x4[3] = i_6
        
        if (i_6 u> 1)
            goto label_d0f9b8
    
label_d0f978:
    
    if (i_6 != 0)
        int32_t* x9_10 = *entry_x4
        int32_t x10_9 = 0
        int32_t i_5
        
        do
            int32_t x11_7 = *x9_10
            x9_10 = &x9_10[1]
            i_5 = i_6
            i_6 -= 1
            int32_t x11_9 = ((x11_7 - 1) & not.d(x11_7)) s>> 0x1f
            x10_9 = (x10_9 & x11_9) | (not.d(x11_9) & 1)
        while (i_5 != 1)
        
        if (x10_9 == 0)
            goto label_d0fa18
        
        goto label_d0f9b8
    
label_d0fa18:
    Botan::BigInt::randomize(x19 + 0x58, arg3, (*(Botan::DL_Group::data() + 0x160)).b)
    Botan::Montgomery_Exponentation_State::exponentiation(*(Botan::DL_Group::data() + 0x138), 
        x19 + 0x58)
    Botan::RandomNumberGenerator& var_68_1
    
    if (x19 + 0x18 == &var_70)
        arg1 = var_70
        
        if (arg1 != 0)
            var_68_1 = arg1
            Botan::deallocate_memory(arg1, (var_60 - arg1) s>> 2, 4)
    else
        arg1 = *(x19 + 0x18)
        int128_t v0_1 = var_70.o
        var_70 = arg1
        *(x19 + 0x18) = v0_1
        int64_t x11_12 = *(x19 + 0x28)
        int64_t x9_12 = *(x19 + 0x30)
        *(x19 + 0x28) = var_60
        *(x19 + 0x30) = var_58
        int64_t var_58_1 = x9_12
        int32_t x9_13 = *(x19 + 0x38)
        *(x19 + 0x38) = var_50
        int32_t var_50_1 = x9_13
        
        if (arg1 != 0)
            var_68_1 = arg1
            Botan::deallocate_memory(arg1, (x11_12 - arg1) s>> 2, 4)
