// 函数: _Z10IsFatePileRK7DomGame8DomWhereR11DomCardEnum
// 地址: 0xc0d96c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
int32_t x22 = 0xd30

if (FateDeckWhere(arg1, 0xd30) != x20)
    x22 = 0xd3d
    
    if (FateDeckWhere(arg1, 0xd3d) != x20)
        return 0

*arg3 = x22
return 1
