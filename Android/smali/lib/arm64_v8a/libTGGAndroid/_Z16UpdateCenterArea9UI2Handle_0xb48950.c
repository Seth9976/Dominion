// 函数: _Z16UpdateCenterArea9UI2Handle
// 地址: 0xb48950
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20
int32_t x21

if (*(gDomClient + 0x21e24) == 0)
    x20 = 0xa
    
    if (*(gDomClient + 0x21e74) != 0)
    label_b48a28:
        
        if (*(gDomClient + 0x21e84) == 0)
            x21 = 1
        else if (*(gDomClient + 0x21e94) == 0)
            x21 = 2
        else if (*(gDomClient + 0x21ea4) == 0)
            x21 = 3
        else if (*(gDomClient + 0x21eb4) != 0)
            x21 = 5
        else
            x21 = 4
    else
        x21 = 0
else if (*(gDomClient + 0x21e34) == 0)
    x20 = 0xb
    
    if (*(gDomClient + 0x21e74) != 0)
        goto label_b48a28
    
    x21 = 0
else if (*(gDomClient + 0x21e44) == 0)
    x20 = 0xc
    
    if (*(gDomClient + 0x21e74) != 0)
        goto label_b48a28
    
    x21 = 0
else if (*(gDomClient + 0x21e54) == 0)
    x20 = 0xd
    
    if (*(gDomClient + 0x21e74) != 0)
        goto label_b48a28
    
    x21 = 0
else
    if (*(gDomClient + 0x21e64) != 0)
        x20 = 0xf
    else
        x20 = 0xe
    
    if (*(gDomClient + 0x21e74) != 0)
        goto label_b48a28
    
    x21 = 0

int32_t x0 = NumExtraPiles()
int32_t x0_1 = NearestAspectRatio()
char x4

if (zx.d(*(GetLocalSettings() + 0x38)) == 0)
    x4 = 0
else if (*(GetClient() + 0x5068) != 1)
    x4 = 1
else
    int64_t var_38
    int32_t x0_6 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_38)
    x4 = (*(gDomClient + 0x205cc) s>= x0_6 ? 1 : 0).b | (var_38 == 0 ? 1 : 0).b

return LayoutUpdate(zx.q(arg1), zx.q(CalcLayoutStyle(x20, x21, x0, (x0_1 != 0 ? 1 : 0).b, x4)))
