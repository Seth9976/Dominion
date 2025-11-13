// 函数: _Z19TutorialAdvanceStep18DomTutorialTrigger11DomCardEnum
// 地址: 0xae8ca0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
int32_t x20 = arg1

if (*(GetClient() + 0x5068) != 0 && *(GetClient() + 0x5068) == 1)
    int64_t var_18
    int32_t x0_4 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_18)
    int64_t x8_2 = sx.q(*(gDomClient + 0x205cc))
    
    if (x8_2.d s>= x0_4)
        return 0
    
    int64_t x9_1 = var_18
    
    if (x9_1 == 0)
        return 0
    
    if (*(x9_1 + x8_2 * 0xb0 + 0x18) == x20)
        int32_t x8_4 = *(x9_1 + x8_2 * 0xb0 + 0x24)
        
        if (x8_4 != 0 && x20 != 2 && x19 != 0 && x8_4 != x19)
            return 0
        
        TutorialContinue()
        return 1
    
    if (x20 == 2)
        TutorialContinue()
        return 1

return 0
