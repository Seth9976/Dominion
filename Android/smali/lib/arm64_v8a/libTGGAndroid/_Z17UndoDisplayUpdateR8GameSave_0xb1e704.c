// 函数: _Z17UndoDisplayUpdateR8GameSave
// 地址: 0xb1e704
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(arg1 + 0x1318)

if (zx.d(*(gDomClient + 0x20591)) == 0)
    if (x9 != 0)
        *(gDomClient + 0x20591) = 1
        return GameDlgManagerShow(0x7e9, 5) __tailcall
else if (x9 == 3)
    *(gDomClient + 0x20591) = 0
    GameDlgManagerDismiss(5, false)
    *(arg1 + 0x1318) = 0
