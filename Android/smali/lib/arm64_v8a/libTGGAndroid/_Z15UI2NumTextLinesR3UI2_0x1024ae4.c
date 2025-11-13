// 函数: _Z15UI2NumTextLinesR3UI2
// 地址: 0x1024ae4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v12
int64_t var_50 = v12
int64_t v11
int64_t var_40 = v11
int64_t v10
int64_t var_38 = v10
int64_t v9
int64_t var_30 = v9
int64_t v8
int64_t var_28 = v8
int32_t x19

if (*(arg1 + 0x1710) f!= 0f)
    UI2TextStr(arg1)
    int32_t x0 = XString::IsEmpty()
    int64_t v0_2
    
    if ((x0 & 1) == 0)
        v8 = UI2PropDynamic<float>::Eval(GameGetTimeSimulation())
        v0_2.d = *(arg1 + 0x16b0)
        v0_2.d = v8.d f* v0_2.d
    
    if ((x0 & 1) == 0 && v0_2.d f!= 0f)
        float v4_1 = *(arg1 + 0x1468)
        v9.d = *(arg1 + 0x175c)
        v10.d = *V20
        v0_2.d = *(arg1 + 0x1760)
        v11.d = v10.d f+ *(arg1 + 0x15a0) * v4_1
        v12.d = v9.d f- *(arg1 + 0x15a8) * v4_1
        v0_2.d = v0_2.d f- *(arg1 + 0x15ac) * v4_1
        int32_t x21_1 = v0_2.d f> *(V20 + 4) + *(arg1 + 0x15a4) * v4_1 ? 1 : 0
        UI2DefaultFancy(arg1)
        int32_t x8_1 = (v12.d f> v11.d ? 1 : 0) & x21_1
        float v1_2
        
        if (x8_1 != 0)
            v1_2 = v12.d
        else
            v1_2 = v9.d
        
        float v2_2
        
        if (x8_1 != 0)
            v2_2 = v11.d
        else
            v2_2 = v10.d
        
        int32_t var_78_1 = 3
        int32_t var_ec
        FancyStringData var_e8
        XString var_48
        WrapperGetFancyHeight(&var_48, *(gUI2 + 0x68), &var_e8, nullptr, &var_ec, 
            fconvert.s(1f) f/ v8.d * (v1_2 - v2_2))
        x19 = var_ec
    else
        x19 = 0
    
    XString::~XString()
else
    x19 = 0

return zx.q(x19)
