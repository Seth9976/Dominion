// 函数: sub_4ea0b0
// 地址: 0x4ea0b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
int32_t ecx = *arg1

if (ecx != 0)
    uint32_t eax_1 = sub_6a82e0(ecx)
    sub_7112e0(*(eax_1 + 8))
    sub_713890(*(eax_1 + 4))
    int32_t edx = data_caf778
    data_caf778 = zx.d(*(eax_1 + 0x14))
    *(eax_1 + 0x14) = edx
    data_caf77c -= 1

int32_t* eax_2 = sub_6a8390(arg2, nullptr)
arg1[1] = "card_position"
*arg1 = eax_2
uint32_t eax_3 = sub_6a82e0(eax_2)
int32_t* result = sub_710140(***(eax_3 + 8), "buy_event")

if (result != 0)
    arg1[0x24] = result[1]
    result[1]
    int32_t var_20_1 = 0x3f800000
    void var_2c
    sub_6a85f0(sub_714930(result, *(eax_3 + 4), result, var_2c), &data_7ffb14, eax_2, (zx.o(0)).d, 
        &data_7ffb1c, 1f)
    void* var_20_2 = &arg1[0x13]
    void* eax_6 = sub_6a8d00(&arg1[0x13], "card_position", eax_2, arg1, eax_2)
    
    if (eax_6.b == 0)
        sub_63b870(eax_6, &data_801800, "hasSlot", "C:\x\ax2017\Engine\Spine.cpp", 0x311, 
            "SpinePlayInterpolated")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t var_20_3 = 0x3f800000
    sub_6a85f0(sub_714930(eax_6, *(eax_3 + 4), result), &data_7ffb14, eax_2, (zx.o(0)).d, 
        &data_7ffb1c, 1f)
    void* var_20_4 = &arg1[2]
    void* eax_9
    int32_t edx_3
    eax_9, edx_3 = sub_6a8d00(&arg1[2], "card_position", eax_2, arg1, eax_2)
    result = sub_7129a0(eax_9, edx_3, *(eax_3 + 8), result, 0)
    *(eax_3 + 0xc) = 2

arg1[0x25] = 0
return result
