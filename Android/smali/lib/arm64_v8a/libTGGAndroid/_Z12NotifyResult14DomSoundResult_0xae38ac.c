// 函数: _Z12NotifyResult14DomSoundResult
// 地址: 0xae38ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0
CardID* x1
x0, x1 = DomGetContext()
int64_t var_28 = 0
int32_t var_30 = 0
int32_t var_38 = 0
int32_t var_40 = 0
return NotifyEffect(*(x0 + 8), 0x24, zx.q(*(x0 + 0x18)), zx.q(ThisCard(false, x1)), zx.q(arg1), 0, 
    0, 0)
