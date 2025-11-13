// 函数: _ZN5Botan3TLS15Handshake_State12client_helloEPNS0_12Client_HelloE
// 地址: 0xe664dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x8 = *(arg1 + 0x100)
int64_t entry_x1

if (entry_x1 == 0)
    *(arg1 + 0x100) = 0
    
    if (x8 != 0)
        sub_f4ed30(arg1 + 0x100, x8)
    
    *(arg1 + 0xf0) = *(arg1 + 0xe8)
    return 

*(arg1 + 0x100) = entry_x1

if (x8 != 0)
    sub_f4ed30(arg1 + 0x100, x8)
    *(arg1 + 0x100)

jump(*(**(arg1 + 8) + 0x70))
