// 函数: sub_74db10
// 地址: 0x74db10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

HWND var_8 = arg3
int32_t* esi = data_19e2778

if (esi[7] == 0)
    HWND eax = CreateWindowExA(WS_EX_CLIENTEDGE, "Edit", &data_801800, 0x40001084, 0x80000000, 
        0x80000000, 0x80000000, 0x80000000, arg3, 0x7d3, *esi, nullptr)
    
    if (eax != 0)
        SetWindowTheme(eax, &data_88ff34, &data_88ff34)
        SendMessageA(eax, 0x30, GetStockObject(DEFAULT_GUI_FONT), 0)
        SetPropA(eax, "Wprc", GetWindowLongA(eax, 0xfffffffc))
        SetWindowLongA(eax, 0xfffffffc, sub_74b520)
    
    *(data_19e2778 + 0x1c) = eax
    esi = data_19e2778

MoveWindow(esi[7], arg4, arg5 + 1, arg6 - arg4, arg7 - (arg5 + 1), 1)
SetWindowTextA(*(data_19e2778 + 0x1c), *(arg2 + 0x10))
ShowWindow(*(data_19e2778 + 0x1c), SW_SHOW)
SetFocus(*(data_19e2778 + 0x1c))
return SendMessageA(*(data_19e2778 + 0x1c), 0xb1, 0, 0xffffffff)
