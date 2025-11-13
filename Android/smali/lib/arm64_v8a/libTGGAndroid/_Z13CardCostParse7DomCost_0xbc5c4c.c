// 函数: _Z13CardCostParse7DomCost
// 地址: 0xbc5c4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x8
*(entry_x8 + 0xc) = 0
*entry_x8 = arg1.d & 0xff
entry_x8[1] = arg1.d u>> 0x10 & 1
entry_x8[2] = arg1.d s>> 0x18
int32_t x9

if ((arg1.d & 0x80000) != 0)
    x9 = 0x80000
    entry_x8[3] = 0x80000
    
    if ((arg1.d & 0x20000) != 0)
        x9 |= 0x20000
        entry_x8[3] = x9
else
    x9 = 0
    
    if ((arg1.d & 0x20000) != 0)
        x9 |= 0x20000
        entry_x8[3] = x9

if ((arg1.d & 0x100000) == 0)
    entry_x8[4].b = (arg1.d u>> 0x12).b & 1
    return 

entry_x8[3] = x9 | 0x100000
entry_x8[4].b = (arg1.d u>> 0x12).b & 1
