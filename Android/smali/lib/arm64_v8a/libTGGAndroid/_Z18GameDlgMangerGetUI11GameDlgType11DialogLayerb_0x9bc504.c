// 函数: _Z18GameDlgMangerGetUI11GameDlgType11DialogLayerb
// 地址: 0x9bc504
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9_2 = zx.q(arg2)
int32_t* x8_2

if (*(gGameDlgManager + mulu.dp.d(arg2, 0x28) + 4) != arg1)
    if (*(gGameDlgManager + x9_2 * 0x28 + 0x14) != arg1 || (arg3.d & 1) == 0)
        return 0
    
    x8_2 = gGameDlgManager + x9_2 * 0x28 + 0x18
else
    x8_2 = gGameDlgManager + x9_2 * 0x28 + 8

return zx.q(*x8_2)
