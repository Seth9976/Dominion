// 函数: _Z21MultiplayJoinByCodeOKv
// 地址: 0x9c1764
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x0_1 = XString::operator char const*()
char* x19 = x0_1
size_t x0_2 = strlen(x0_1)

if (x0_2.d == 4)
    uint32_t x8_1 = zx.d(*x19)
    
    if (x8_1 - 0x30 u< 0xa || (x8_1 & 0xffffffdf) - 0x41 u<= 0x19)
        uint32_t x8_4 = zx.d(x19[1])
        
        if (x8_4 - 0x30 u< 0xa || (x8_4 & 0xffffffdf) - 0x41 u<= 0x19)
            uint32_t x8_7 = zx.d(x19[2])
            
            if (x8_7 - 0x30 u< 0xa || (x8_7 & 0xffffffdf) - 0x41 u<= 0x19)
                uint32_t x8_10 = zx.d(x19[3])
                
                if (x8_10 - 0x30 u< 0xa || (x8_10 & 0xffffffdf) - 0x41 u<= 0x19)
                    int64_t x0_5 = GameClientJoinNetworkGameByCode(XString::operator char const*())
                    *(gMultiplayerDlg + 0x1a0) = 1
                    return x0_5

return x0_2
