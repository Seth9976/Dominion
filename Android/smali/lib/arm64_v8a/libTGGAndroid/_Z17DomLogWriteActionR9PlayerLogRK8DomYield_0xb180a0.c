// 函数: _Z17DomLogWriteActionR9PlayerLogRK8DomYield
// 地址: 0xb180a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

LogAppendInt(arg1, *(arg2 + 4))
LogAppendInt(arg1, *(arg2 + 0x74))
int32_t x8 = *(arg2 + 4)

if (x8 != 5 && x8 != 9 && *(arg2 + 0x74) s>= 1)
    int64_t i = 0
    
    do
        LogAppendInt(arg1, *(arg2 + 0x78 + (i << 2)))
        i += 1
    while (i s< sx.q(*(arg2 + 0x74)))

if (*(arg2 + 0xd18) != 0 && *(arg2 + 0x74) s>= 1)
    int64_t i_1 = 0
    
    do
        LogAppendInt(arg1, *(arg2 + 0xd08 + (i_1 << 2)))
        i_1 += 1
    while (i_1 s< sx.q(*(arg2 + 0x74)))

LogAppendInt(arg1, *(arg2 + 0x48))
return LogAppendInt(arg1, *(arg2 + 0x70)) __tailcall
