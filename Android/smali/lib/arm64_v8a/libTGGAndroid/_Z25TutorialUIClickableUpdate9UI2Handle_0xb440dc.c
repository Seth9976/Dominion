// 函数: _Z25TutorialUIClickableUpdate9UI2Handle
// 地址: 0xb440dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
void* result = GetClient()

if (*(result + 0x5068) == 1)
    int64_t var_28
    result = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_28)
    int64_t x20_1 = sx.q(*(gDomClient + 0x205cc))
    
    if (x20_1.d s< result.d)
        int64_t x21_1 = var_28
        
        if (x21_1 != 0)
            result = UI2SetState(zx.q(x19), &data_182f550, 0xffffffff, 0)
            int32_t x8_2 = *(x21_1 + x20_1 * 0xb0 + 0x1c)
            
            if (x8_2 u<= 0x1a)
                int32_t x9_1 = 1 << x8_2
                
                if ((x9_1 & 0x64000c2) != 0)
                    return UI2SetState(zx.q(x19), &data_1831740, 0xffffffff, 0)
                
                if ((x9_1 & 0x41000) != 0)
                    return UI2SetState(zx.q(x19), &data_1831758, 0xffffffff, 0)
                
                if ((1 << x8_2 & 0x180000) != 0)
                    return UI2SetState(zx.q(x19), &data_1831770, 0xffffffff, 0)

return result
