// 函数: _Z17GameMessageToGameRK15GameDescMessage
// 地址: 0x9b0b50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x8
memset(entry_x8, 0, 0x11b0)
XString::XString()
XString::XString()
XString::XString()
*(entry_x8 + 0x14) = *(arg1 + 0x44)
entry_x8[1].d = *(arg1 + 0x1c)
*(entry_x8 + 0x2c) = *(arg1 + 0x20)
*(arg1 + 0x28)
XString::operator=(&entry_x8[6])
*(arg1 + 0x30)
XString::operator=(&entry_x8[7])
*(arg1 + 0x38)
XString::operator=(&entry_x8[8])
entry_x8[5].d = *(arg1 + 0x48)
entry_x8[3].d = *(arg1 + 0x4c)
*(entry_x8 + 0x1c) = *(arg1 + 0xc)
int128_t v0
v0.q = *(arg1 + 0x10)
entry_x8[4] = vrev64_s32(v0)
entry_x8[9].d = *(arg1 + 0x50)
int64_t result = TimerStart()
*entry_x8 = result
int32_t x8_6 = *(arg1 + 0x54)
*(entry_x8 + 0x11ac) = x8_6

if (x8_6 s>= 1)
    void* x24_1 = *(arg1 + 0x58)
    int64_t i = 0
    void* x22_1 = entry_x8 + 0x274
    int64_t x23_1 = 0x18
    
    do
        AssignName(x22_1 - 0x228, *(x24_1 + x23_1 - 8))
        x24_1 = *(arg1 + 0x58)
        void* x25_1 = x24_1 + x23_1
        *(x22_1 - 0x218) = *x25_1
        *(x22_1 - 0x210) = *(x25_1 - 0x10)
        *(x22_1 - 0x214) = *(x25_1 - 0x14)
        *(x22_1 - 0x208) = *(x25_1 + 4)
        *(x22_1 - 0x204) = *(x25_1 + 0xc)
        *(x22_1 - 0x20c) = *(x25_1 + 8)
        result = memcpy(x22_1 - 0x200, *(x25_1 + 0x10), sx.q(*(x25_1 + 0x18)) << 3)
        i += 1
        x23_1 += 0x38
        *x22_1 = *(x25_1 + 0x18)
        x22_1 += 0x22c
    while (i s< sx.q(*(entry_x8 + 0x11ac)))

return result
