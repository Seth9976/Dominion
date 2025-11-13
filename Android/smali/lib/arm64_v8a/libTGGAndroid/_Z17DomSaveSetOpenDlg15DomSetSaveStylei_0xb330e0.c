// 函数: _Z17DomSaveSetOpenDlg15DomSetSaveStylei
// 地址: 0xb330e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(gDomSetSave + 8) = arg1
*(gDomSetSave + 0xc) = arg2

if (arg2 == 0xffffffff)
    XString::operator=(gDomSetSave)
    return GameDlgManagerShow(0x7f0, 7) __tailcall

GetActiveProfile()
XString::operator=(gDomSetSave)
return GameDlgManagerShow(0x7f0, 7) __tailcall
