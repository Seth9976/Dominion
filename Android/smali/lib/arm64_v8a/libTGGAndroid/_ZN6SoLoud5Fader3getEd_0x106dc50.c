// 函数: _ZN6SoLoud5Fader3getEd
// 地址: 0x106dc50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x0
double v1 = *(entry_x0 + 0x18)

if (entry_x0[0xb] == 2)
    if (not(v1 <= arg1))
        v1 = arg1
        *(entry_x0 + 0x18) = arg1
    
    int64_t x0
    double v0
    double v1_1
    v0, x0, v1_1 = sin((arg1 - v1) * *(entry_x0 + 0x20))
    v1_1.d = entry_x0[2]
    double v3_1 = fconvert.d(v1_1.d)
    v1_1.d = v1_1.d f+ *entry_x0
    v0.d = fconvert.s(v0 * v3_1 + fconvert.d(v1_1.d))
    return 

double v2
double v3

if (not(v1 <= arg1))
    v1.d = entry_x0[0xa]
    v2.d = *entry_x0
    v3.d = entry_x0[1]
    double v4
    v4.d = entry_x0[2]
    *entry_x0 = v1.d
    v2.d = v1.d f- v2.d
    v1.d = v3.d f- v1.d
    v3 = *(entry_x0 + 0x10)
    v2.d = v2.d f/ v4.d
    v4.d = fconvert.s(1f)
    entry_x0[2] = v1.d
    v1.d = v4.d f- v2.d
    v1 = v3 * fconvert.d(v1.d)
    *(entry_x0 + 0x10) = v1
    *(entry_x0 + 0x18) = arg1
    v2 = v1 + arg1
    v1 = arg1
    *(entry_x0 + 0x20) = v2
    
    if (v2 < arg1)
        goto label_106dd44
else if (not(*(entry_x0 + 0x20) >= arg1))
label_106dd44:
    arg1.d = entry_x0[1]
    entry_x0[0xb] = 0xffffffff
    return 

v2.d = *entry_x0
v3.d = entry_x0[2]
arg1.d = fconvert.s((arg1 - v1) / *(entry_x0 + 0x10) * fconvert.d(v3.d) + fconvert.d(v2.d))
entry_x0[0xa] = arg1.d
