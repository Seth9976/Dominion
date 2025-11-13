// 函数: sub_74cac0
// 地址: 0x74cac0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_1 = neg.d(arg5)
HWND result = CreateWindowExA(WS_EX_LEFT, "ComboBox", nullptr, 
    (sbb.d(eax_1, eax_1, arg5 != 0) + 3) | 0x40000400, 0x80000000, 0x80000000, 0x80000000, 
    0x80000000, arg2, arg4, arg3, nullptr)

if (result == 0)
    return result

SetWindowTheme(result, &data_88ff34, &data_88ff34)
SendMessageA(result, 0x30, GetStockObject(DEFAULT_GUI_FONT), 0)
SetPropA(result, "Wprc", GetWindowLongA(result, 0xfffffffc))
SetWindowLongA(result, 0xfffffffc, sub_74c630)
return result
