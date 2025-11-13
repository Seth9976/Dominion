// 函数: sub_63bdd0
// 地址: 0x63bdd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
TEB* fsbase
void* esi = *fsbase->ThreadLocalStoragePointer
int32_t ebx
ebx.b = arg1

if (data_1a98f34 s> *(esi + 8))
    sub_75970e(&data_1a98f34)
    
    if (data_1a98f34 == 0xffffffff)
        data_1a98f38 = 0x80000000
        data_1a98f3c = 0x80000000
        __Init_thread_footer(&data_1a98f34)

if (data_1a98f40 s> *(esi + 8))
    sub_75970e(&data_1a98f40)
    
    if (data_1a98f40 == 0xffffffff)
        void* eax_5 = data_cf65b8
        int32_t eax_6 = *(eax_5 + 0x18)
        data_1a98f44 = *(eax_5 + 0x14)
        data_1a98f48 = eax_6
        __Init_thread_footer(&data_1a98f40)

int32_t X
int32_t Y
int32_t cx
int32_t cy
MONITORINFO lpmi

if (ebx.b == 0)
    int32_t X_1 = data_1a98f38
    int32_t Y_1
    
    if (X_1 != 0x80000000)
        Y_1 = data_1a98f3c
    else
        HMONITOR hMonitor_1 = MonitorFromWindow(data_147b084, MONITOR_DEFAULTTONEAREST)
        lpmi.cbSize = 0x28
        lpmi.dwFlags = 0
        lpmi.rcMonitor.left = 0
        lpmi.rcMonitor.top = 0
        lpmi.rcMonitor.right = 0
        lpmi.rcMonitor.bottom = 0
        lpmi.rcWork.left = 0
        lpmi.rcWork.top = 0
        lpmi.rcWork.right = 0
        lpmi.rcWork.bottom = 0
        GetMonitorInfoA(hMonitor_1, &lpmi)
        X_1 = lpmi.rcMonitor.left + 0x64
        Y_1 = lpmi.rcMonitor.top + 0x64
        data_1a98f38 = X_1
        data_1a98f3c = Y_1
    
    int32_t cx_2 = data_1a98f44
    int32_t cy_2 = data_1a98f48
    SetWindowLongA(data_147b084, 0xfffffff0, 0x10cf0000)
    int32_t var_5c_5 = 0x20
    cy = cy_2
    cx = cx_2
    Y = Y_1
    X = X_1
else
    RECT rect
    GetWindowRect(data_147b084, &rect)
    int32_t left_1 = rect.left
    int32_t top = rect.top
    data_1a98f44 = rect.right - left_1
    int32_t eax_10 = rect.bottom - top
    data_1a98f38 = left_1
    data_1a98f48 = eax_10
    void* eax_11 = data_cf65b8
    HWND hwnd = data_147b084
    data_1a98f3c = top
    *(eax_11 + 0x24) = 1
    HMONITOR hMonitor = MonitorFromWindow(hwnd, MONITOR_DEFAULTTONEAREST)
    lpmi.cbSize = 0x28
    lpmi.dwFlags = 0
    lpmi.rcMonitor.left = 0
    lpmi.rcMonitor.top = 0
    lpmi.rcMonitor.right = 0
    lpmi.rcMonitor.bottom = 0
    lpmi.rcWork.left = 0
    lpmi.rcWork.top = 0
    lpmi.rcWork.right = 0
    lpmi.rcWork.bottom = 0
    GetMonitorInfoA(hMonitor, &lpmi)
    int32_t left = lpmi.rcMonitor.left
    int32_t cx_1 = lpmi.rcMonitor.right - left
    int32_t top_1 = lpmi.rcMonitor.top
    int32_t cy_1 = lpmi.rcMonitor.bottom - top_1
    SetWindowLongA(data_147b084, 0xfffffff0, 0x90000000)
    int32_t var_5c_3 = 0x20
    cy = cy_1
    cx = cx_1
    Y = top_1
    X = left
BOOL result = SetWindowPos(data_147b084, nullptr, X, Y, cx, cy, SWP_DRAWFRAME)
CookieCheckFunction(result)
return result
