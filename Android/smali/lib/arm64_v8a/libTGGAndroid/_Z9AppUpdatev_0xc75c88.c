// 函数: _Z9AppUpdatev
// 地址: 0xc75c88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(data_1beb828) & 1) != 0)
    return 

data_1beb828 = 1
uint64_t x8_1 = *gpAppData

if (zx.d(*(x8_1 + 0x20)) == 0)
    goto label_c75cdc

uint32_t x9_2 = zx.d(*(x8_1 + 0x40))
*(x8_1 + 0x20) = 0

if (x9_2 != 0)
    GameDispose()
    x8_1 = *gpAppData

if (zx.d(*(x8_1 + 0x38)) == 0)
    GameInitialize(*(x8_1 + 0x28))
    uint64_t x8_3 = *gpAppData
    *(x8_3 + 0x40) = 1
    int64_t* x0_2 = *gAppInterface
    (*(*x0_2 + 0x70))(x0_2, *(x8_3 + 0x30))
    
    if (zx.d(*(*gpAppData + 0x40)) != 0)
        AppUpdateGame(false)
else
    *(x8_1 + 0x40) = 0
label_c75cdc:
    
    if (zx.d(*(x8_1 + 0x40)) != 0)
        AppUpdateGame(false)

data_1beb828 = 0
