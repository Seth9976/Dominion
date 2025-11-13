// 函数: sub_4bbeb0
// 地址: 0x4bbeb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_1 = sub_4bc380(arg2)

if (eax_1 u> 8)
    sub_63b870(eax_1, &data_801800, "Halt", "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", 
        0x1c1, "GameCreateButtonsUpdate")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

switch (eax_1)
    case 0
        uint32_t eax_2 = sub_64e7a0(arg3)
        sub_665db0(eax_2, &data_8db788, eax_2, 0x3f800000, 0xffffffff, 0)
        int32_t esi = 0
        void* edx = nullptr
        void* edi = nullptr
        void* ecx_4 = &arg2[0x16]
        int32_t i_1 = 8
        int32_t i
        
        do
            int32_t eax_3 = *(ecx_4 - 4)
            
            if (eax_3 == 0x3e8 || eax_3 == 0x3e9)
                esi += 1
            
            if (eax_3 == 3)
                edi += 1
            else if (eax_3 == 1)
                esi += 1
            else if (eax_3 == 2)
                void* eax_6 = edx + 1
                
                if (*ecx_4 != 0)
                    eax_6 = edx
                
                edx = eax_6
            
            ecx_4 += 0x22c
            i = i_1
            i_1 -= 1
        while (i != 1)
        void* result = edx + esi
        
        if (arg4 == i_1.b)
            result = edi + esi
        
        result.b = result s>= 2
        
        if (result.b != 0)
            return result
        
        uint32_t eax_9 = sub_64e7a0(arg3)
        return sub_665db0(eax_9, &data_8db77c, eax_9, 0x3f800000, 0xffffffff, 0)
    case 1
        uint32_t eax_10 = sub_64e7a0(arg3)
        return sub_665db0(eax_10, &data_8db794, eax_10, 0x3f800000, 0xffffffff, 0)
    case 2
        uint32_t eax_12 = sub_64e7a0(arg3)
        return sub_665db0(eax_12, &data_8db7ac, eax_12, 0x3f800000, 0xffffffff, 0)
    case 3
        uint32_t eax_14 = sub_64e7a0(arg3)
        return sub_665db0(eax_14, &data_8db7a0, eax_14, 0x3f800000, 0xffffffff, 0)
    case 4
        uint32_t eax_16 = sub_64e7a0(arg3)
        return sub_665db0(eax_16, &data_8db7b8, eax_16, 0x3f800000, 0xffffffff, 0)
    case 5
        uint32_t eax_18 = sub_64e7a0(arg3)
        return sub_665db0(eax_18, &data_8db7c4, eax_18, 0x3f800000, 0xffffffff, 0)
    case 6, 7
        uint32_t eax_22 = sub_64e7a0(arg3)
        return sub_665db0(eax_22, &data_8db7dc, eax_22, 0x3f800000, 0xffffffff, 0)
    case 8
        uint32_t eax_20 = sub_64e7a0(arg3)
        return sub_665db0(eax_20, &data_8db7d0, eax_20, 0x3f800000, 0xffffffff, 0)
