// 函数: sub_6cc4b0
// 地址: 0x6cc4b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = *((arg1 << 2) + &data_147d1ec)
data_147d214 = eax
int32_t ecx
int32_t edx

if (arg2 != 1)
    if (eax == 0 || eax == 0x3e8)
        goto label_6cc4da
    
    if (eax != 1)
        sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Engine\VR.cpp", 0x10d, 
            "VRSetRenderTargetForEye")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* eax_7
    
    if (*(data_cf65b8 + 0x1c) != 0 && data_ccf6e6 == 0)
        eax_7 = data_147abe8
    
    if (*(data_cf65b8 + 0x1c) != 0
            && (data_ccf6e6 != 0 || eax_7 == 0 || ((*(eax_7 + 0x1c) u>> 0xd).b & 1) == 0))
        int32_t eax_10 = data_147d1d4
        edx = *((eax_10 << 2) + &data_147d1d0)
        ecx = *((eax_10 << 2) + &data_147d1b8)
    else
        edx = data_147d1c8
        ecx = *((data_147d1d4 << 2) + &data_147d1c0)
else
    data_147d214 = 0x3e8
label_6cc4da:
    void* eax_2
    
    if (*(data_cf65b8 + 0x1c) != 0 && data_ccf6e6 == 0)
        eax_2 = data_147abe8
    
    if (*(data_cf65b8 + 0x1c) != 0
            && (data_ccf6e6 != 0 || eax_2 == 0 || ((*(eax_2 + 0x1c) u>> 0xd).b & 1) == 0))
        int32_t eax_5 = data_147d1d4
        edx = *((eax_5 << 2) + &data_147d1cc)
        ecx = *((eax_5 << 2) + &data_147d1b4)
    else
        edx = data_147d1c4
        ecx = *((data_147d1d4 << 2) + &data_147d1bc)

void* eax_13 = data_147b06c
*(eax_13 + 0x2cc) = 0
*(eax_13 + 0x170) = 2
*(eax_13 + 0x180) = ecx
*(eax_13 + 0x184) = edx
*(eax_13 + 0x188) = 1
return sub_6ad5d0(eax_13, edx, ecx, 1)
