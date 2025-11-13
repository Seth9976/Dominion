// 函数: _Z10ToSettingsR15ProfileSettingsRK20ProfileSettings_Save
// 地址: 0x9dcc6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x1f2e0) = *(arg2 + 8)
ProfileSettings& var_1220 = arg1
*(arg1 + 0x1f2e4) = *(arg2 + 0xc)
*(arg1 + 0x1f2e8) = *(arg2 + 0x10)

if (*(arg2 + 8) s< 1)
    return 

void var_1208
void* var_1250_1 = &var_1208
void var_11c8
void* var_1270_1 = &var_11c8
int64_t i = 0
void* __offset(ProfileSettings, 0x4348) x28_1 = var_1220 + 0x4348
void* __offset(ProfileSettings, 0x4368) fp_1 = var_1220 + 0x4368
ProfileSettings& x9_1 = var_1220
ProfileSettings_Save const& var_1248_1 = arg2

do
    int64_t x9_6 = *arg2
    int64_t* x26_1 = x9_6 + i * 0x880
    GameProfile* x25_1 = var_1220 + i * 0x7cb8
    *(x25_1 + 0x4330) = *(x26_1 + 0x6cc)
    *(x25_1 + 0x4334) = x26_1[0xda].d
    *(x25_1 + 0x4338) = x26_1[0xdb].d
    *(x25_1 + 0x433c) = *(x26_1 + 0x6d4)
    x26_1[0xad]
    XString::operator=(x25_1 + 0x42a0)
    x26_1[1]
    XString::operator=(x25_1 + 0x42b8)
    *(x25_1 + 0x42c0) = x26_1[3].d
    x26_1[0xac]
    int128_t v0_2
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    v0_2, v1_1, v2_1, v3_1 = XString::operator=(x25_1 + 0x4298)
    v0_2 = *(x26_1 + 0x600)
    v2_1 = *(x26_1 + 0x5d0)
    v3_1 = *(x26_1 + 0x5e0)
    *(x25_1 + 0x35ac) = *(x26_1 + 0x5f0)
    *(x25_1 + 0x35bc) = v0_2
    *(x25_1 + 0x358c) = v2_1
    *(x25_1 + 0x359c) = v3_1
    v0_2 = *(x26_1 + 0x640)
    v2_1 = *(x26_1 + 0x610)
    v3_1 = *(x26_1 + 0x620)
    *(x25_1 + 0x35ec) = *(x26_1 + 0x630)
    *(x25_1 + 0x35fc) = v0_2
    *(x25_1 + 0x35cc) = v2_1
    *(x25_1 + 0x35dc) = v3_1
    *(x25_1 + 0x3588) = *(x26_1 + 0x574)
    *(x25_1 + 0x428c) = x26_1[0xcc].d
    memcpy(x25_1 + 0x360c, x26_1[0xca], sx.q(x26_1[0xcb].d) * 0x14)
    *(x25_1 + 0x3528) = x26_1[0xae].d
    x26_1[0xaf]
    XString::operator=(x25_1 + 0x3530)
    x26_1[0xb0]
    XString::operator=(x25_1 + 0x3538)
    x26_1[0xb1]
    XString::operator=(x25_1 + 0x3540)
    x26_1[0xb2]
    XString::operator=(x25_1 + 0x3548)
    x26_1[0xb3]
    XString::operator=(x25_1 + 0x3550)
    x26_1[0xb4]
    XString::operator=(x25_1 + 0x3558)
    x26_1[0xb5]
    XString::operator=(x25_1 + 0x3560)
    x26_1[0xb6]
    XString::operator=(x25_1 + 0x3568)
    x26_1[0xb7]
    XString::operator=(x25_1 + 0x3570)
    x26_1[0xb8]
    XString::operator=(x25_1 + 0x3578)
    x26_1[0xb9]
    XString::operator=(x25_1 + 0x3580)
    *(x25_1 + 0x4290) = *(x26_1 + 0x664)
    *(x25_1 + 0x4324) = *(x26_1 + 0x6dc)
    *(x25_1 + 0x4328) = x26_1[0xdc].d
    *(x25_1 + 0x432c) = *(x26_1 + 0x6e4)
    *(x25_1 + 0x4340) = x26_1[0xdf].d
    *(x25_1 + 0x4344) = *(x26_1 + 0x6fc)
    int128_t v0_3
    int128_t v1_2
    v0_3, v1_2 = ToSetup(&x26_1[4])
    int64_t var_1210
    *(x25_1 + 0x18) = var_1210
    v1_2 = *var_1250_1
    v0_3 = *(var_1250_1 + 0x10)
    *(x25_1 + 0x40) = *(var_1250_1 + 0x20)
    *(x25_1 + 0x20) = v1_2
    *(x25_1 + 0x30) = v0_3
    XString::operator=(x25_1 + 0x48)
    XString::operator=(x25_1 + 0x50)
    XString::operator=(x25_1 + 0x58)
    memcpy(x25_1 + 0x60, var_1270_1, 0x1168)
    XString::~XString()
    XString::~XString()
    XString::~XString()
    int128_t v0_4
    int128_t v1_3
    v0_4, v1_3 = ToSetup(&x26_1[0x3c])
    *(x25_1 + 0x11c8) = var_1210
    v1_3 = *var_1250_1
    v0_4 = *(var_1250_1 + 0x10)
    *(x25_1 + 0x11f0) = *(var_1250_1 + 0x20)
    *(x25_1 + 0x11e0) = v0_4
    *(x25_1 + 0x11d0) = v1_3
    XString::operator=(x25_1 + 0x11f8)
    XString::operator=(x25_1 + 0x1200)
    XString::operator=(x25_1 + 0x1208)
    memcpy(x25_1 + 0x1210, var_1270_1, 0x1168)
    XString::~XString()
    XString::~XString()
    XString::~XString()
    int128_t v0_5
    int128_t v1_4
    v0_5, v1_4 = ToSetup(&x26_1[0x74])
    *(x25_1 + 0x2378) = var_1210
    v1_4 = *var_1250_1
    v0_5 = *(var_1250_1 + 0x10)
    *(x25_1 + 0x23a0) = *(var_1250_1 + 0x20)
    *(x25_1 + 0x2390) = v0_5
    *(x25_1 + 0x2380) = v1_4
    XString::operator=(x25_1 + 0x23a8)
    XString::operator=(x25_1 + 0x23b0)
    XString::operator=(x25_1 + 0x23b8)
    memcpy(x25_1 + 0x23c0, var_1270_1, 0x1168)
    XString::~XString()
    XString::~XString()
    XString::~XString()
    x26_1[2]
    int128_t v0_6
    int128_t v1_5
    int128_t v2_2
    v0_6, v1_5, v2_2 = XString::operator=(x25_1 + 8)
    v1_5 = *(x26_1 + 0x680)
    v2_2 = *(x26_1 + 0x690)
    *(x25_1 + 0x42c8) = *(x26_1 + 0x670)
    *(x25_1 + 0x42d8) = v1_5
    *(x25_1 + 0x42e8) = v2_2
    *(x25_1 + 0x10) = *(x26_1 + 0x1c)
    *x26_1
    XString::operator=(x25_1)
    *(x25_1 + 0x4320) = x26_1[0xd9].d
    *(x25_1 + 0x42a8) = x26_1[0xcd].d
    *(x25_1 + 0x42ac) = *(x26_1 + 0x66c)
    *(x25_1 + 0x5748) = x26_1[0xf8].d
    
    if (x26_1[0xf8].d s>= 1)
        int64_t x19_2 = 0
        int64_t j = 0
        
        do
            void* x10_3 = x28_1 + x19_2
            int32_t* x8_41 = *(x9_6 + i * 0x880 + 0x7b8) + x19_2
            *x10_3 = *x8_41
            *(x10_3 + 4) = x8_41[1]
            *(x10_3 + 8) = x8_41[2]
            void* x10_4 = x9_1 + x19_2
            *(x10_4 + 0x4358) = *(x8_41 + 0x10)
            *(x10_4 + 0x4360) = *(x8_41 + 0x18)
            *(x8_41 + 0x20)
            XString::operator=(fp_1 + x19_2)
            j += 1
            x19_2 += 0x28
        while (j s< sx.q(x26_1[0xf8].d))
    
    void* x19_3 = x9_6 + i * 0x880
    void* x20_2 = var_1220 + i * 0x7cb8
    *(x20_2 + 0x5960) = *(x19_3 + 0x7e0)
    memcpy(x20_2 + 0x5760, *(x19_3 + 0x7d8), sx.q(*(x19_3 + 0x7e0)) << 3)
    *(x20_2 + 0x6454) = *(x19_3 + 0x7f0)
    memcpy(x20_2 + 0x5964, *(x19_3 + 0x7e8), sx.q(*(x19_3 + 0x7f0)) << 2)
    *(x20_2 + 0x6f48) = *(x19_3 + 0x800)
    int128_t v0_1
    arg1, v0_1 = memcpy(x20_2 + 0x6458, *(x19_3 + 0x7f8), sx.q(*(x19_3 + 0x800)) << 2)
    *(x20_2 + 0x6f4c) = *(x19_3 + 0x808)
    *(x20_2 + 0x6f50) = *(x19_3 + 0x80c)
    *(x20_2 + 0x7558) = *(x19_3 + 0x818)
    
    if (*(x19_3 + 0x818) s>= 1)
        int64_t x21_2 = 0
        int64_t j_1 = 0
        
        do
            void* x26_2 = x9_1 + 0x6f60 + x21_2
            *(*(x9_6 + i * 0x880 + 0x810) + x21_2)
            XString::operator=(x26_2 - 8)
            *(*(x9_6 + i * 0x880 + 0x810) + x21_2 + 8)
            arg1, v0_1 = XString::operator=(x26_2)
            j_1 += 1
            int32_t x8_59 = *(*(x9_6 + i * 0x880 + 0x810) + x21_2 + 0x10)
            x21_2 += 0x18
            *(x26_2 + 8) = x8_59
        while (j_1 s< sx.q(*(x19_3 + 0x818)))
    
    void* x8_61 = x9_6 + i * 0x880
    
    if (*(x8_61 + 0x7d0) s>= 1)
        int64_t j_2 = 0
        void* x9_22 = var_1220 + i * 0x7cb8
        
        do
            int32_t* x24_1 = *(x9_6 + i * 0x880 + 0x7c8) + (j_2 << 3)
            int32_t k = *x24_1
            uint64_t fp_3 = (zx.q(k) | zx.q(k s>> 4)) & zx.q(*(x9_22 + 0x5758))
            int32_t* x9_25 = *(*(x9_22 + 0x5750) + (fp_3 << 3))
            
            if (x9_25 == 0)
            label_9dd3a4:
                arg1, v0_1 = XPooledMalloc(0x10)
                uint64_t x9_23 = fp_3 << 3
                *arg1 = *x24_1
                *(arg1 + 4) = x24_1[1]
                *(arg1 + 8) = *(*(x9_22 + 0x5750) + x9_23)
                *(*(x9_22 + 0x5750) + x9_23) = arg1
                *(x9_22 + 0x575c) += 1
            else
                while (k != *x9_25)
                    x9_25 = *(x9_25 + 8)
                    
                    if (x9_25 == 0)
                        goto label_9dd3a4
                
                x9_25[1] = x24_1[1]
            
            j_2 += 1
        while (j_2 s< sx.q(*(x8_61 + 0x7d0)))
    
    void* x8_73 = x9_6 + i * 0x880
    
    if (*(x8_73 + 0x848) s>= 1)
        int64_t j_3 = 0
        void* x9_30 = var_1220 + i * 0x7cb8
        
        do
            int64_t x27_5 = *(x9_6 + i * 0x880 + 0x840)
            int32_t k_1 = *(x27_5 + (j_3 << 2))
            uint64_t x24_2 = (zx.q(k_1) | zx.q(k_1 s>> 4)) & zx.q(*(x9_30 + 0x7588))
            int32_t* x9_33 = *(*(x9_30 + 0x7580) + (x24_2 << 3))
            
            if (x9_33 == 0)
            label_9dd494:
                arg1, v0_1 = XPooledMalloc(0x10)
                *arg1 = *(x27_5 + (j_3 << 2))
                *(arg1 + 4) = 1
                uint64_t x9_31 = x24_2 << 3
                *(arg1 + 8) = *(*(x9_30 + 0x7580) + x9_31)
                *(*(x9_30 + 0x7580) + x9_31) = arg1
                *(x9_30 + 0x758c) += 1
            else
                while (k_1 != *x9_33)
                    x9_33 = *(x9_33 + 8)
                    
                    if (x9_33 == 0)
                        goto label_9dd494
                
                x9_33[1] = 1
            
            j_3 += 1
        while (j_3 s< sx.q(*(x8_73 + 0x848)))
    
    void* x8_82 = x9_6 + i * 0x880
    *(var_1220 + i * 0x7cb8 + 0x75a0) = *(x8_82 + 0x84c)
    
    if (*(x8_82 + 0x858) s>= 1)
        int64_t j_4 = 0
        void* x9_39 = var_1220 + i * 0x7cb8
        
        do
            int32_t* x24_3 = *(x9_6 + i * 0x880 + 0x850) + (j_4 << 3)
            int32_t k_2 = *x24_3
            uint64_t fp_4 = (zx.q(k_2) | zx.q(k_2 s>> 4)) & zx.q(*(x9_39 + 0x7598))
            int32_t* x9_42 = *(*(x9_39 + 0x7590) + (fp_4 << 3))
            
            if (x9_42 == 0)
            label_9dd58c:
                arg1, v0_1 = XPooledMalloc(0x10)
                uint64_t x9_40 = fp_4 << 3
                *arg1 = *x24_3
                *(arg1 + 4) = x24_3[1]
                *(arg1 + 8) = *(*(x9_39 + 0x7590) + x9_40)
                *(*(x9_39 + 0x7590) + x9_40) = arg1
                *(x9_39 + 0x759c) += 1
            else
                while (k_2 != *x9_42)
                    x9_42 = *(x9_42 + 8)
                    
                    if (x9_42 == 0)
                        goto label_9dd58c
                
                x9_42[1] = x24_3[1]
            
            j_4 += 1
        while (j_4 s< sx.q(*(x8_82 + 0x858)))
    
    void* x8_94 = x9_6 + i * 0x880
    
    if (*(x8_94 + 0x6b8) s>= 1)
        int64_t j_5 = 0
        void* x9_47 = var_1220 + i * 0x7cb8
        
        do
            int32_t* x27_8 = *(x9_6 + i * 0x880 + 0x6b0) + j_5 * 0x18
            int32_t k_3 = *x27_8
            int64_t fp_5 = *(x27_8 + 8)
            int64_t x20_4 = *(x27_8 + 0x10)
            uint64_t x24_4 = (zx.q(k_3) | zx.q(k_3 s>> 4)) & zx.q(*(x9_47 + 0x4310))
            int32_t* x9_50 = *(*(x9_47 + 0x4308) + (x24_4 << 3))
            
            if (x9_50 == 0)
            label_9dd680:
                arg1, v0_1 = XPooledMalloc(0x20)
                int32_t x8_96 = *x27_8
                *(arg1 + 8) = x20_4
                *(arg1 + 0x10) = fp_5
                uint64_t x9_48 = x24_4 << 3
                *arg1 = x8_96
                *(arg1 + 0x18) = *(*(x9_47 + 0x4308) + x9_48)
                *(*(x9_47 + 0x4308) + x9_48) = arg1
                *(x9_47 + 0x4314) += 1
            else
                while (k_3 != *x9_50)
                    x9_50 = *(x9_50 + 0x18)
                    
                    if (x9_50 == 0)
                        goto label_9dd680
                
                *(x9_50 + 8) = x20_4
                *(x9_50 + 0x10) = fp_5
            
            j_5 += 1
        while (j_5 s< sx.q(*(x8_94 + 0x6b8)))
    
    void* x8_104 = x9_6 + i * 0x880
    
    if (*(x8_104 + 0x6a8) s>= 1)
        int64_t x23_5 = 0
        void* x9_55 = var_1220 + i * 0x7cb8
        
        while (true)
            int32_t* x24_5 = *(x9_6 + i * 0x880 + 0x6a0) + (x23_5 << 4)
            int32_t j_6 = *x24_5
            uint64_t fp_6 = (zx.q(j_6) | zx.q(j_6 s>> 4)) & zx.q(*(x9_55 + 0x4300))
            int32_t* x9_58 = *(*(x9_55 + 0x42f8) + (fp_6 << 3))
            
            if (x9_58 == 0)
            label_9dd774:
                arg1, v0_1 = XPooledMalloc(0x18)
                uint64_t x9_56 = fp_6 << 3
                *arg1 = *x24_5
                *(arg1 + 8) = *(x24_5 + 8)
                *(arg1 + 0x10) = *(*(x9_55 + 0x42f8) + x9_56)
                *(*(x9_55 + 0x42f8) + x9_56) = arg1
                *(x9_55 + 0x4304) += 1
                x23_5 += 1
                
                if (x23_5 s>= sx.q(*(x8_104 + 0x6a8)))
                    break
            else
                while (j_6 != *x9_58)
                    x9_58 = *(x9_58 + 0x10)
                    
                    if (x9_58 == 0)
                        goto label_9dd774
                
                *(x9_58 + 8) = *(x24_5 + 8)
                x23_5 += 1
                
                if (x23_5 s>= sx.q(*(x8_104 + 0x6a8)))
                    break
    
    void* x8_5 = x9_6 + i * 0x880
    void* x10_2 = var_1220 + i * 0x7cb8
    *(x10_2 + 0x4318) = *(x8_5 + 0x6c0)
    v0_1 = *(x8_5 + 0x85c)
    *(x10_2 + 0x7570) = *(x8_5 + 0x86c)
    *(x10_2 + 0x7560) = v0_1
    int64_t x8_6 = *(x8_5 + 0x870)
    *(x10_2 + 0x757c) = *(x8_5 + 0x878)
    *(x10_2 + 0x7574) = x8_6
    
    if (*(x10_2 + 0x4314) == 0)
        void* x20_6 = x9_6 + i * 0x880
        MigrateStats(x25_1, x20_6 + 0x700)
        MigrateAchievements(x25_1, *(x20_6 + 0x820), *(x20_6 + 0x828))
        uint64_t j_8 = zx.q(*(x20_6 + 0x838))
        
        if (j_8.d s>= 1)
            void* x21_8 = *(x20_6 + 0x830) + 8
            uint64_t j_7
            
            do
                int32_t x8_119 = *(x21_8 - 8)
                bool x0_49 = *(x21_8 - 4)
                uint64_t x1_37 = zx.q(*x21_8)
                x21_8 += 0x14
                SyncedDataSet(x25_1, zx.q(x8_119 + 0x10c8e0), 
                    zx.q(SyncedAchiementLevelFromAILevel(x0_49, x1_37, false)))
                j_7 = j_8
                j_8 -= 1
            while (j_7 != 1)
    
    arg2 = var_1248_1
    i += 1
    x28_1 += 0x7cb8
    x9_1 += 0x7cb8
    fp_1 += 0x7cb8
while (i s< sx.q(*(arg2 + 8)))
