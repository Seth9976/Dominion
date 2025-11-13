// 函数: sub_4aedf0
// 地址: 0x4aedf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

RECT rect
char* result = __security_cookie ^ &rect
char* result_1 = result
void* edi = data_cc8dc0
char const* const var_44_1
int32_t var_40_1
char const* const var_3c_1
char* ecx_1

if (edi != 0)
    if (*(edi + 0x18) != 0)
        CookieCheckFunction(result)
        return result
    
    int32_t eax_1
    eax_1.b = *(edi + 0x14) == 0
    *(edi + 0x14) = eax_1
    GetClientRect(data_147b084, &rect)
    int32_t ecx_3 = rect.bottom - rect.top
    *(data_cf65b8 + 0x18) = ecx_3
    int32_t eax_3 = sub_4aecd0(ecx_3, *(edi + 0x14))
    void* ecx_4 = data_cf65b8
    HWND hWnd = data_147b084
    int32_t edi_1 = *(ecx_4 + 0x18)
    *(ecx_4 + 0x14) = eax_3
    GetWindowRect(hWnd, &rect)
    RECT rect_1
    GetClientRect(data_147b084, &rect_1)
    int32_t top = rect.top
    int32_t left = rect.left
    SetWindowPos(data_147b084, nullptr, left, top, 
        rect.right - left + eax_3 - (rect_1.right - rect_1.left), 
        rect.bottom - top + edi_1 - (rect_1.bottom - rect_1.top), SWP_DRAWFRAME)
    result = data_cc8d5c
    
    if (result != 0)
        result[0x75ac] = 1
        result = sub_4d6a20()
        
        if (data_8db5c4 == 0x27)
            int32_t ecx_10 = data_8db5c8
            
            if (ecx_10 != 0)
                uint32_t eax_10 = sub_64e7a0(sub_67bd70(ecx_10, "tbl_center_holder"))
                sub_65bf00(eax_10)
                result = sub_65bf40(eax_10)
        
        CookieCheckFunction(result)
        return result
    
    var_3c_1 = "GetClient"
    var_40_1 = 0x7b
    var_44_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_1 = "gClient"
else
    var_3c_1 = "GetLocalSettings"
    var_40_1 = 0x5fb
    var_44_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
    ecx_1 = "gGameSettings.localSettings"

sub_63b870(result, &data_801800, ecx_1, var_44_1, var_40_1, var_3c_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
