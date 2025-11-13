// 函数: _Z16TutorialContinuev
// 地址: 0xae8bd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = GetClient()

if (*(result + 0x5068) == 1)
    DomTutorial* var_28
    result = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_28)
    int64_t x8_1 = sx.q(*(gDomClient + 0x205cc))
    
    if (x8_1.d s< result.d)
        DomTutorial* x9_1 = var_28
        
        if (x9_1 != 0)
            void* x8_2 = x9_1 + x8_1 * 0xb0
            
            do
                TutorialExecuteAction(zx.q(*(x8_2 + 0x20)), zx.q(*(x8_2 + 0x24)))
                *(gDomClient + 0x205cc) += 1
                result = GetClient()
                
                if (*(result + 0x5068) != 1)
                    break
                
                result = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_28)
                int64_t x8_6 = sx.q(*(gDomClient + 0x205cc))
                
                if (x8_6.d s>= result.d)
                    break
                
                DomTutorial* x9_2 = var_28
                
                if (x9_2 == 0)
                    break
                
                x8_2 = x9_2 + x8_6 * 0xb0
            while (*(x8_2 + 0x18) == 1)

return result
