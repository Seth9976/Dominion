// 函数: sub_74c590
// 地址: 0x74c590
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = 9

if (arg5 != 0)
    eax = 0

HWND result = CreateWindowExA(WS_EX_LEFT, "SysDateTimePick32", &data_801800, eax | 0x40000000, 
    0x80000000, 0x80000000, 0x80000000, 0x80000000, arg2, arg4, arg3, nullptr)

if (result == 0)
    return result

SetWindowTheme(result, &data_88ff34, &data_88ff34)
SendMessageA(result, 0x30, GetStockObject(DEFAULT_GUI_FONT), 0)
SetPropA(result, "Wprc", GetWindowLongA(result, 0xfffffffc))
SetWindowLongA(result, 0xfffffffc, sub_74be50)
return result
