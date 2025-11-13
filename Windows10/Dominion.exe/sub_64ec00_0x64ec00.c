// 函数: sub_64ec00
// 地址: 0x64ec00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = sub_64e660(arg1)
int32_t edx = *(arg1 + 0x189c)
int32_t eax = *(result + 0x18c8)
int32_t var_24_1
char const* const ecx_1

if (edx s< 0)
    char const* const var_20_1 = "UI2::addChild"
    var_24_1 = 0xb3e
    ecx_1 = "numChildren >= 0"
else if (edx s< 0x40)
label_64ec8c:
    
    if (eax != 0)
        *(arg1 + (edx << 2) + 0x179c) = eax
        *(arg1 + 0x189c) += 1
        return result
    
    char const* const var_20_4 = "UI2::addChild"
    var_24_1 = 0xb49
    ecx_1 = "h != UI2_NULL"
else
    int32_t esi_1 = 0
    void* ebx_1 = arg1 + 0x179c
    
    do
        int32_t var_20_2 = *(sub_64e7a0(*ebx_1) + 0x15e4)
        int32_t var_24_2 = esi_1
        sub_63b5f0("child i %d idx %d")
        edx = *(arg1 + 0x189c)
        ebx_1 += 4
        esi_1 += 1
    while (esi_1 s< edx)
    
    if (edx s< 0x40)
        goto label_64ec8c
    
    char const* const var_20_3 = "UI2::addChild"
    var_24_1 = 0xb48
    ecx_1 = "numChildren < MAX_CHILDREN"

sub_63b870(eax, &data_801800, ecx_1, "C:\x\ax2017\Engine\UI2.cpp", var_24_1, "UI2::addChild")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
