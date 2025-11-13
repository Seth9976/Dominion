// 函数: _Z26MountainPass22_OnGain_Test6CardID
// 地址: 0xa6eb58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((CardIs(arg1, 0x103) & 1) == 0)
    return 0

return (zx.q(HasOccuredGlobal()) ^ 1) & 1
