// 函数: sub_7504d0
// 地址: 0x7504d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t hInstance = GetWindowLongA(arg1, 0xfffffffa)

if (data_19e3bcc == 0)
    WNDCLASSEXA var_34
    var_34.cbSize = 0x30
    BOOL eax = GetClassInfoExA(nullptr, "ListBox", &var_34)
    
    if (eax != 0)
        var_34.lpfnWndProc = sub_750aa0
        var_34.hInstance = hInstance
        var_34.lpszClassName = "PropGridCtl"
        eax = zx.d(RegisterClassExA(&var_34))
    
    data_19e3bcc = eax.w

HWND result = CreateWindowExA(WS_EX_LEFT, "PropGridCtl", &data_801800, 0x40010000, 0, 0, 0, 0, 
    arg1, 0xac, hInstance, nullptr)
data_1a9b14c = result
return result
