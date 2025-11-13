// 函数: _Z18GetActiveGameSetupv
// 地址: 0x9b7448
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *gCreateDlg

if (x8 == 3)
    return ActiveGame() + 8

int64_t x0_4

if (x8 == 1)
    int32_t x19_1 = *(gCreateDlg + 8)
    x0_4 = GetActiveProfile()
    
    if ((x19_1 & 1) != 0)
        return x0_4 + 0x2378
else
    if (x8 == 0)
        return GetActiveProfile() + 0x18
    
    void* x0_6 = GetClient()
    int32_t x8_1 = *(gCreateDlg + 0x10)
    
    if (x8_1 != 0)
        uint64_t x9_1 = zx.q(x8_1.w)
        
        if (x9_1.d u< *(x0_6 + 0x5088) && *(*(x0_6 + 0x5080) + x9_1 * 0x1338 + 0x1330) == x8_1)
            return GetMultplayerGameByIndex(zx.q(x8_1)) + 8
    
    x0_4 = GetActiveProfile()

return x0_4 + 0x11c8
