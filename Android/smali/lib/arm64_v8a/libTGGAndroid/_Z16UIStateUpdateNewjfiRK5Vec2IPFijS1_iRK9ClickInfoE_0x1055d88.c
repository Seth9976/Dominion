// 函数: _Z16UIStateUpdateNewjfiRK5Vec2IPFijS1_iRK9ClickInfoE
// 地址: 0x1055d88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
int64_t var_80 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8

if (arg1 == 0)
    return 

uint64_t x9_1 = zx.q(arg1) & 0xffff
int64_t x8_1 = *(gUISystem + 0x28)
UIState* x21_1 = x8_1 + mulu.dp.d(x9_1.d, 0x458)
uint32_t x10_1 = zx.d(*(x21_1 + 0x10))
*(x21_1 + 0x2c) = 1

if (x10_1 != 0)
    return 

int64_t* x22_1 = *(x8_1 + x9_1 * 0x458 + 8)
v8 = arg2.q
int64_t* x8_3 = *x22_1

if (x8_3 == 0)
    if (x22_1[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x22_1, false, true)
    x8_3 = *x22_1

int64_t* x26_1 = *x8_3

if (x26_1[1].d s< 1)
    return 

int64_t i = 0
v9.d = fneg(v8.d)
v10.d = 0f
int64_t* var_90_1 = x26_1
UIState* var_88_1 = x21_1

do
    int64_t x23_1 = *x26_1
    UIElement* x25_1 = x23_1 + i * 0x178
    int32_t x8_7 = *(x25_1 + 4)
    
    if (x8_7 != 1 && x8_7 != 5 && (x8_7 != 3 || zx.d(*(x23_1 + i * 0x178 + 0x110)) != 0))
        arg1 = UIStateElementGet(x21_1, i.d, *(x23_1 + i * 0x178 + 8))
        UIStateElement* x24_1 = arg1
        void* __offset(UIStateElement, 0x14) x8_12
        
        if (not(*(arg1 + 0x18) != 0f))
            if (*(x24_1 + 0x10) s> *x24_1)
                x8_12 = x24_1 + 0x14
            else
                x8_12 = x23_1 + i * 0x178 + 0x44
        
        if (*(arg1 + 0x18) != 0f || zx.d(*x8_12) == 0)
            uint64_t x8_15 = zx.q(*(x25_1 + 4) - 2)
            
            if (x8_15.d u<= 7)
                switch (x8_15)
                    case 0
                        int64_t x8_19
                        uint64_t x23_4
                        
                        if (*(x24_1 + 0x148) s<= *x24_1)
                            uint64_t x9_8 = zx.q(*(x23_1 + i * 0x178 + 0xac))
                            x8_19 = zx.q(*(x9_8 + 0xb0)) | (0xffffffff & x9_8) << 0x20
                            x23_4 = x8_19 u>> 0x20
                            
                            if (x23_4.d s>= 1)
                            label_1056120:
                                
                                if (x8_19.d s>= 1)
                                    int64_t x28_1 = 0
                                    
                                    do
                                        int64_t j = 0
                                        
                                        do
                                            int64_t var_78 = x28_1 << 0x20 | j
                                            void* x0_20
                                            int32_t (* x3)(uint32_t, Vec2I const&, int32_t, 
                                                ClickInfo const&)
                                            x0_20, x3 = UIStateSubstate(x25_1, x24_1, &var_78)
                                            UIStateUpdateNew(*(x0_20 + 0x450), arg3, arg4, x3, v8.d)
                                            j += 1
                                        while ((x8_19 & 0xffffffff) != j)
                                        
                                        x28_1 += 1
                                    while (x28_1 != x23_4)
                        else
                            XString::operator char const*()
                            x8_19 = *(x24_1 + 0x154)
                            x23_4 = x8_19 u>> 0x20
                            
                            if (x23_4.d s>= 1)
                                goto label_1056120
                    case 1
                        if (zx.d(*(x24_1 + 0x188)) != 0)
                            UITextBox::Update(x24_1.b - 0x70, nullptr)
                    case 3, 7
                        ParticleSystem* x0_5 = ParticleTryToGet(zx.q(*(x24_1 + 0xc4)))
                        XAsset* x8_16 = *(x23_1 + i * 0x178 + 0x60)
                        ParticleSystem* x25_2 = x0_5
                        
                        if (x8_16 != 0)
                            if (x25_2 == 0)
                                ParticleSystem* x0_7 = ParticleCreate(x8_16, V20)
                                x25_2 = x0_7
                                *(x0_7 + 0x40) = 1
                                *(x24_1 + 0xc4) = ParticleGetID(x0_7)
                                x8_16 = *(x23_1 + i * 0x178 + 0x60)
                            
                            if (*x25_2 != x8_16)
                                ParticleDestroy(x25_2)
                                ParticleSystem* x0_11 =
                                    ParticleCreate(*(x23_1 + i * 0x178 + 0x60), V20)
                                x25_2 = x0_11
                                *(x0_11 + 0x40) = 1
                                *(x24_1 + 0xc4) = ParticleGetID(x0_11)
                            
                            ParticleUpdate(x25_2)
                        else if (x25_2 != 0)
                            ParticleDestroy(x25_2)
                            *(x24_1 + 0xc4) = 0
                    case 4
                        int32_t x9_6 = *x24_1
                        void* x11_3 = x23_1 + i * 0x178
                        void* x8_22
                        
                        if (*(x24_1 + 0x10) s> x9_6)
                            x8_22 = x24_1 + 0x14
                        else
                            x8_22 = x11_3 + 0x44
                        
                        int32_t x10_5 = *(x24_1 + 0x70)
                        float v2_1 = *(x24_1 + 0x74)
                        float v1_1
                        
                        if (zx.d(*x8_22) == 0)
                            v1_1 = v8.d
                        else
                            v1_1 = v9.d
                        
                        v1_1 = *(x24_1 + 0x1c) + v1_1
                        *(x24_1 + 0x1c) = v1_1
                        float v0
                        
                        if (x10_5 == 0)
                            v0 = float.s(*(x11_3 + 0x70))
                        else
                            v0 = v2_1
                        
                        void* __offset(UIStateElement, 0x160) x8_25
                        
                        if (*(x24_1 + 0x15c) s> x9_6)
                            x8_25 = x24_1 + 0x160
                        else
                            x8_25 = x11_3 + 0x6c
                        
                        int32_t x8_26 = *x8_25
                        
                        if (not(v1_1 >= 0f))
                            v1_1 = 0f
                            *(x24_1 + 0x1c) = 0
                        
                        v0 = (v1_1 * float.s(0x447a0000) - v0) / (v0 + float.s(x8_26) - v0)
                        v1_1 = 0f
                        
                        if (not(v0 <= 0f))
                            v1_1 = fconvert.s(1f)
                            
                            if (not(v0 >= v1_1))
                                v1_1 = v0 f+ v10.d
                        
                        *(x24_1 + 0x18) = v1_1
                    case 6
                        Flanim* x0_17 = FlanimTryToGet(zx.q(*(x24_1 + 0xc0)))
                        
                        if (x0_17 != 0)
                            FlanimUpdate(x0_17, v8.d)
            
            arg1 = ParticleTryToGet(zx.q(*(x24_1 + 0xc4)))
            x26_1 = var_90_1
            x21_1 = var_88_1
            
            if (arg1 != 0 && *(x25_1 + 4) != 9)
                ParticleDestroy(arg1)
                *(x24_1 + 0xc4) = 0
    
    i += 1
while (i s< sx.q(x26_1[1].d))
