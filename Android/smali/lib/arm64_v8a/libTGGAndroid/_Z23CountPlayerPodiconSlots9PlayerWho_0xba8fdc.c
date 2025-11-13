// 函数: _Z23CountPlayerPodiconSlots9PlayerWho
// 地址: 0xba8fdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(gDomClient + 0x38)
uint64_t x1

if (x9 == 0xffffffff)
    x1 = 0
else
    x1 = zx.q(x9)

float var_18
float var_8

if (x1.d != arg1.d)
    if (*(gDomClient + 0x3c) == arg1.d)
        OpponentExpandedPodIconRegionSize(&var_8, &var_18)
        uint32_t temp0 = vcvts_s32_f32(var_8 / var_18)
        
        if (temp0 s> 0xe)
            return zx.q(temp0)
        
        return 0xe
    
    OpponentPodIconRegionSize(PlayerWhoToSeat(arg1, x1), &var_8, &var_18)
else
    PlayerPodIconRegionSizes(&var_8, &var_18)

return zx.q(vcvts_s32_f32(var_8 / var_18))
