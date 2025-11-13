// 函数: _Z18PromptSpendCoffers15DomChoiceUIType
// 地址: 0xae39fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = *(*(DomGetContext() + 8) + 0x19d4)
void* result = DomGetContext()

if (x20 == *(result + 0x18))
    int32_t* x0_1 = DomGetContext()
    DomGame* x0_2 = *(x0_1 + 8)
    uint64_t x2_1 = zx.q(x0_1[6])
    int32_t x8_2 = x0_1[7]
    int32_t var_18 = *x0_1
    int32_t var_14_1 = x8_2
    result = ChooseSpendCoffers(x0_2, &var_18, x2_1, zx.q(arg1))
    
    if (result.d != 0)
        return SpendCoffers(*(x0_1 + 8), zx.q(x0_1[6]), result.d)

return result
