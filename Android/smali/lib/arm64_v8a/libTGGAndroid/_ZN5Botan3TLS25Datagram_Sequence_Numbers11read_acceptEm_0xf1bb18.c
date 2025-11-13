// 函数: _ZN5Botan3TLS25Datagram_Sequence_Numbers11read_acceptEm
// 地址: 0xf1bb18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9_2 = *(arg1 + 0x28)
int64_t entry_x1
int64_t x8 = x9_2 - entry_x1

if (x9_2 u>= entry_x1)
    if (x8 u<= 0x3f)
        *(arg1 + 0x30) |= 1 << x8
        return 
    
    *(arg1 + 0x28) = entry_x1
    *(arg1 + 0x30) = 0
    return 

int64_t x8_1 = entry_x1 - x9_2
*(arg1 + 0x28) = entry_x1

if (x8_1 u<= 0x3f)
    *(arg1 + 0x30) = *(arg1 + 0x30) << x8_1 | 1
    return 

*(arg1 + 0x30) = 1
