// 函数: _Z16TutorialUIUpdate9UI2Handle
// 地址: 0xba0170
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
void* result = GetClient()
UI2StateDecl* x20

if (*(result + 0x5068) != 1)
label_ba01f8:
    x20 = *(gDomClient + 0x205d0)
    
    if (x20 != 0)
    label_ba020c:
        UI2SetHandler(zx.q(x19), TutorialClick)
        UI2SetState(zx.q(x19), x20, 0xffffffff, 0)
        UI2SetState(zx.q(x19), &data_1832a78, 0xffffffff, 0)
        result = GetLocalControlScheme()
        
        if (result.d == 2)
            return UI2SetState(zx.q(x19), &data_1832aa8, 0xffffffff, 0)
else
    int64_t var_28
    result = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_28)
    int64_t x8_1 = sx.q(*(gDomClient + 0x205cc))
    
    if (x8_1.d s>= result.d)
        goto label_ba01f8
    
    int64_t x9_1 = var_28
    
    if (x9_1 == 0)
        goto label_ba01f8
    
    x20 = x9_1 + x8_1 * 0xb0
    *(gDomClient + 0x205d0) = x20
    
    if (x20 != 0)
        goto label_ba020c
return result
