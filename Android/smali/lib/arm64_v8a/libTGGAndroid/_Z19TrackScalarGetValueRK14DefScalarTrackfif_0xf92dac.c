// 函数: _Z19TrackScalarGetValueRK14DefScalarTrackfif
// 地址: 0xf92dac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v12
int64_t var_50 = v12
int64_t v11
int64_t var_48 = v11
int64_t v10
int64_t var_40 = v10
void* const x22
void* const var_20 = x22
uint64_t x21
uint64_t var_18 = x21
int64_t x20
int64_t var_10 = x20
int64_t v8 = arg4.q
int64_t v9 = arg2.q
uint64_t x0
float* x8_4

if (arg3 s< 1 || zx.d(*(arg1 + 0x15)) == 0)
    uint64_t x8_5 = zx.q(*(arg1 + 8))
    
    if (x8_5.d s>= 1)
        x21 = 0
        float* x9_3 = *arg1 + 8
        
        while (not(*x9_3 f>= v9.d))
            x21 += 1
            x9_3 = &x9_3[4]
            
            if (x8_5 == x21)
                x21 = zx.q(x8_5.d)
                
                if (x21.d != 0)
                    goto label_f92e90
                
                goto label_f92e4c
    
    if (x8_5.d s< 1 || x21.d == 0)
    label_f92e4c:
        int64_t x8_6 = sx.q(*(arg1 + 0xc))
        
        if (x8_6.d u< 5)
            float* x9_4 = *arg1
            return XCurveEvalNormal(zx.q(*(&data_8660b0 + (x8_6 << 2))), v8.d, *x9_4, x9_4[1])
                __tailcall
    else
    label_f92e90:
        x20 = *arg1
        
        if (x21.d != x8_5.d)
            int64_t x8_10 = sx.q(*(arg1 + 0xc))
            
            if (x8_10.d u< 5)
                x22 = &data_8660b0
                float* x8_11 = x20 + ((sx.q(x21.d) - 1) << 4)
                v12.d = x8_11[2]
                v11.d = *(x20 + (zx.q(x21.d) << 4) + 8)
                int64_t v0_3 =
                    XCurveEvalNormal(zx.q(*(&data_8660b0 + (x8_10 << 2))), v8.d, *x8_11, x8_11[1])
                int64_t x8_12 = sx.q(*(arg1 + 0xc))
                
                if (x8_12.d u< 5)
                    float* x19_1 = x20 + (zx.q(x21.d) << 4)
                    v10 = v0_3
                    v0_3.d = v9.d f- v12.d
                    v9.d = v0_3.d f/ (v11.d f- v12.d)
                    float v0_5 = XCurveEvalNormal(zx.q(*(&data_8660b0 + (x8_12 << 2))), v8.d, 
                        *x19_1, x19_1[1])
                    return XCurveEvalNormal(zx.q(x19_1[3]), v9.d, v10.d, v0_5) __tailcall
        else
            int64_t x9_6 = sx.q(*(arg1 + 0xc))
            
            if (x9_6.d u< 5)
                x0 = zx.q(*(&data_8660b0 + (x9_6 << 2)))
                x8_4 = x20 + ((sx.q(x8_5.d) - 1) << 4)
                goto label_f92e08
else
    int64_t x8_2 = sx.q(*(arg1 + 0xc))
    
    if (x8_2.d u< 5)
        x0 = zx.q(*(&data_8660b0 + (x8_2 << 2)))
        x8_4 = *arg1 + ((sx.q(*(arg1 + 8)) - 1) << 4)
    label_f92e08:
        return XCurveEvalNormal(x0, v8.d, *x8_4, x8_4[1]) __tailcall
pthread_kill(pthread_self(), 6)
int64_t var_a0 = v9
int64_t var_98 = v8
int64_t var_90 = XNoReturn()
void* const var_70 = x22
uint64_t var_68 = x21
int64_t var_60 = x20
DefScalarTrack const& var_58 = arg1
*(macro_field_ParamRange + 0x170) = gpParamCurveSymbolMap
*(macro_field_ParamRange + 0x68) = 4
*macro_field_ParamRange = 0
*(macro_field_ParamRange + 8) = &data_76a120
*(macro_field_ParamRange + 0x10) = "float"
*(macro_field_ParamRange + 0x18) = 0
*(macro_field_ParamRange + 0x20) = 0
*(macro_field_ParamRange + 0x48) = 0
*(macro_field_ParamRange + 0x30) = 0
*(macro_field_ParamRange + 0x38) = 0
*(macro_field_ParamRange + 0x28) = 0
*(macro_field_ParamRange + 0x40) = 0
*(macro_field_ParamRange + 0x58) = &data_793a18
*(macro_field_ParamRange + 0x70) = &data_7257a7
*(macro_field_ParamRange + 0x78) = "float"
*(macro_field_ParamRange + 0x80) = 0
*(macro_field_ParamRange + 0x88) = 0
*(macro_field_ParamRange + 0xb0) = 0
*(macro_field_ParamRange + 0x90) = 0
*(macro_field_ParamRange + 0x98) = 0
*(macro_field_ParamRange + 0xa8) = 0
*(macro_field_ParamRange + 0xa0) = 0
*(macro_field_ParamRange + 0xc0) = &data_793a18
*(macro_field_ParamRange + 0xd0) = 8
*(macro_field_ParamRange + 0xd8) = &data_72d864
*(macro_field_ParamRange + 0xe0) = "float"
*(macro_field_ParamRange + 0xe8) = 0
*(macro_field_ParamRange + 0xf0) = 0
*(macro_field_ParamRange + 0x118) = 0
*(macro_field_ParamRange + 0x100) = 0
*(macro_field_ParamRange + 0x108) = 0
*(macro_field_ParamRange + 0x110) = 0
*(macro_field_ParamRange + 0xf8) = 0
*(macro_field_ParamRange + 0x128) = &data_793a18
*(macro_field_ParamRange + 0x138) = 0xc
*(macro_field_ParamRange + 0x140) = "curve"
*(macro_field_ParamRange + 0x148) = &data_746c1b
*(macro_field_ParamRange + 0x150) = 0
*(macro_field_ParamRange + 0x158) = 0
*(macro_field_ParamRange + 0x160) = 0
*(macro_field_ParamRange + 0x168) = 0
*(macro_field_ParamRange + 0x178) = 0
*(macro_field_ParamRange + 0x180) = 1
*(macro_field_ParamRange + 0x190) = &data_793a18
*(macro_field_ParamRange + 0x50) = 0x600
*(macro_field_ParamRange + 0x60) = 4
*(macro_field_ParamRange + 0xb8) = 0x600
*(macro_field_ParamRange + 0xc8) = 4
*(macro_field_ParamRange + 0x120) = 0x600
*(macro_field_ParamRange + 0x130) = 4
*(macro_field_ParamRange + 0x188) = 0x602
*(macro_field_ParamRange + 0x198) = 4
*macro_ptr_ParamRange = RegisterDefMapBeforeMain(macro_map_ParamRange)
*(macro_field_DefScalarTrack + 8) = &data_774d4b
*(macro_field_DefScalarTrack + 0x10) = "variablearray"
*(macro_field_DefScalarTrack + 0x20) = 8
*(macro_field_DefScalarTrack + 0xd0) = 0x10
*(macro_field_DefScalarTrack + 0x50) = 0x400
*(macro_field_DefScalarTrack + 0x70) = "distribution"
*(macro_field_DefScalarTrack + 0x78) = &data_746c1b
*(macro_field_DefScalarTrack + 0xa0) = gpDistributionFunctionSymbolMap
*(macro_field_DefScalarTrack + 0x138) = 0x14
*(macro_field_DefScalarTrack + 0xd8) = "wobbleFactor"
*(macro_field_DefScalarTrack + 0xe0) = "float"
*(macro_field_DefScalarTrack + 0xc8) = 4
*(macro_field_DefScalarTrack + 0x130) = 4
*(macro_field_DefScalarTrack + 0x68) = 0xc
*(macro_field_DefScalarTrack + 0x120) = 0x600
*(macro_field_DefScalarTrack + 0x188) = 0x600
*(macro_field_DefScalarTrack + 0x1f0) = 0x600
*macro_field_DefScalarTrack = 0
*(macro_field_DefScalarTrack + 0x18) = 0
*(macro_field_DefScalarTrack + 0x48) = 0
*(macro_field_DefScalarTrack + 0x30) = 0
*(macro_field_DefScalarTrack + 0x38) = 0
*(macro_field_DefScalarTrack + 0x28) = "ParamRange"
*(macro_field_DefScalarTrack + 0x40) = 0
*(macro_field_DefScalarTrack + 0x58) = &data_793a18
*(macro_field_DefScalarTrack + 0x80) = 0
*(macro_field_DefScalarTrack + 0x88) = 0
*(macro_field_DefScalarTrack + 0x90) = 0
*(macro_field_DefScalarTrack + 0x98) = 0
*(macro_field_DefScalarTrack + 0xa8) = 0
*(macro_field_DefScalarTrack + 0xb0) = 0
*(macro_field_DefScalarTrack + 0xc0) = &data_793a18
*(macro_field_DefScalarTrack + 0xe8) = 0
*(macro_field_DefScalarTrack + 0xf0) = 0
*(macro_field_DefScalarTrack + 0x118) = 0
*(macro_field_DefScalarTrack + 0x100) = 0
*(macro_field_DefScalarTrack + 0x108) = 0
*(macro_field_DefScalarTrack + 0x110) = 0
*(macro_field_DefScalarTrack + 0xf8) = 0
*(macro_field_DefScalarTrack + 0x128) = &data_793a18
*(macro_field_DefScalarTrack + 0x140) = "inherit"
*(macro_field_DefScalarTrack + 0x148) = "bool"
*(macro_field_DefScalarTrack + 0x150) = 0
*(macro_field_DefScalarTrack + 0x158) = 0
*(macro_field_DefScalarTrack + 0x160) = 0
*(macro_field_DefScalarTrack + 0x168) = 0
*(macro_field_DefScalarTrack + 0x178) = 0
*(macro_field_DefScalarTrack + 0x170) = 0
*(macro_field_DefScalarTrack + 0x180) = 1
*(macro_field_DefScalarTrack + 0x190) = &data_793a18
*(macro_field_DefScalarTrack + 0x1a0) = 0x15
*(macro_field_DefScalarTrack + 0x1a8) = "playOnceAndHold"
*(macro_field_DefScalarTrack + 0x1b0) = "bool"
*(macro_field_DefScalarTrack + 0x1b8) = 0
*(macro_field_DefScalarTrack + 0x1c0) = 0
*(macro_field_DefScalarTrack + 0x1e8) = 0
*(macro_field_DefScalarTrack + 0x1c8) = 0
*(macro_field_DefScalarTrack + 0x1d0) = 0
*(macro_field_DefScalarTrack + 0x1e0) = 0
*(macro_field_DefScalarTrack + 0x1d8) = 0
*(macro_field_DefScalarTrack + 0x1f8) = &data_793a18
*(macro_field_DefScalarTrack + 0x60) = 0x1000000008
*(macro_field_DefScalarTrack + 0xb8) = 2
*(macro_field_DefScalarTrack + 0x198) = 1
*(macro_field_DefScalarTrack + 0x200) = 1
uint64_t result = RegisterDefMapBeforeMain(macro_map_DefScalarTrack)
*macro_ptr_DefScalarTrack = result
return result
