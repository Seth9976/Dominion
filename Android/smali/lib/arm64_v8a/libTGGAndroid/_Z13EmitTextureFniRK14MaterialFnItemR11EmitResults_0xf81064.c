// 函数: _Z13EmitTextureFniRK14MaterialFnItemR11EmitResults
// 地址: 0xf81064
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
int128_t v1
v0, v1 = XFormatString("samplerFn_layer%d")
int64_t x9_3 = (*(arg2 + 0x34) ^ *TEXANIM_NONE) | (*(arg2 + 0x3c) ^ *(TEXANIM_NONE + 8))
    | (*(arg2 + 0x44) ^ *(TEXANIM_NONE + 0x10)) | (*(arg2 + 0x4c) ^ *(TEXANIM_NONE + 0x18))
char var_38

if (x9_3 == 0)
    XString::XString(&var_38)
else
    v0 = *(arg2 + 0x44)
    void* x8_4 = arg3 + (sx.q(*(arg3 + muls.dp.d(arg1, 0xc) + 0x274)) << 5) + 0x334
    *x8_4 = *(arg2 + 0x34)
    *(x8_4 + 0x10) = v0
    XFormatString("\tfloat2 uv = MultiplyMatrixVec(float3(arg_uv, 1.0), gTexAnim%d).xy;\n")
uint64_t x8_5 = zx.q(*(arg3 + 0x270))
int64_t x22_1

if (x8_5.d s< 1)
label_f81144:
    x22_1 = 0xffffffff
else
    x22_1 = 0
    
    while (*(arg3 + 0x250 + (x22_1 << 3)) != *(arg2 + 0x10))
        x22_1 += 1
        
        if (x8_5 == x22_1)
            goto label_f81144

char var_40
XString::XString(&var_40)

if (x22_1.d s>= 1)
    XFormatString("%d")
    XString::operator char const*()
    XString::operator+=(&var_40)
    XString::~XString()

char var_48
XString::XString(&var_48)

if (*(arg2 + 0x28) s< 1)
label_f811e4:
    XString::XString()
    int32_t x8_10 = *(arg2 + 0x1c)
    void var_50
    
    if (x8_10 == 0)
        void var_60
        XString::XString(&var_60)
        char var_58
        XString::XString(&var_58)
        XString::operator=(&var_50)
        XString::~XString()
    label_f81270:
        XString::~XString()
        XString::GetString()
        XString::GetString()
        XString::GetString()
        XString::GetString()
        XFormatString("float4 %s(float2 arg_uv, float4 diffuse)\n{\n%s\n%s\n%s}\n")
        int64_t x8_11 = sx.q(*(arg3 + 0x208))
        void* x21_2 = arg3 + (x8_11 << 4)
        *(arg3 + 0x208) = x8_11.d + 1
        XString::operator=(x21_2 + 8)
        XString::operator=(x21_2 + 0x10)
        XString::~XString()
        XString::~XString()
        XString::~XString()
        XString::~XString()
        return XString::~XString()
    
    if (x8_10 == 1)
        void var_68
        XString::XString(&var_68)
        XString::GetString()
        XFormatString("\n\n    const float PI = 3.14159265358979323846264;\n    float2 normUV = (uv "
        "- .5) * 2.0;\n\tfloat angle   = atan2(normUV.y, normUV.x) / (2.0 * PI);\n    float2 "
        "sampleUV = float2(angle, .5);\n\tfloat4 retval = tex2D(%s, sampleUV);\n\treturn retval;\n"
        "
        XString::operator=(&var_50)
        XString::~XString()
        goto label_f81270
else
    int64_t x23_1 = 0
    
    while (*(*(arg2 + 0x20) + (x23_1 << 2)) == 0)
        XString::operator+=(&var_48)
        x23_1 += 1
        
        if (x23_1 s>= sx.q(*(arg2 + 0x28)))
            goto label_f811e4
    
    pthread_kill(pthread_self(), 6)
    XNoReturn()

pthread_kill(pthread_self(), 6)
int64_t* x0_22 = XNoReturn()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
sub_1101e04(x0_22)
noreturn
