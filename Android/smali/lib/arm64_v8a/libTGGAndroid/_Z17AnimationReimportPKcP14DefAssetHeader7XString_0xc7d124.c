// 函数: _Z17AnimationReimportPKcP14DefAssetHeader7XString
// 地址: 0xc7d124
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
void* x0 = XMalloc(0x20)
DefinitionFillBlockWithDefaults(x0, *macro_ptr_DefAnimImportData)
XString::operator char const*()
XmlReader::XmlReader()
char var_210
XString::XString(&var_210)
HalFilePathCreate(&var_210, 3)
XString::~XString()
HalFilePath var_208
void var_1c0
int32_t x22_1

if ((XmlReadFile(&var_1c0, &var_208) & 1) == 0)
labelid_7:
    x22_1 = 0
else if ((XmlReadKnownOpenBlock(&var_1c0, "Root") & 1) == 0)
labelid_7:
    x22_1 = 0
else
    int32_t var_214
    
    if ((XmlReadKnownOpenBlock(&var_1c0, "VERSION") & 1) == 0)
    labelid_7:
        x22_1 = 0
    else if ((XmlReadLiteralInt(&var_1c0, &var_214) & (var_214 == 2 ? 1 : 0) & 1) == 0)
    label_c7d32c:
        x22_1 = 0
    else if ((XmlReadKnownCloseBlock(&var_1c0, "VERSION") & 1) == 0)
    label_c7d32c_1:
        x22_1 = 0
    else if ((XmlReadKnownOpenBlock(&var_1c0, "BONELIST") & 1) == 0)
    label_c7d32c_2:
        x22_1 = 0
    else
        *(x0 + 4) = 0
        Crc32* x0_17 = XCalloc(0x1800)
        *(x0 + 8) = x0_17
        DefDeepCopyHashName(x0_17 + 8, x0_17, "Root[0]")
        *(x0 + 4) += 1
        
        while (true)
            float var_1f0
            
            if ((XmlReadKnownCloseBlock(&var_1c0, "BONELIST") & 1) == 0)
                if ((XmlReadKnownOpenBlock(&var_1c0, "BONE") & 1) == 0)
                    goto label_c7d32c_2
                
                XString::XString()
                
                if ((XmlReadLiteralString(&var_1c0, &var_1f0) & 1) != 0)
                    int64_t x27_1 = sx.q(*(x0 + 4))
                    
                    if (x27_1.d s<= 0xff)
                        int32_t* x28_1 = *(x0 + 8)
                        int64_t x0_27 = XMalloc(XString::Length() + 1)
                        *(x28_1 + x27_1 * 0x18 + 8) = x0_27
                        strcpy(x0_27, XString::operator char const*())
                        x28_1[x27_1 * 6] = strcrc32(*(x28_1 + x27_1 * 0x18 + 8), 0)
                        
                        if ((XmlReadKnownCloseBlock(&var_1c0, "BONE") & 1) != 0)
                            *(x0 + 4) += 1
                            XString::~XString()
                            continue
                
                XString::~XString()
                goto label_c7d32c_2
            
            if ((XmlReadKnownOpenBlock(&var_1c0, "DATA") & 1) == 0)
                goto label_c7d32c_2
            
            XString::XString()
            XString var_220
            
            if ((XmlReadLiteralString(&var_1c0, &var_220) & 1) == 0)
                x22_1 = 0
            else
                void* x24_2 = XString::operator char const*() + 1
                uint32_t x8_11
                
                while (true)
                    x8_11 = zx.d(*(x24_2 - 1))
                    
                    if (x8_11 != 0xa && x8_11 != 0xd)
                        break
                    
                    x24_2 += 1
                
                int64_t x22_2 = 0
                
                while (true)
                    int32_t x8_12 = x8_11 & 0xff
                    
                    if (x8_12 u<= 0xd && (1 << x8_12 & 0x2401) != 0)
                        break
                    
                    x8_11 = zx.d(*(x24_2 + x22_2))
                    x22_2 += 1
                
                XString::XString()
                char var_1c8
                XString::AppendLength(&var_1c8, x24_2.d - 1)
                int32_t var_1cc = 0
                sscanf(XString::operator char const*(), "%d", &var_1cc)
                int32_t x8_15 = var_1cc + 1
                var_1cc = x8_15
                
                if (x8_15 == *(x0 + 4))
                    void* x24_3 = x24_2 + x22_2
                    *(x0 + 4) = x8_15
                    uint32_t x8_16
                    
                    while (true)
                        x8_16 = zx.d(*(x24_3 - 1))
                        
                        if (x8_16 != 0xa && x8_16 != 0xd)
                            break
                        
                        x24_3 += 1
                    
                    int64_t x22_3 = 0
                    
                    while (true)
                        int32_t x8_17 = x8_16 & 0xff
                        
                        if (x8_17 u<= 0xd && (1 << x8_17 & 0x2401) != 0)
                            break
                        
                        x8_16 = zx.d(*(x24_3 + x22_3))
                        x22_3 += 1
                    
                    XString::XString()
                    XString::AppendLength(&var_1f0, x24_3.d - 1)
                    XString::operator=(&var_1c8)
                    XString::~XString()
                    *x0 = 0
                    sscanf(XString::operator char const*(), "%d", x0)
                    int32_t x8_19 = *x0
                    
                    if (x8_19 s>= 1)
                        int32_t x8_20 = var_1cc * x8_19
                        *(x0 + 0x10) = x8_20
                        void* x24_4 = x24_3 + x22_3
                        *(x0 + 0x18) = XCalloc(x8_20 * 0x2c)
                        uint32_t x8_21
                        
                        while (true)
                            x8_21 = zx.d(*(x24_4 - 1))
                            
                            if (x8_21 != 0xa && x8_21 != 0xd)
                                break
                            
                            x24_4 += 1
                        
                        int64_t x22_4 = 0
                        
                        while (true)
                            int32_t x8_22 = x8_21 & 0xff
                            
                            if (x8_22 u<= 0xd && (1 << x8_22 & 0x2401) != 0)
                                break
                            
                            x8_21 = zx.d(*(x24_4 + x22_4))
                            x22_4 += 1
                        
                        XString::XString()
                        XString::AppendLength(&var_1f0, x24_4.d - 1)
                        XString::operator=(&var_1c8)
                        void* x24_5 = x24_4 + x22_4
                        XString::~XString()
                        uint32_t x8_24
                        
                        while (true)
                            x8_24 = zx.d(*(x24_5 - 1))
                            
                            if (x8_24 != 0xa && x8_24 != 0xd)
                                break
                            
                            x24_5 += 1
                        
                        int64_t x22_5 = 0
                        
                        while (true)
                            int32_t x8_25 = x8_24 & 0xff
                            
                            if (x8_25 u<= 0xd && (1 << x8_25 & 0x2401) != 0)
                                break
                            
                            x8_24 = zx.d(*(x24_5 + x22_5))
                            x22_5 += 1
                        
                        XString::XString()
                        XString::AppendLength(&var_1f0, x24_5.d - 1)
                        XString::operator=(&var_1c8)
                        XString::~XString()
                        
                        if (*x0 s>= 1)
                            v8.d = fconvert.s(1f)
                            void* x26_1 = x24_5 + x22_5 - 1
                            v9.d = fconvert.s(0.5f)
                            int32_t var_22c_1 = 0
                            bool cond:0_1
                            
                            do
                                void* x23_5 = x26_1
                                uint32_t x8_31
                                
                                while (true)
                                    x8_31 = zx.d(*x23_5)
                                    
                                    if (x8_31 != 0xa && x8_31 != 0xd)
                                        break
                                    
                                    x23_5 += 1
                                    x26_1 += 1
                                
                                int64_t x24_6 = 0
                                
                                while (true)
                                    int32_t x8_32 = x8_31 & 0xff
                                    
                                    if (x8_32 u<= 0xd && (1 << x8_32 & 0x2401) != 0)
                                        break
                                    
                                    x8_31 = zx.d(*(x23_5 + x24_6 + 1))
                                    x24_6 += 1
                                    x26_1 += 1
                                
                                XString::XString()
                                XString::AppendLength(&var_1f0, x23_5.d)
                                XString::operator=(&var_1c8)
                                void* x23_6 = x23_5 + x24_6
                                XString::~XString()
                                uint32_t x8_35
                                
                                while (true)
                                    x8_35 = zx.d(*x23_6)
                                    
                                    if (x8_35 != 0xa && x8_35 != 0xd)
                                        break
                                    
                                    x23_6 += 1
                                    x26_1 += 1
                                
                                int64_t x24_7 = 0
                                
                                while (true)
                                    int32_t x8_36 = x8_35 & 0xff
                                    
                                    if (x8_36 u<= 0xd && (1 << x8_36 & 0x2401) != 0)
                                        break
                                    
                                    x8_35 = zx.d(*(x23_6 + x24_7 + 1))
                                    x24_7 += 1
                                
                                XString::XString()
                                XString::AppendLength(&var_1f0, x23_6.d)
                                XString::operator=(&var_1c8)
                                XString::~XString()
                                int64_t x22_6 = *(x0 + 0x18)
                                int32_t fp_3 = var_1cc * var_22c_1
                                int128_t* x8_39 = x22_6 + muls.dp.d(fp_3, 0x2c)
                                *x8_39 = *QI
                                int64_t x10_2 = *V1
                                *(x8_39 + 0x24) = *(V1 + 8)
                                *(x8_39 + 0x1c) = x10_2
                                int64_t x8_41 = x22_6 + sx.q(fp_3) * 0x2c
                                x26_1 = x23_6 + x24_7
                                sscanf(XString::operator char const*(), "%f %f %f", x8_41 + 0x10, 
                                    x8_41 + 0x14, x8_41 + 0x18)
                                int32_t x8_42 = var_1cc
                                
                                if (x8_42 s>= 2)
                                    int32_t fp_4 = 1
                                    void* x23_11
                                    int64_t x24_12
                                    
                                    do
                                        int64_t x9_8 = *(x0 + 0x18)
                                        void* x23_7 = x26_1
                                        uint32_t x9_9
                                        
                                        while (true)
                                            x9_9 = zx.d(*x23_7)
                                            
                                            if (x9_9 != 0xa && x9_9 != 0xd)
                                                break
                                            
                                            x23_7 += 1
                                            x26_1 += 1
                                        
                                        int64_t x24_8 = 0
                                        int64_t x22_7 = sx.q(fp_4 + x8_42 * var_22c_1)
                                        
                                        while (true)
                                            int32_t x8_45 = x9_9 & 0xff
                                            
                                            if (x8_45 u<= 0xd && (1 << x8_45 & 0x2401) != 0)
                                                break
                                            
                                            x9_9 = zx.d(*(x23_7 + x24_8 + 1))
                                            x24_8 += 1
                                            x26_1 += 1
                                        
                                        XString::XString()
                                        XString::AppendLength(&var_1f0, x23_7.d)
                                        XString::operator=(&var_1c8)
                                        XString::~XString()
                                        int64_t x8_47 = x9_8 + x22_7 * 0x2c
                                        void* x23_8 = x23_7 + x24_8
                                        sscanf(XString::operator char const*(), "%f %f %f", 
                                            x8_47 + 0x1c, x8_47 + 0x20, x8_47 + 0x24)
                                        uint32_t x8_49
                                        
                                        while (true)
                                            x8_49 = zx.d(*x23_8)
                                            
                                            if (x8_49 != 0xa && x8_49 != 0xd)
                                                break
                                            
                                            x23_8 += 1
                                            x26_1 += 1
                                        
                                        int64_t x24_9 = 0
                                        
                                        while (true)
                                            int32_t x8_50 = x8_49 & 0xff
                                            
                                            if (x8_50 u<= 0xd && (1 << x8_50 & 0x2401) != 0)
                                                break
                                            
                                            x8_49 = zx.d(*(x23_8 + x24_9 + 1))
                                            x24_9 += 1
                                            x26_1 += 1
                                        
                                        XString::XString()
                                        char var_1f8
                                        XString::AppendLength(&var_1f8, x23_8.d)
                                        XString::operator=(&var_1c8)
                                        XString::~XString()
                                        void* x23_9 = x23_8 + x24_9
                                        float var_1e8
                                        sscanf(XString::operator char const*(), "%f %f %f", 
                                            &var_1f0, &var_1f0 | 4, &var_1e8)
                                        uint32_t x8_53
                                        
                                        while (true)
                                            x8_53 = zx.d(*x23_9)
                                            
                                            if (x8_53 != 0xa && x8_53 != 0xd)
                                                break
                                            
                                            x23_9 += 1
                                            x26_1 += 1
                                        
                                        int64_t x24_10 = 0
                                        
                                        while (true)
                                            int32_t x8_54 = x8_53 & 0xff
                                            
                                            if (x8_54 u<= 0xd && (1 << x8_54 & 0x2401) != 0)
                                                break
                                            
                                            x8_53 = zx.d(*(x23_9 + x24_10 + 1))
                                            x24_10 += 1
                                            x26_1 += 1
                                        
                                        XString::XString()
                                        XString::AppendLength(&var_1f8, x23_9.d)
                                        XString::operator=(&var_1c8)
                                        XString::~XString()
                                        void* x23_10 = x23_9 + x24_10
                                        float var_1e4
                                        float var_1e0
                                        float var_1dc
                                        sscanf(XString::operator char const*(), "%f %f %f", 
                                            &var_1e4, &var_1e0, &var_1dc)
                                        uint32_t x8_57
                                        
                                        while (true)
                                            x8_57 = zx.d(*x23_10)
                                            
                                            if (x8_57 != 0xa && x8_57 != 0xd)
                                                break
                                            
                                            x23_10 += 1
                                            x26_1 += 1
                                        
                                        int64_t x24_11 = 0
                                        
                                        while (true)
                                            int32_t x8_58 = x8_57 & 0xff
                                            
                                            if (x8_58 u<= 0xd && (1 << x8_58 & 0x2401) != 0)
                                                break
                                            
                                            x8_57 = zx.d(*(x23_10 + x24_11 + 1))
                                            x24_11 += 1
                                            x26_1 += 1
                                        
                                        XString::XString()
                                        XString::AppendLength(&var_1f8, x23_10.d)
                                        XString::operator=(&var_1c8)
                                        XString::~XString()
                                        float var_1d8
                                        float var_1d4
                                        float var_1d0
                                        sscanf(XString::operator char const*(), "%f %f %f", 
                                            &var_1d8, &var_1d4, &var_1d0)
                                        float v6_1 = var_1f0
                                        float var_1ec
                                        float v0_2 = var_1ec
                                        float v7_1 = var_1e0
                                        float v5_1 = var_1dc
                                        float v16_1 = var_1d0
                                        float v2_1 = var_1d8
                                        float v4_1 = var_1d4
                                        float v3_1 = var_1e8
                                        float v1_1 = var_1e4
                                        float v17_1 = v6_1 + v7_1
                                        float v18_1 = v17_1 + v16_1
                                        var_1ec = v1_1
                                        var_1e8 = v2_1
                                        var_1e4 = v0_2
                                        var_1dc = v4_1
                                        var_1d8 = v3_1
                                        var_1d4 = v5_1
                                        
                                        if (not(v18_1 <= 0f))
                                            v2_1 = v2_1 - v3_1
                                            v3_1 = sqrt(v18_1 f+ v8.d)
                                            v4_1 = v5_1 - v4_1
                                            v1_1 = v0_2 - v1_1
                                            v5_1 = v9.d f/ v3_1
                                            v0_2 = v3_1 f* v9.d
                                            v3_1 = v4_1 * v5_1
                                            v2_1 = v2_1 * v5_1
                                            v1_1 = v1_1 * v5_1
                                        else if (not(v7_1 <= v6_1))
                                            if (v16_1 > v7_1)
                                                goto label_c7db88
                                            
                                            v4_1 = v4_1 + v5_1
                                            v5_1 = v1_1 + v0_2
                                            v0_2 = sqrt(v7_1 - (v6_1 + v16_1) f+ v8.d)
                                            v3_1 = v2_1 - v3_1
                                            
                                            if (v0_2 != 0f)
                                                v6_1 = v9.d f/ v0_2
                                            else
                                                v6_1 = v0_2
                                            
                                            v2_1 = v0_2 f* v9.d
                                            v0_2 = v3_1 * v6_1
                                            v1_1 = v4_1 * v6_1
                                            v3_1 = v5_1 * v6_1
                                        else if (v16_1 <= v6_1)
                                            v1_1 = v1_1 + v0_2
                                            v0_2 = sqrt(v6_1 - (v7_1 + v16_1) f+ v8.d)
                                            v4_1 = v5_1 - v4_1
                                            v5_1 = v2_1 + v3_1
                                            
                                            if (v0_2 != 0f)
                                                v6_1 = v9.d f/ v0_2
                                            else
                                                v6_1 = v0_2
                                            
                                            v3_1 = v0_2 f* v9.d
                                            v0_2 = v4_1 * v6_1
                                            v2_1 = v1_1 * v6_1
                                            v1_1 = v5_1 * v6_1
                                        else
                                        label_c7db88:
                                            v0_2 = v0_2 - v1_1
                                            v2_1 = v2_1 + v3_1
                                            v3_1 = sqrt(v16_1 - v17_1 f+ v8.d)
                                            v4_1 = v4_1 + v5_1
                                            
                                            if (v3_1 != 0f)
                                                v5_1 = v9.d f/ v3_1
                                            else
                                                v5_1 = v3_1
                                            
                                            v1_1 = v3_1 f* v9.d
                                            v0_2 = v0_2 * v5_1
                                            v3_1 = v2_1 * v5_1
                                            v2_1 = v4_1 * v5_1
                                        
                                        x23_11 = x23_10 + x24_11
                                        float* x8_60 = x9_8 + x22_7 * 0x2c
                                        *x8_60 = v3_1
                                        x8_60[1] = v2_1
                                        x8_60[2] = v1_1
                                        x8_60[3] = v0_2
                                        uint32_t x8_62
                                        
                                        while (true)
                                            x8_62 = zx.d(*x23_11)
                                            
                                            if (x8_62 != 0xa && x8_62 != 0xd)
                                                break
                                            
                                            x23_11 += 1
                                            x26_1 += 1
                                        
                                        x24_12 = 0
                                        
                                        while (true)
                                            int32_t x8_63 = x8_62 & 0xff
                                            
                                            if (x8_63 u<= 0xd && (1 << x8_63 & 0x2401) != 0)
                                                break
                                            
                                            x8_62 = zx.d(*(x23_11 + x24_12 + 1))
                                            x24_12 += 1
                                        
                                        XString::XString()
                                        XString::AppendLength(&var_1f8, x23_11.d)
                                        XString::operator=(&var_1c8)
                                        XString::~XString()
                                        int64_t x8_65 = x9_8 + x22_7 * 0x2c
                                        x26_1 = x23_11 + x24_12
                                        sscanf(XString::operator char const*(), "%f %f %f", 
                                            x8_65 + 0x10, x8_65 + 0x14, x8_65 + 0x18)
                                        x8_42 = var_1cc
                                        fp_4 += 1
                                    while (fp_4 s< x8_42)
                                    
                                    x26_1 = x23_11 + x24_12
                                
                                cond:0_1 = var_22c_1 + 1 s>= *x0
                                var_22c_1 += 1
                            while (not(cond:0_1))
                
                XString::~XString()
                
                if ((XmlReadKnownCloseBlock(&var_1c0, "DATA") & 1) == 0)
                    x22_1 = 0
                else
                    x22_1 = XmlReadKnownCloseBlock(&var_1c0, "Root")
            
            XString::~XString()
            break

XString::~XString()
XmlReader::~XmlReader()

if ((x22_1 & 1) == 0)
    XString::operator char const*()
    XTrace("anim reimport reading xan '%s'")
    XFree(x0)
else
    *(*arg2 + 0x18) = x0

if (*(x25 + 0x28) == x8)
    return zx.q(x22_1) & 1

__stack_chk_fail()
noreturn
