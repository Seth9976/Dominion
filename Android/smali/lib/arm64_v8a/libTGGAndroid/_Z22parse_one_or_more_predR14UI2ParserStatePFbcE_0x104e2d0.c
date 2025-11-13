// 函数: _Z22parse_one_or_more_predR14UI2ParserStatePFbcE
// 地址: 0x104e2d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(arg1 + 8)
int128_t* entry_x8

if (x9 != 0)
    char* x22_1 = x9 - 1
    int64_t x23_1 = 0x100000000 - (x9 << 0x20)
    int32_t x0_1
    
    do
        x22_1 = &x22_1[1]
        int128_t v0
        x0_1, v0 = arg2(zx.q(*x22_1))
        x23_1 += -0x100000000
    while ((x0_1 & 1) != 0)
    uint64_t x1 = *(arg1 + 8)
    
    if (x1 != x22_1)
        char var_38
        XString::XString(&var_38, x1)
        XString::XString()
        void var_48
        XString::operator=(&var_48)
        *(arg1 + 8) = x22_1
        *entry_x8 = 4.o
        XString::XString(&entry_x8[1])
        XString::~XString()
        return XString::~XString()

*entry_x8 = data_24b6268
return XString::XString(&entry_x8[1]) __tailcall
