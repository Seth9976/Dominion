// 函数: _Z20PromptSpendVillagersv
// 地址: 0xae3a68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *(*(DomGetContext() + 8) + 0x19d4)
void* result = DomGetContext()

if (x19 == *(result + 0x18))
    result = CurrentPhase(*(DomGetContext() + 8))
    
    if (result.d == 1)
        int32_t* x0_3 = DomGetContext()
        DomGame* x0_4 = *(x0_3 + 8)
        uint64_t x2_1 = zx.q(x0_3[6])
        int32_t x8_2 = x0_3[7]
        int32_t var_18 = *x0_3
        int32_t var_14_1 = x8_2
        result = ChooseSpendVillagers(x0_4, &var_18, x2_1)
        
        if (result.d != 0)
            return SpendVillgers(*(x0_3 + 8), zx.q(x0_3[6]), result.d)

return result
