// 函数: _Z9UI2UpdateR3UI2PKS_RK16UI2InheritedDatafb
// 地址: 0x101f304
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UI2& i_2 = arg1
uint32_t x9_1 = *numUpdates + 1
*numUpdates = x9_1
*arg1 = x9_1
*(arg1 + 0x17d0) = arg2
*(arg1 + 0x1740) = *(arg3 + 0x90)
void* x8_1 = *(arg2 + 0x1788)
*(arg1 + 0x1788) = x8_1

if (x8_1 != 0 && *(i_2 + 0x10) != *(x8_1 + 0x10))
    int64_t x9_3 = *(i_2 + 0x1660)
    *(i_2 + 0x17a0) = 0
    *(i_2 + 0x1670) = x9_3
    *(i_2 + 0x10) = *(x8_1 + 0x10)

UIStateEffectsUpdate(i_2, arg4)
int64_t* x21 = *(i_2 + 0x1688)
int64_t* x8_3 = *x21

if (x8_3 == 0)
    if (x21[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x21, false, true)
    x8_3 = *x21

void* x0_5
int128_t v0_1
int128_t v1
int128_t v2
x0_5, v0_1, v1, v2 = AttribMapFindTag(**x8_3 + sx.q(*(i_2 + 0x1690)) * 0x18, 0x70)

if (x0_5 != 0)
    AttribTagGetDefMap(*gUI2AttribTable, 0x70)
    v0_1, v1, v2 = UI2SetStateByName(i_2, *(x0_5 + 8))

uint64_t x23 = zx.q(*(i_2 + 0x17a0))
int32_t x8_11
UI2State* x21_2
int32_t x22

if (x23.d == 0)
    x21_2 = *(arg3 + 0xb8)
    x23 = zx.q(*(arg3 + 0xc0))
    v0_1.q = *(arg3 + 0xc4)
    x8_11 = *(arg3 + 0xcc)
    x22 = *(arg3 + 0xd0)
else if (*(arg3 + 0xc0) == 0)
    x21_2 = *(i_2 + 0x1798)
    std::__ndk1::__less<UI2State, UI2State> var_58
    std::__ndk1::__sort<std::__ndk1::__less<UI2State, UI2State>&, UI2State*>(x21_2, 
        x21_2 + sx.q(x23.d) * 0x30, &var_58)
    int32_t x0_16
    x0_16, v0_1 = HashStateVars(x21_2, x23.d, false)
    x22 = x0_16
    x8_11 = 0
    v0_1.q = 0
    v0_1:8.q = 0
else
    int32_t x8_8 = *(i_2 + 0x17b4)
    *(i_2 + 0x17b0) = 0
    
    if (x8_8 == 0)
        int64_t x0_8
        x0_8, v0_1, v1, v2 = XPooledCalloc(0x3000)
        v0_1.q = 0x10000000000
        *(i_2 + 0x17a8) = x0_8
        *(i_2 + 0x17b0) = 0x10000000000
    
    uint64_t x8_9 = zx.q(*(arg3 + 0xc0))
    
    if (x8_9.d s< 1)
    label_101f500:
        uint64_t x8_10 = zx.q(*(i_2 + 0x17a0))
        
        if (x8_10.d s>= 1)
            int64_t x10_3 = *(i_2 + 0x1798)
            int64_t x9_6 = 0
            
            do
                uint64_t x14_4 = zx.q(*(i_2 + 0x17b0))
                int64_t* x15_4 = *(i_2 + 0x17a8)
                int64_t* x12_2 = x10_3 + x9_6 * 0x30
                int64_t* x13_6
                
                if (x14_4.d s< 1)
                label_101f520:
                    *(x15_4 + muls.dp.d(x14_4.d, 0x30) + 8) = 0
                    int64_t x13_5 = sx.q(*(i_2 + 0x17b0))
                    x13_6 = *(i_2 + 0x17a8) + x13_5 * 0x30
                    *(i_2 + 0x17b0) = x13_5.d + 1
                else
                    x13_6 = x15_4
                    uint64_t x0_10 = x14_4
                    
                    while (x13_6[1].d != x12_2[1].d || *x13_6 != *x12_2)
                        uint64_t temp3_1 = x0_10
                        x0_10 -= 1
                        x13_6 = &x13_6[6]
                        
                        if (temp3_1 == 1)
                            goto label_101f520
                
                v0_1 = *(x12_2 + 0x20)
                v1 = *x12_2
                x9_6 += 1
                *(x13_6 + 0x10) = *(x12_2 + 0x10)
                *(x13_6 + 0x20) = v0_1
                *x13_6 = v1
            while (x9_6 != x8_10)
        
        x21_2 = *(i_2 + 0x17a8)
        x23 = sx.q(*(i_2 + 0x17b0))
        std::__ndk1::__less<UI2State, UI2State> var_48
        std::__ndk1::__sort<std::__ndk1::__less<UI2State, UI2State>&, UI2State*>(x21_2, 
            x21_2 + x23 * 0x30, &var_48)
        int32_t x0_13
        x0_13, v0_1 = HashStateVars(x21_2, x23.d, false)
        x22 = x0_13
        x8_11 = 0
        v0_1.q = 0
        v0_1:8.q = 0
    else
        void* x10_2 = *(arg3 + 0xb8)
        int32_t x13_1 = 0
        int64_t x9_5 = 0
        int64_t* x15_1 = *(i_2 + 0x17a8)
        int64_t* x12_1 = x10_2
        
        while (true)
        label_101f4b4:
            *(x15_1 + muls.dp.d(x13_1, 0x30) + 8) = 0
            int64_t x13_3 = sx.q(*(i_2 + 0x17b0))
            int64_t* x14_1 = *(i_2 + 0x17a8) + x13_3 * 0x30
            *(i_2 + 0x17b0) = x13_3.d + 1
            
            while (true)
                v0_1 = *(x12_1 + 0x20)
                v1 = *x12_1
                x9_5 += 1
                *(x14_1 + 0x10) = *(x12_1 + 0x10)
                *(x14_1 + 0x20) = v0_1
                *x14_1 = v1
                
                if (x9_5 == x8_9)
                    goto label_101f500
                
                x13_1 = *(i_2 + 0x17b0)
                x15_1 = *(i_2 + 0x17a8)
                x12_1 = x10_2 + x9_5 * 0x30
                
                if (x13_1 s< 1)
                    break
                
                uint64_t x0_9 = zx.q(x13_1)
                x14_1 = x15_1
                
                while (x14_1[1].d != x12_1[1].d || *x14_1 != *x12_1)
                    uint64_t temp1_1 = x0_9
                    x0_9 -= 1
                    x14_1 = &x14_1[6]
                    
                    if (temp1_1 == 1)
                        goto label_101f4b4

*(i_2 + 0x1768) = x21_2
*(i_2 + 0x1770) = x23.d
*(i_2 + 0x1774) = v0_1.q
*(i_2 + 0x177c) = x8_11
*(i_2 + 0x1780) = x22
bool var_44 = false
int32_t x0_18 = UI2UpdateAnims(i_2, x22, i_2 + 0x1768, &var_44, v0_1.d)

if ((x0_18 & 1) != 0)
    uint64_t x9_7 = zx.q(*(i_2 + 0x1770))
    int64_t* x8_13
    
    if (x9_7.d s< 1)
    label_101f6b8:
        x8_13 = nullptr
    else
        x8_13 = *(i_2 + 0x1768)
        
        while (*x8_13 != UIS_EDITOR || x8_13[1].d + 1 u>= 2)
            uint64_t temp0_1 = x9_7
            x9_7 -= 1
            x8_13 = &x8_13[6]
            
            if (temp0_1 == 1)
                goto label_101f6b8
    
    *(i_2 + 0x14) = (x8_13 != 0 ? 1 : 0).b

int32_t x0_22 = memcrc32(i_2 + 0x13a8, 8, memcrc32(arg3, 0x90, x22))
uint32_t x25 = zx.d(var_44)
int32_t x3_1 = ((x0_18 | (x0_22 != *(i_2 + 0x1374) ? 1 : 0)) & 1) | x25
int32_t x22_1 = x3_1 != 0 ? 1 : 0
UI2UpdateComponents(i_2, arg3, *(i_2 + 0x14), x3_1.b)
int32_t x8_19 = *(i_2 + 0x167c)
*(i_2 + 0x1374) = x0_22

if (x8_19 == 0xa)
    UI2SpineUpdate(i_2, arg4)
    UI2& i = i_2
    
    do
        *(i + 0x1378) = 2
        i = *(i + 0x17d0)
    while (i != 0)
    
    x8_19 = *(i_2 + 0x167c)
    x22_1 = 1
    
    if (x8_19 != 8)
        goto label_101f73c
    
    goto label_101f788

if (x8_19 != 8)
label_101f73c:
    
    if (x8_19 == 9)
        goto label_101f7a0
    
    goto label_101f744

label_101f788:
UI2FlanimUpdate(i_2, arg4)
x8_19 = *(i_2 + 0x167c)

if (x8_19 != 9)
label_101f744:
    
    if (x8_19 == 7)
    label_101f7b0:
        XAsset* x23_2 = *(i_2 + 0x14a8)
        
        if (x23_2 != 0)
            XAsset* x24_1 = *(i_2 + 0x14a0)
            Structure* x0_28 = StructureTryToGet(zx.q(*(i_2 + 0x13ec)))
            Structure* x20_1 = x0_28
            
            if (x0_28 == 0)
                Structure* x0_30 = StructureCreate(x24_1)
                x20_1 = x0_30
                AnimationPlay(x0_30, x23_2, 0, 0, 0, 0f, fconvert.s(0.5f))
            
            StructureUpdate(x20_1)
            UI2& i_1 = i_2
            
            do
                *(i_1 + 0x1378) = 2
                i_1 = *(i_1 + 0x17d0)
            while (i_1 != 0)
            
            *(i_2 + 0x13ec) = StructureGetID(x20_1)
else
label_101f7a0:
    UI2ParticleUpdate(i_2, arg4)
    
    if (*(i_2 + 0x167c) == 7)
        goto label_101f7b0

ParticleSystem* result = *(i_2 + 0x13d0)

if (result != 0)
    result = ParticleUpdateParams(result, arg4)

if (((*(i_2 + 0x1378) == 0 ? 1 : 0) & not.d(x22_1) & 1) == 0)
    result = UI2UpdateChildren(i_2, i_2 + 0x1768, x22_1.b, arg4)
    int32_t x8_24 = *(i_2 + 0x1378)
    
    if (x8_24 s>= 1)
        *(i_2 + 0x1378) = x8_24 - 1
    
    if (x25 != 0)
        do
            *(i_2 + 0x1378) = 2
            i_2 = *(i_2 + 0x17d0)
        while (i_2 != 0)

return result
