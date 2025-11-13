// 函数: sub_4abbe0
// 地址: 0x4abbe0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* hWnd = arg1

if (hWnd != 0)
    if (hWnd != 2)
        goto label_4abc4b
    
    hWnd = data_cc8dc0
    
    if (hWnd == 0)
        goto label_4abc92
    
    hWnd[0x20] = 1
    hWnd = sub_4d6a20()
    goto label_4abc4b

void* edi_1 = data_cc8dc0

if (edi_1 == 0)
label_4abc92:
    sub_63b870(hWnd, &data_801800, "gGameSettings.localSettings", 
        "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp", 0x5fb, "GetLocalSettings")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_1 = GetDeviceCaps(GetDC(hWnd), 0x5a)
int32_t ecx_2 = *(data_cf65b8 + 0x18)
*(edi_1 + 0x20) = 0
*(edi_1 + 0x1c) = divs.dp.d(sx.q(ecx_2 * 0x60), eax_1)
hWnd = sub_4d6a20()
label_4abc4b:

if (data_8db5c4 == 0x27)
    int32_t ecx_3 = data_8db5c8
    
    if (ecx_3 != 0)
        uint32_t eax_7 = sub_64e7a0(sub_67bd70(ecx_3, "tbl_center_holder"))
        sub_65bf00(eax_7)
        return sub_65bf40(eax_7)

return hWnd
