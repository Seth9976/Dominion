// 函数: sub_633aa0
// 地址: 0x633aa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = arg1

if ((arg2 & 1) != 0)
    return 

uint32_t edi_1 = *esi
void* eax = *(edi_1 + 0x1c28)

if (eax == data_b7fcd0)
    return 

if (esi[3].b == 0)
    int128_t var_1c
    
    if (esi[1] != 1)
        int32_t var_18_1 = 0
        
        if (*(edi_1 + 0x2c) == 0)
            eax = sub_5cbb20(edi_1)
            var_1c.d = 1
    else
        bool cond:1_1 = *(edi_1 + 0x2c) != 0
        int128_t xmm0_1 = zx.o(0)
        void* eax_1 = esi[2]
        int32_t ebx_1 = esi[5]
        var_1c = zx.o(0)
        
        if (not(cond:1_1))
            int32_t* eax_2 = sub_5cbb20(edi_1)
            arg1 = *(edi_1 + 0x10c)
            var_1c.d = 1
            
            if (arg1 == 0)
                arg1 = eax_2
            
            int32_t var_14_1 = *(edi_1 + 0xa0)
            int32_t* var_10_1 = arg1
            xmm0_1 = var_1c
        
        int32_t var_30_1 = 1
        var_1c = xmm0_1
        eax = sub_6339d0(eax_1, &var_1c, arg1, eax_1, ebx_1)
    esi[3].b = 1

uint32_t ecx_2 = *esi

if (ecx_2 == 0)
    sub_63b870(eax, &data_801800, "callback.gfx", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
        0x1116e, "TriggerMovementEnd")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (*(ecx_2 + 0x2c) == 0)
    sub_5cbb20(ecx_2)
