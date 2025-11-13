// 函数: _Z21IsAtOrMovingAtPileLocR6DomGfx8DomWhere
// 地址: 0xb09130
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x1f78) != 0)
    if (*(arg1 + 0x308) == 1 && (*(arg1 + 0x3b8) & 0xfffffffe) == 6 && *(arg1 + 0x314) == arg2)
        return 1
    
    if (*(arg1 + 0x478) == 1 && *(arg1 + 0x520) != 0xb && (*(arg1 + 0x480) & 0xfffffffe) == 6
            && *(arg1 + 0x484) == arg2)
        return 1
else if (*(arg1 + 0x3b0) == 1 && (*(arg1 + 0x3b8) & 0xfffffffe) == 6 && *(arg1 + 0x3bc) == arg2)
    return 1

return 0
