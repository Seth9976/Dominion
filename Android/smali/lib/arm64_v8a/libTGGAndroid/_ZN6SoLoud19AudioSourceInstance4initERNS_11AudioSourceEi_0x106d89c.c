// 函数: _ZN6SoLoud19AudioSourceInstance4initERNS_11AudioSourceEi
// 地址: 0x106d89c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x2
*(arg1 + 8) = entry_x2
int64_t v0
v0.d = *(arg2 + 0xc)
*(arg1 + 0x40) = v0.d
*(arg1 + 0x44) = v0.d
*(arg1 + 0x58) = 0
*(arg1 + 0x60) = 0
*(arg1 + 0x48) = *(arg2 + 0x14)
*(arg1 + 0x1e8) = *(arg2 + 0x90)
int32_t x8_1 = *(arg2 + 8)

if ((x8_1 & 1) == 0)
    if ((x8_1 & 8) != 0)
        goto label_106d8f8
    
    goto label_106d8c8

*(arg1 + 0x10) |= 1
x8_1 = *(arg2 + 8)

if ((x8_1 & 8) != 0)
label_106d8f8:
    *(arg1 + 0x10) |= 8
    x8_1 = *(arg2 + 8)
    
    if ((x8_1 & 0x10) == 0)
        goto label_106d8cc
    
    goto label_106d90c

label_106d8c8:

if ((x8_1 & 0x10) == 0)
label_106d8cc:
    
    if ((x8_1 & 0x40) != 0)
        goto label_106d920
    
    goto label_106d8d0

label_106d90c:
*(arg1 + 0x10) |= 0x10
x8_1 = *(arg2 + 8)

if ((x8_1 & 0x40) != 0)
label_106d920:
    *(arg1 + 0x10) |= 0x40
    x8_1 = *(arg2 + 8)
    
    if ((x8_1 & 0x80) == 0)
        goto label_106d8d4
    
    goto label_106d934

label_106d8d0:

if ((x8_1 & 0x80) != 0)
label_106d934:
    *(arg1 + 0x10) |= 0x80
    
    if ((*(arg2 + 8) & 0x100) != 0)
        *(arg1 + 0x10) |= 0x100
else
label_106d8d4:
    
    if ((x8_1 & 0x100) != 0)
        *(arg1 + 0x10) |= 0x100
