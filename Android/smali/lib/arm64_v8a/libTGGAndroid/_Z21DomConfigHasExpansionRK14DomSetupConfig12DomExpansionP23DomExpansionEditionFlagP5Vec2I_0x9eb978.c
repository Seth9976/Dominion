// 函数: _Z21DomConfigHasExpansionRK14DomSetupConfig12DomExpansionP23DomExpansionEditionFlagP5Vec2I
// 地址: 0x9eb978
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8

if (*(arg1 + 0x9c8) == arg2)
    x8 = 0
else if (*(arg1 + 0x9d8) == arg2)
    x8 = 1
else if (*(arg1 + 0x9e8) == arg2)
    x8 = 2
else if (*(arg1 + 0x9f8) == arg2)
    x8 = 3
else if (*(arg1 + 0xa08) == arg2)
    x8 = 4
else if (*(arg1 + 0xa18) == arg2)
    x8 = 5
else if (*(arg1 + 0xa28) == arg2)
    x8 = 6
else if (*(arg1 + 0xa38) == arg2)
    x8 = 7
else if (*(arg1 + 0xa48) == arg2)
    x8 = 8
else if (*(arg1 + 0xa58) == arg2)
    x8 = 9
else if (*(arg1 + 0xa68) == arg2)
    x8 = 0xa
else if (*(arg1 + 0xa78) == arg2)
    x8 = 0xb
else if (*(arg1 + 0xa88) == arg2)
    x8 = 0xc
else if (*(arg1 + 0xa98) == arg2)
    x8 = 0xd
else if (*(arg1 + 0xaa8) == arg2)
    x8 = 0xe
else if (*(arg1 + 0xab8) == arg2)
    x8 = 0xf
else if (*(arg1 + 0xac8) == arg2)
    x8 = 0x10
else if (*(arg1 + 0xad8) == arg2)
    x8 = 0x11
else if (*(arg1 + 0xae8) == arg2)
    x8 = 0x12
else if (*(arg1 + 0xaf8) == arg2)
    x8 = 0x13
else if (*(arg1 + 0xb08) == arg2)
    x8 = 0x14
else if (*(arg1 + 0xb18) == arg2)
    x8 = 0x15
else if (*(arg1 + 0xb28) == arg2)
    x8 = 0x16
else if (*(arg1 + 0xb38) == arg2)
    x8 = 0x17
else if (*(arg1 + 0xb48) == arg2)
    x8 = 0x18
else if (*(arg1 + 0xb58) == arg2)
    x8 = 0x19
else if (*(arg1 + 0xb68) == arg2)
    x8 = 0x1a
else if (*(arg1 + 0xb78) == arg2)
    x8 = 0x1b
else if (*(arg1 + 0xb88) == arg2)
    x8 = 0x1c
else if (*(arg1 + 0xb98) == arg2)
    x8 = 0x1d
else if (*(arg1 + 0xba8) != arg2)
    if (*(arg1 + 0xbb8) != arg2)
        return 0
    
    x8 = 0x1f
else
    x8 = 0x1e

if (arg3 != 0)
    int32_t x9_1
    
    if (arg2 != 0x13)
        x9_1 = *(arg1 + (x8 << 4) + 0x9cc)
    else
        x9_1 = 0
    
    *arg3 = x9_1

if (arg4 != 0)
    *arg4 = *(arg1 + (x8 << 4) + 0x9d0)

return 1
