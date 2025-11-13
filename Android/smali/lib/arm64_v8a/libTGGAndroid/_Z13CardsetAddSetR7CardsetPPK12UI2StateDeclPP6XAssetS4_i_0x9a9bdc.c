// 函数: _Z13CardsetAddSetR7CardsetPPK12UI2StateDeclPP6XAssetS4_i
// 地址: 0x9a9bdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x1520) = 0

if (arg5 s< 1)
    return 

int32_t x10_1 = 0
int64_t x8_2 = zx.q(arg5) - 1

while (true)
    *(arg1 + 0x1520) = x10_1 + 1
    UI2StateDecl const* x11_2 = *arg2
    void* x10_3 = arg1 + (sx.q(x10_1) << 5)
    *(x10_3 + 0x278) = 1
    *(x10_3 + 0x260) = x11_2
    *(x10_3 + 0x268) = *arg3
    *(x10_3 + 0x270) = *arg4
    
    if (x8_2 == 0)
        break
    
    x10_1 = *(arg1 + 0x1520)
    arg4 = &arg4[1]
    arg3 = &arg3[1]
    arg2 = &arg2[1]
    x8_2 -= 1
