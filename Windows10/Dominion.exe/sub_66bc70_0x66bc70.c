// 函数: sub_66bc70
// 地址: 0x66bc70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

sub_66ba80(arg1)
uint32_t eax = sub_64e7a0(arg1)
uint32_t edx = eax

if (*(edx + 5) == 0)
    void* ecx_1 = *(edx + 0x1718)
    
    if (ecx_1 != 0)
        eax = sub_6655e0(ecx_1)
    
    if (ecx_1 == 0 || eax.b == 0)
        data_c27c58 = *(edx + 0x1604)
        data_c28c58 = 1
        data_c28c5c = sub_66b9a0(sub_64e7a0(arg1))
        return memcpy(&(&data_c27c50)[data_ca9a6c * 0x407], &data_c27c54, 0x1018)

sub_63b870(eax, &data_801800, "!IsTemplate(el)", "C:\x\ax2017\Engine\UI2.cpp", 0x4060, 
    "UI2SetActiveElement")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
