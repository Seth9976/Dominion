// 函数: _ZN5Botan14Cert_Extension23CRL_Distribution_Points18Distribution_PointC2Ev
// 地址: 0xf1ecf4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
*entry_x0 = _vtable_for_Botan::Cert_Extension::CRL_Distribution_Points::Distribution_Point + 0x10
int16_t var_28 = 0
int16_t var_40 = 0
int16_t var_58 = 0
int16_t var_70 = 0
int64_t result = Botan::AlternativeName::AlternativeName(&entry_x0[1], &var_28, &var_40, &var_58)

if ((zx.d(var_58.b) & 1) != 0)
    void* var_48
    result = operator delete(var_48)
    
    if ((zx.d(var_40.b) & 1) == 0)
        goto label_f1ed4c
    
    goto label_f1ed80

void* var_18

if ((zx.d(var_40.b) & 1) != 0)
label_f1ed80:
    void* var_30
    result = operator delete(var_30)
    
    if ((zx.d(var_28.b) & 1) != 0)
        return operator delete(var_18)
else
label_f1ed4c:
    
    if ((zx.d(var_28.b) & 1) != 0)
        return operator delete(var_18)
return result
