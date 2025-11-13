// 函数: _Z16StoreItemDlgOpen7GameDlc11GameDlgTypeS0_
// 地址: 0x9b8e70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Cardset* x8 = *(gStoreItemDlg + 8)

if (x8 == 0)
    Cardset* x0 = CardsetAlloc()
    x8 = x0
    *(gStoreItemDlg + 8) = x0

*(gStoreItemDlg + 0x10) = arg1
*gStoreItemDlg = 0
*(gStoreItemDlg + 0x18) = arg2
*(gStoreItemDlg + 0x1c) = arg3
int64_t result = CardsetClear(x8)
*(gGameDlgManager + 0xc8) = 0x16
return result
