// 函数: sub_706630
// 地址: 0x706630
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
HWND hWnd = *(arg1 + 0xc)

if (*(data_cf65b8 + 0x22) == 0)
    SetWindowLongA(hWnd, 0xfffffff0, 0x10cf0000)
    enum DISP_CHANGE eax_8 = ChangeDisplaySettingsA(nullptr, 0)
    
    if (eax_8 != DISP_CHANGE_SUCCESSFUL)
        char const* const __saved_esi_2 = "Opengl failed to go back to windows mode"
        eax_8 = sub_63b5f0(*(data_cf65b8 + 0xc))
    
    int32_t edx = data_19e3bc0
    int32_t X = data_19e3bb8
    
    if (edx != X)
        int32_t Y = data_19e3bbc
        eax_8 =
            SetWindowPos(*(arg1 + 0xc), 0xfffffffe, X, Y, edx - X, data_19e3bc4 - Y, SWP_SHOWWINDOW)
    
    CookieCheckFunction(eax_8)
    return eax_8

SetWindowLongA(hWnd, 0xfffffff0, 0x90080000)
GetWindowRect(*(arg1 + 0xc), &data_19e3bb8)
DEVMODEA devMode
memset(&devMode, 0, 0x9c)
void* ecx = data_cf65b8
devMode.dmSize = 0x9c
devMode.dmPelsWidth = *(ecx + 0x14)
devMode.dmPelsHeight = *(ecx + 0x18)
devMode.dmBitsPerPel = 0x20
devMode.dmFields = 0x1c0000
bool cond:1 = ChangeDisplaySettingsA(&devMode, CDS_FULLSCREEN) == DISP_CHANGE_SUCCESSFUL
void* eax_6 = data_cf65b8

if (not(cond:1))
    char const* const __saved_esi_1 = "Opengl failed to set full screen mode"
    sub_63b5f0(*(eax_6 + 0xc))
    eax_6 = data_cf65b8
    *(eax_6 + 0x22) = 0

BOOL eax_7 =
    SetWindowPos(*(arg1 + 0xc), 0xfffffffe, 0, 0, *(eax_6 + 0x14), *(eax_6 + 0x18), SWP_SHOWWINDOW)
CookieCheckFunction(eax_7)
return eax_7
