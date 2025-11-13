// 函数: _Z9EmitGroupPKcRiPK14MaterialFnItemiR11EmitResults
// 地址: 0xf81cb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XFormatString("samplerFn_%s")
int64_t x8_1 = sx.q(*(arg5 + 0x208))
int64_t x9 = sx.q(*(arg5 + 0x24c))
*(arg5 + 0x208) = x8_1.d + 1
*(arg5 + 0x24c) = x9.d + 1
*(arg5 + (x9 << 2) + 0x20c) = x8_1.d
XString::operator=(arg5 + (x8_1 << 4) + 8)
int64_t x8
int64_t var_78 = x8
int32_t x19_1 = *arg2
int32_t x8_2 = x19_1 + 1
int32_t var_68 = x8_2
int32_t x24

if (x8_2 s>= arg4 + 1 + x19_1)
    x24 = x19_1
    char var_70
    
    if (x24 != 0xffffffff)
    label_f81ec4:
        XString::XString(&var_70)
        int64_t x23_1 = sx.q(x24)
        
        if (*(arg3 + x23_1 * 0x58 + 0x28) s>= 1)
            int64_t i = 0
            
            do
                if (*(*(arg3 + x23_1 * 0x58 + 0x20) + (i << 2)) != 0)
                    pthread_kill(pthread_self(), 6)
                    int64_t* x0_15 = XNoReturn()
                    XString::~XString()
                    XString::~XString()
                    XString::~XString()
                    sub_1101e04(x0_15)
                    noreturn
                
                XString::operator+=(&var_70)
                i += 1
            while (i s< sx.q(*(arg3 + x23_1 * 0x58 + 0x28)))
        
        void* x22_1 = arg5 + (sx.q(*(arg5 + (sx.q(*(arg5 + 0x24c)) << 2) + 0x208)) << 4) + 0x10
        XString::operator+(&var_70)
        XString::operator=(x22_1)
        XString::~XString()
        int128_t v0_1
        int128_t v1_1
        v0_1, v1_1 = XString::~XString()
        int64_t x9_14 = (*(arg3 + x23_1 * 0x58 + 0x34) ^ *TEXANIM_NONE)
            | (*(arg3 + x23_1 * 0x58 + 0x3c) ^ *(TEXANIM_NONE + 8))
            | (*(arg3 + x23_1 * 0x58 + 0x44) ^ *(TEXANIM_NONE + 0x10))
            | (*(arg3 + x23_1 * 0x58 + 0x4c) ^ *(TEXANIM_NONE + 0x18))
        
        if (x9_14 == 0)
            XString::XString(&var_70)
        else
            v0_1 = *(arg3 + x23_1 * 0x58 + 0x44)
            void* x8_16 = arg5 + (sx.q(*(arg5 + sx.q(x19_1) * 0xc + 0x274)) << 5) + 0x334
            *x8_16 = *(arg3 + x23_1 * 0x58 + 0x34)
            *(x8_16 + 0x10) = v0_1
            XFormatString("\tfloat2 uv = MultiplyMatrixVec(float3(arg_uv, 1.0), gTexAnim%d).xy;\n")
        
        void* x21_2 = arg5 + (sx.q(*(arg5 + (sx.q(*(arg5 + 0x24c)) << 2) + 0x208)) << 4) + 0x10
        XString::operator+(&var_70)
        XString::operator=(x21_2)
    else
    label_f81fe8:
        XString::XString(&var_70)
        void* x21_1 = arg5 + (sx.q(*(arg5 + (sx.q(*(arg5 + 0x24c)) << 2) + 0x208)) << 4) + 0x10
        XString::operator+(&var_70)
        XString::operator=(x21_1)
    XString::~XString()
    XString::~XString()
    return EmitFnPostlude(arg5)

x24 = x19_1

while (true)
    int64_t x8_3 = sx.q(x8_2)
    
    if (zx.d(*(arg3 + muls.dp.d(x8_2, 0x58) + 4)) != 0)
        x8_2 = x8_3.d + 1
        var_68 = x8_2
        
        if (x8_2 s>= arg4 + 1 + x24)
            break
    else
        int32_t* x9_6 = arg3 + x8_3 * 0x58
        
        if ((*x9_6 | 4) == 4)
            uint64_t x10_3 = zx.q(*(arg5 + 0x270))
            int64_t x13_1
            
            if (x10_3.d s>= 1)
                x13_1 = 0
                
                while (*(arg5 + 0x250 + (x13_1 << 3)) != *(arg3 + x8_3 * 0x58 + 0x10))
                    x13_1 += 1
                    
                    if (x10_3 == x13_1)
                        goto label_f81ddc
            
            if (x10_3.d s< 1 || x13_1.d == 0xffffffff)
            label_f81ddc:
                *(arg5 + 0x270) = x10_3.d + 1
                *(arg5 + (sx.q(x10_3.d) << 3) + 0x250) = *(arg3 + x8_3 * 0x58 + 0x10)
            else
                x10_3 = zx.q(x13_1.d)
            
            *(arg5 + x8_3 * 0xc + 0x278) = x10_3.d
        
        void* x10_4 = arg3 + x8_3 * 0x58
        int64_t x10_8 = (*(x10_4 + 0x34) ^ *TEXANIM_NONE) | (*(x10_4 + 0x3c) ^ *(TEXANIM_NONE + 8))
            | (*(x10_4 + 0x44) ^ *(TEXANIM_NONE + 0x10))
            | (*(x10_4 + 0x4c) ^ *(TEXANIM_NONE + 0x18))
        int32_t x10_9
        
        if (x10_8 == 0)
            x10_9 = -1
        else
            x10_9 = *(arg5 + 0x3b4)
            *(arg5 + 0x3b4) = x10_9 + 1
        
        *(arg5 + x8_3 * 0xc + 0x274) = x10_9
        int32_t x10_12
        
        if (*x9_6 != 3)
            x10_12 = 0
        else
            x10_12 = *(arg3 + x8_3 * 0x58 + 8)
        
        EmitItemFunction(arg3, &var_68, arg5, (x8_3.d == *arg2 + arg4 - x10_12 ? 1 : 0).b)
        x24 = *arg2
        x8_2 = var_68
        
        if (x8_2 s>= arg4 + 1 + x24)
            break

if (x24 == 0xffffffff)
    goto label_f81fe8

goto label_f81ec4
