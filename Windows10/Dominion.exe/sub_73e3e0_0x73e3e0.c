// 函数: sub_73e3e0
// 地址: 0x73e3e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

HWND hWnd = GetDlgItem(data_147d470, 0xab)
int32_t* ecx = data_147df90

if (ecx[1] != 0x20)
    sub_63b870(hWnd, &data_801800, "ptr->assetType == ASSET_TYPE_FAB", 
        "C:\x\ax2017\Engine\FabDef.cpp", 0xeb, "FabDefGet")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* eax = sub_5af880(ecx)
SendMessageA(hWnd, 0x19b, 0, zx.d(*(eax + 8)) << 0x10)
int32_t i = 0

if (*(eax + 8) s> 0)
    int32_t ecx_3 = data_147ef94
    
    do
        int32_t eax_1 = 0
        
        if (ecx_3 s> 0)
            do
                if ((&data_147df94)[eax_1] == i)
                    uint32_t eax_2 = zx.d(i.w)
                    SendMessageA(hWnd, 0x19b, 1, eax_2 << 0x10 | eax_2)
                    ecx_3 = data_147ef94
                    break
                
                eax_1 += 1
            while (eax_1 s< ecx_3)
        
        i += 1
    while (i s< *(eax + 8))

return sub_6f7240() __tailcall
