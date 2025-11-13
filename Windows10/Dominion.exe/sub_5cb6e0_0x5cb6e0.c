// 函数: sub_5cb6e0
// 地址: 0x5cb6e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm1 = *(arg2 + 0x14)
int32_t var_a4
char const* const var_a0
char* ecx

if (xmm1 >= -100000f)
    if (not(100000f < xmm1))
        bool cond:1 = *(arg1 + 0x17c0) == 0
        int128_t xmm0 = *arg2
        int32_t var_8c = 0
        int128_t var_24 = xmm0
        int128_t var_14 = arg2[1]
        
        if (not(cond:1))
            sub_633aa0(arg1 + 0x250, 1)
        
        *(arg1 + 0x17c0) = 0
        __builtin_memcpy(arg1 + 0x90, &var_8c, 0x88)
        __builtin_memcpy(arg1 + 0x118, &var_8c, 0x88)
        return 
    
    var_a0 = "DomMove_InstantTransform"
    var_a4 = 0x82c
    ecx = "t.t.x <= 100000.0f"
else
    var_a0 = "DomMove_InstantTransform"
    var_a4 = 0x82b
    ecx = "t.t.x >= -100000.0f"

int32_t eax
sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_a4, var_a0)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
