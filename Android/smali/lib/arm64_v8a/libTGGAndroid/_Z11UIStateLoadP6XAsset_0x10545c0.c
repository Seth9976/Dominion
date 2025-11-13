// 函数: _Z11UIStateLoadP6XAsset
// 地址: 0x10545c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = zx.q(*(gUISystem + 0x38))
int64_t x8_1
int32_t x9

if (x22.d != *(gUISystem + 0x30))
    x8_1 = *(gUISystem + 0x28)
    x9 = *(x8_1 + x22 * 0x458 + 0x450)
else
    x8_1 = *(gUISystem + 0x28)
    x9 = x22.d + 1
    *(gUISystem + 0x30) = x9

*(gUISystem + 0x38) = x9
UIState* x19 = x8_1 + x22 * 0x458
memset(x19, 0, 0x450)
*(x19 + 0x450) = x22.d | *(gUISystem + 0x40) << 0x10
int32_t x8_4 = *(gUISystem + 0x40)
int32_t x8_5

if (x8_4 == 0xffff)
    x8_5 = 1
else
    x8_5 = x8_4 + 1

*(gUISystem + 0x3c) += 1
*(gUISystem + 0x40) = x8_5
*(x19 + 8) = arg1
int64_t* x8_6 = *arg1
int64_t* x24

if (x8_6 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x24 = **arg1
    
    if (x24[1].d s>= 1)
        goto label_10546c4
else
    x24 = *x8_6
    
    if (x24[1].d s>= 1)
    label_10546c4:
        int64_t i = 0
        int64_t x25_1 = 0x60
        
        do
            void* x8_13 = *x24
            void* x22_2 = x8_13 + x25_1
            int32_t x9_4 = *(x22_2 - 0x5c)
            
            if (x9_4 == 9)
                void* x0_13 = UIStateElementGet(x19, i.d, *(x22_2 - 0x58))
                XAsset* x8_17 = *x22_2
                
                if (x8_17 != 0)
                    ParticleSystem* x0_15 = ParticleCreate(x8_17, V20)
                    *(x0_15 + 0x40) = 1
                    *(x0_15 + 0x9c) = 0
                    *(x0_13 + 0xc4) = ParticleGetID(x0_15)
            else if (x9_4 == 8)
                void* x23_1 = x8_13 + x25_1
                void* x0_5 = UIStateElementGet(x19, i.d, *(x23_1 - 0x58))
                Flanim* x0_7 = FlanimCreate(*(x23_1 - 0x18))
                FlanimPlay(x0_7, *(x23_1 - 0x10), zx.q(*(x23_1 - 8)), *(x23_1 - 4))
                *(x0_5 + 0xc0) = FlanimGetID(x0_7)
            else if (x9_4 == 6)
                void* x22_3 = x8_13 + x25_1
                int32_t* x0_11 = UIStateElementGet(x19, i.d, *(x22_3 - 0x58))
                void* x8_15
                
                if (x0_11[4] s> *x0_11)
                    x8_15 = &x0_11[5]
                else
                    x8_15 = x22_3 - 0x1c
                
                if (zx.d(*x8_15) == 0)
                    x0_11[6] = 0x3f800000
                else
                    x0_11[6] = 0
            
            i += 1
            x25_1 += 0x178
        while (i s< sx.q(x24[1].d))
return zx.q(*(x19 + 0x450))
