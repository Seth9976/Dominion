// 函数: sub_6c82a0
// 地址: 0x6c82a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

SetProcessDPIAware()
WNDCLASSEXW param0
param0.cbSize = 0x30
param0.style = 3
param0.lpfnWndProc = sub_6c77d0
param0.cbClsExtra = 0
param0.cbWndExtra = 0
param0.hInstance = arg1
param0.hIcon = LoadIconA(arg1, 0x80)
param0.hCursor = 0
param0.hbrBackground = 6
param0.lpszMenuName = 0x6d
param0.lpszClassName = u"GameWindowClass"
int32_t cx = GetSystemMetrics(SM_CXSMICON)
int32_t cy = GetSystemMetrics(SM_CYSMICON)
param0.hIconSm = LoadImageA(GetModuleHandleA(nullptr), 0x80, IMAGE_ICON, cx, cy, LR_DEFAULTCOLOR)
RegisterClassExW(&param0)
int32_t result = sub_6c69b0(arg1, arg2)

if (result == 0)
    return result

MSG msg
PeekMessageW(&msg, nullptr, 0, 0, PM_NOREMOVE)

while (msg.message != 0x12)
    if (PeekMessageW(&msg, nullptr, 0, 0, PM_REMOVE) == 0)
        sub_640520()
    else
        HWND hDlg = data_147d470
        
        if (hDlg == 0)
            TranslateMessage(&msg)
            DispatchMessageA(&msg)
        else
            if (msg.message != 0x100 || msg.wParam != 0x53)
                goto label_6c83e3
            
            int16_t eax_4 = GetKeyState(0x11)
            int16_t eax_5
            char* ecx_1
            
            if (eax_4 s< 0)
                eax_5, ecx_1 = GetKeyState(0x10)
            
            if (eax_4 s< 0 && eax_5 s< 0)
                sub_6fa410(ecx_1)
            else if (msg.wParam != 0x53)
            label_6c83d9:
                hDlg = data_147d470
            label_6c83e3:
                
                if (IsDialogMessageA(hDlg, &msg) == 0)
                    TranslateMessage(&msg)
                    DispatchMessageA(&msg)
            else
                int16_t eax_6
                char* ecx_2
                eax_6, ecx_2 = GetKeyState(0x11)
                
                if (eax_6 s>= 0)
                    goto label_6c83d9
                
                sub_6f9e80(ecx_2)

sub_63f8b0()
return msg.wParam
