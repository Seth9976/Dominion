// 函数: sub_74ac70
// 地址: 0x74ac70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
HWND hWnd = GetDlgItem(data_147d470, 0xab)
int32_t* ecx_1 = data_1512450

if (ecx_1[1] != 0x1e)
    sub_63b870(hWnd, &data_801800, "ptr->assetType == ASSET_TYPE_UI", 
        "C:\x\ax2017\Engine\UIDef.cpp", 0x127, "UIDefGet")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* eax = sub_5af880(ecx_1)
SendMessageA(hWnd, 0x19b, 0, zx.d(eax[2].w) << 0x10)
int32_t i = 0

if (eax[2] s> 0)
    int32_t edx_1 = data_151345c
    int32_t* edi_1 = nullptr
    
    do
        int32_t eax_1 = 0
        
        if (edx_1 s> 0)
            do
                if ((&data_151245c)[eax_1] == *(edi_1 + *eax))
                    uint32_t eax_2 = zx.d(i.w)
                    SendMessageA(hWnd, 0x19b, 1, eax_2 << 0x10 | eax_2)
                    edx_1 = data_151345c
                    break
                
                eax_1 += 1
            while (eax_1 s< edx_1)
        
        i += 1
        edi_1 = &edi_1[0x5e]
    while (i s< eax[2])

return sub_6f7f40()
