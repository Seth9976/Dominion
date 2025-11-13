// 函数: _Z3Suni
// 地址: 0xac1dcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = CountTokensWhereType(GetLandscapePileByType(0x80000000000), 0x1200)

if (result.d != 0)
    int32_t x20_1 = result.d
    int32_t x23_1
    
    if (result.d s> arg1)
        x23_1 = arg1
    else
        x23_1 = result.d
    
    void* x0_1 = DomGetContext()
    int32_t var_38_1 = 0
    int32_t var_40_1 = 0xffffffff
    result = AddTokens(*(x0_1 + 8), 0xffffffff, 0x1200, zx.q(neg.d(x23_1)), 
        zx.q(GetLandscapePileByType(0x80000000000)), 0, 0, 0)
    
    if (*(x0_1 + 0x18) != 0xffffffff)
        result = SetGainFlag(0x400)
    
    if (x20_1 s<= arg1)
        int32_t x0_4 = GetLandscapePileByType(0x80000000000)
        return TriggerProphecy(BoardPileTop(*(DomGetContext() + 8), zx.q(x0_4))) __tailcall

return result
