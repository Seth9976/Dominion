// 函数: sub_6b1ae0
// 地址: 0x6b1ae0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax

if (arg2 == 1)
    int32_t* eax_1 = *(arg1 + 0xc)
    int32_t result
    int32_t edx_1
    result, edx_1 = (*(*eax_1 + 0x20))(eax_1, 0, 0)
    
    if (result == 0x887a0005 || result == 0x887a0007)
        sub_6b09d0(result, edx_1, arg1, result)
        noreturn
    
    if (result s>= 0)
        return result
    
    int32_t result_1 = result
    sub_63b870(sub_63b7f0("DX11 Error: %x\n"), &data_801800, "Halt", 
        "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", 0xea, "Dx11CheckHResult")
else
    sub_63b870(eax, &data_801800, "monitor == MONITOR_MAIN", 
        "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", 0x8a7, "Dx11GraphicsInterface::APIPresent")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
