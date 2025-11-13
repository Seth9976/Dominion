// 函数: sub_66f4b0
// 地址: 0x66f4b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (GetKeyState(0x11) s< 0 && *(data_cf65b4 + 0x18) != 0)
    HWND eax_2 = GetFocus()
    
    if ((eax_2 == data_147b084 || eax_2 == 0) && GetKeyState(0x12) s< 0
            && *(data_cf65b4 + 0x18) != 0)
        HWND eax_5 = GetFocus()
        
        if (eax_5 == data_147b084 || eax_5 == 0)
            return 3

if (GetKeyState(0x11) s< 0 && *(data_cf65b4 + 0x18) != 0)
    HWND eax_9 = GetFocus()
    
    if (eax_9 == data_147b084 || eax_9 == 0)
        return 1

if (GetKeyState(0x12) s< 0 && *(data_cf65b4 + 0x18) != 0)
    HWND eax_13 = GetFocus()
    
    if (eax_13 == data_147b084 || eax_13 == 0)
        return 2

return 0
