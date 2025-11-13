// 函数: sub_615bc0
// 地址: 0x615bc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
uint32_t result = sub_5cc5e0(arg2)
int32_t temp0 = *(result + (arg3 << 2))
*(result + (arg3 << 2)) += arg4

if (temp0 + arg4 s< 0)
    sub_63b870(result, &data_801800, "pgui.resources[resource] >= 0", 
        "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xc53b, "DomGainResource")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t edi

if (data_8db5c4 != 0x27)
    edi = 0
    
    if (data_8db5d4 == 0x27)
        edi = data_8db5d8
else
    edi = data_8db5c8

if (arg5 == 0 && arg6 != 0)
    if (arg3 u<= 3)
        int32_t* edx
        
        switch (arg3)
            case 0
                edx = data_171e738
            case 1
                edx = data_171e72c
            case 2
                edx = data_171e730
            case 3
                edx = data_171e73c
        
        int32_t var_18_1 = 0
        int32_t var_1c_1 = arg2
        result = sub_5af930(result, edx, arg2.b)
    
    if (edi != 0 && arg3 u<= 3)
        char const* const eax
        
        switch (arg3)
            case 0
                eax = "anim_coin"
            case 1
                eax = "anim_action"
            case 2
                eax = "anim_buy"
            case 3
                eax = "anim_potion"
        
        int32_t ecx_2
        result, ecx_2 = sub_4bb9f0(0x1a96580 + arg3 * 0x24, edi, eax)
        
        if (result != 0)
            char* edx_1 = "gain_resource"
            int32_t var_18_3 = 1
            int32_t var_1c_3 = ecx_2
            
            if (arg4 s<= 0)
                edx_1 = "lose_resource"
            
            return sub_67cd20(result, edx_1, result.b)

return result
