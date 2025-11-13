// 函数: sub_666060
// 地址: 0x666060
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
int32_t xmm1 = *(arg2 + 0x14)
int32_t var_1c
char const* const ecx

if (xmm1 f>= -1000000f)
    if (not(1000000f f< xmm1))
        uint32_t eax_1 = sub_64e7a0(arg1)
        int128_t* edx = arg2
        int32_t i_1 = 0x1c
        int32_t* ecx_1 = eax_1 + 0x1620
        int32_t result
        int32_t i
        
        do
            result = *ecx_1
            
            if (result != *edx)
                *(eax_1 + 0x1620) = *arg2
                *(eax_1 + 0x1630) = arg2[1]
                return sub_65bf00(eax_1)
            
            ecx_1 = &ecx_1[1]
            edx += 4
            i = i_1
            i_1 -= 4
        while (i u>= 4)
        return result
    
    char const* const var_18_1 = "UI2SetTransform"
    var_1c = 0x3718
    ecx = "t.t.x <= 1000000.0f"
else
    char const* const var_18 = "UI2SetTransform"
    var_1c = 0x3717
    ecx = "t.t.x >= -1000000.0f"

int32_t eax
sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\UI2.cpp", var_1c, "UI2SetTransform")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
